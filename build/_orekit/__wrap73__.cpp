#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeComponents::class$ = NULL;
      jmethodID *TimeComponents::mids$ = NULL;
      bool TimeComponents::live$ = false;
      TimeComponents *TimeComponents::H00 = NULL;
      TimeComponents *TimeComponents::H12 = NULL;

      jclass TimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_754312f3734d6e2f] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_386e0c67203bc264] = env->getMethodID(cls, "<init>", "(IIDI)V");
          mids$[mid_compareTo_6e350921bda47203] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/TimeComponents;)I");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_formatUtcOffset_3cffd47377eca18a] = env->getMethodID(cls, "formatUtcOffset", "()Ljava/lang/String;");
          mids$[mid_fromSeconds_468fc34f3ae36f6b] = env->getStaticMethodID(cls, "fromSeconds", "(IDDI)Lorg/orekit/time/TimeComponents;");
          mids$[mid_getHour_412668abc8d889e9] = env->getMethodID(cls, "getHour", "()I");
          mids$[mid_getMinute_412668abc8d889e9] = env->getMethodID(cls, "getMinute", "()I");
          mids$[mid_getMinutesFromUTC_412668abc8d889e9] = env->getMethodID(cls, "getMinutesFromUTC", "()I");
          mids$[mid_getSecond_557b8123390d8d0c] = env->getMethodID(cls, "getSecond", "()D");
          mids$[mid_getSecondsInLocalDay_557b8123390d8d0c] = env->getMethodID(cls, "getSecondsInLocalDay", "()D");
          mids$[mid_getSecondsInUTCDay_557b8123390d8d0c] = env->getMethodID(cls, "getSecondsInUTCDay", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseTime_e1ddcbc9cb8f2009] = env->getStaticMethodID(cls, "parseTime", "(Ljava/lang/String;)Lorg/orekit/time/TimeComponents;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_3cffd47377eca18a] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          H00 = new TimeComponents(env->getStaticObjectField(cls, "H00", "Lorg/orekit/time/TimeComponents;"));
          H12 = new TimeComponents(env->getStaticObjectField(cls, "H12", "Lorg/orekit/time/TimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeComponents::TimeComponents(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      TimeComponents::TimeComponents(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_754312f3734d6e2f, a0, a1, a2)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_386e0c67203bc264, a0, a1, a2, a3)) {}

      jint TimeComponents::compareTo(const TimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_6e350921bda47203], a0.this$);
      }

      jboolean TimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::java::lang::String TimeComponents::formatUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_formatUtcOffset_3cffd47377eca18a]));
      }

      TimeComponents TimeComponents::fromSeconds(jint a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_fromSeconds_468fc34f3ae36f6b], a0, a1, a2, a3));
      }

      jint TimeComponents::getHour() const
      {
        return env->callIntMethod(this$, mids$[mid_getHour_412668abc8d889e9]);
      }

      jint TimeComponents::getMinute() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinute_412668abc8d889e9]);
      }

      jint TimeComponents::getMinutesFromUTC() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinutesFromUTC_412668abc8d889e9]);
      }

      jdouble TimeComponents::getSecond() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecond_557b8123390d8d0c]);
      }

      jdouble TimeComponents::getSecondsInLocalDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInLocalDay_557b8123390d8d0c]);
      }

      jdouble TimeComponents::getSecondsInUTCDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInUTCDay_557b8123390d8d0c]);
      }

      jint TimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      TimeComponents TimeComponents::parseTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseTime_e1ddcbc9cb8f2009], a0.this$));
      }

      ::java::lang::String TimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String TimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_3cffd47377eca18a]));
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
      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg);
      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data);
      static PyGetSetDef t_TimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_TimeComponents, hour),
        DECLARE_GET_FIELD(t_TimeComponents, minute),
        DECLARE_GET_FIELD(t_TimeComponents, minutesFromUTC),
        DECLARE_GET_FIELD(t_TimeComponents, second),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInLocalDay),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInUTCDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeComponents__methods_[] = {
        DECLARE_METHOD(t_TimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_TimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, formatUtcOffset, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, fromSeconds, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, getHour, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinute, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinutesFromUTC, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInLocalDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInUTCDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, parseTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, toStringWithoutUtcOffset, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeComponents)[] = {
        { Py_tp_methods, t_TimeComponents__methods_ },
        { Py_tp_init, (void *) t_TimeComponents_init_ },
        { Py_tp_getset, t_TimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeComponents, t_TimeComponents, TimeComponents);

      void t_TimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeComponents), &PY_TYPE_DEF(TimeComponents), module, "TimeComponents", 0);
      }

      void t_TimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "class_", make_descriptor(TimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "wrapfn_", make_descriptor(t_TimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H00", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H00)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H12", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H12)));
      }

      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeComponents::initializeClass, 1)))
          return NULL;
        return t_TimeComponents::wrap_Object(TimeComponents(((t_TimeComponents *) arg)->object.this$));
      }
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = TimeComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jint a3;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIDI", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2, a3));
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

      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg)
      {
        TimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", TimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.formatUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        TimeComponents result((jobject) NULL);

        if (!parseArgs(args, "IDDI", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::fromSeconds(a0, a1, a2, a3));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fromSeconds", args);
        return NULL;
      }

      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getHour());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinute());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecond());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::parseTime(a0));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTime", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getHour());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinute());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecond());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *DateDetector::class$ = NULL;
        jmethodID *DateDetector::mids$ = NULL;
        bool DateDetector::live$ = false;
        jdouble DateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble DateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble DateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass DateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/DateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1e4a523e2df6fd31] = env->getMethodID(cls, "<init>", "([Lorg/orekit/time/TimeStamped;)V");
            mids$[mid_addEventDate_20affcbd28542333] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDates_0d9551367f7ecdef] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_55168a13fa43b797] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/DateDetector;");
            mids$[mid_create_2827a5ee6c5052d6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/DateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DateDetector::DateDetector(const JArray< ::org::orekit::time::TimeStamped > & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1e4a523e2df6fd31, a0.this$)) {}

        void DateDetector::addEventDate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_20affcbd28542333], a0.this$);
        }

        jdouble DateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate DateDetector::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        ::java::util::List DateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_0d9551367f7ecdef]));
        }

        DateDetector DateDetector::withMinGap(jdouble a0) const
        {
          return DateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_55168a13fa43b797], a0));
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
        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args);
        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args);
        static PyObject *t_DateDetector_getDate(t_DateDetector *self);
        static PyObject *t_DateDetector_getDates(t_DateDetector *self);
        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data);
        static PyGetSetDef t_DateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_DateDetector, date),
          DECLARE_GET_FIELD(t_DateDetector, dates),
          DECLARE_GET_FIELD(t_DateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DateDetector__methods_[] = {
          DECLARE_METHOD(t_DateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_DateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DateDetector)[] = {
          { Py_tp_methods, t_DateDetector__methods_ },
          { Py_tp_init, (void *) t_DateDetector_init_ },
          { Py_tp_getset, t_DateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(DateDetector, t_DateDetector, DateDetector);
        PyObject *t_DateDetector::wrap_Object(const DateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(DateDetector), &PY_TYPE_DEF(DateDetector), module, "DateDetector", 0);
        }

        void t_DateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "class_", make_descriptor(DateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "wrapfn_", make_descriptor(t_DateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(DateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MAX_CHECK", make_descriptor(DateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MIN_GAP", make_descriptor(DateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_THRESHOLD", make_descriptor(DateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DateDetector::initializeClass, 1)))
            return NULL;
          return t_DateDetector::wrap_Object(DateDetector(((t_DateDetector *) arg)->object.this$));
        }
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::time::TimeStamped > a0((jobject) NULL);
          DateDetector object((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
          {
            INT_CALL(object = DateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(DateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(DateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_DateDetector_getDate(t_DateDetector *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_DateDetector_getDates(t_DateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(TimeStamped));
        }

        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg)
        {
          jdouble a0;
          DateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_DateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/util/Collection.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/Set.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTPropagator::class$ = NULL;
          jmethodID *DSSTPropagator::mids$ = NULL;
          bool DSSTPropagator::live$ = false;

          jclass DSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb1ae62b5d826baa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
              mids$[mid_init$_f9a0f6f49e4bc2f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_f7aec771cf5adae1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_2a559dedc6480c51] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_0df22e98a56f8617] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeMeanState_13b37fa0f1290791] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeOsculatingState_0df22e98a56f8617] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_2dfcbd371d62f4e1] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_getShortPeriodTerms_0d9551367f7ecdef] = env->getMethodID(cls, "getShortPeriodTerms", "()Ljava/util/List;");
              mids$[mid_getShortPeriodTermsValue_2a145999b8c9a41d] = env->getMethodID(cls, "getShortPeriodTermsValue", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_initialIsOsculating_89b302893bdbe1f1] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_0640e6acf969ed28] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_8655761ebf04b503] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setInitialState_cd59a3a5d9eb366e] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_10f281d777284cea] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(D)V");
              mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setSatelliteRevolution_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_d05f6817e35222f6] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_setShortPeriodTerms_4ccaedadb068bdeb] = env->getMethodID(cls, "setShortPeriodTerms", "(Ljava/util/List;)V");
              mids$[mid_tolerances_db41ee0d716a9319] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_tolerances_191511155bca2c72] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_createMapper_31b084497c320ed2] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
              mids$[mid_getInitialIntegrationState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_beforeIntegration_0472264ad6f40bc2] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_afterIntegration_0640e6acf969ed28] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getMainStateEquations_4a2f137b7a0c1747] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
              mids$[mid_setUpStmAndJacobianGenerators_0640e6acf969ed28] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_bb1ae62b5d826baa, a0.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f9a0f6f49e4bc2f0, a0.this$, a1.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f7aec771cf5adae1, a0.this$, a1.this$, a2.this$)) {}

          void DSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_2a559dedc6480c51], a0.this$);
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_0df22e98a56f8617], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_13b37fa0f1290791], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_0df22e98a56f8617], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List DSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
          }

          ::org::orekit::orbits::OrbitType DSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
          }

          ::org::orekit::orbits::PositionAngleType DSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
          }

          jint DSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_412668abc8d889e9]);
          }

          ::java::util::Set DSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_2dfcbd371d62f4e1]));
          }

          ::java::util::List DSSTPropagator::getShortPeriodTerms() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShortPeriodTerms_0d9551367f7ecdef]));
          }

          JArray< jdouble > DSSTPropagator::getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getShortPeriodTermsValue_2a145999b8c9a41d], a0.this$));
          }

          jboolean DSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_89b302893bdbe1f1]);
          }

          void DSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_0640e6acf969ed28]);
          }

          void DSSTPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
          }

          void DSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_8655761ebf04b503], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_cd59a3a5d9eb366e], a0.this$, a1.this$);
          }

          void DSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b], a0);
          }

          void DSSTPropagator::setInterpolationGridToMaxTimeGap(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_10f281d777284cea], a0);
          }

          void DSSTPropagator::setMu(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_10f281d777284cea], a0);
          }

          void DSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_a3da1a935cb37f7b], a0);
          }

          void DSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_d05f6817e35222f6], a0.this$);
          }

          void DSSTPropagator::setShortPeriodTerms(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setShortPeriodTerms_4ccaedadb068bdeb], a0.this$);
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_db41ee0d716a9319], a0, a1.this$));
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_191511155bca2c72], a0, a1, a2.this$));
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
          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_DSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_DSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_DSSTPropagator, mu),
            DECLARE_GET_FIELD(t_DSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_DSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, selectedCoefficients),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, shortPeriodTerms),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_DSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTerms, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTermsValue, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTPropagator)[] = {
            { Py_tp_methods, t_DSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_DSSTPropagator_init_ },
            { Py_tp_getset, t_DSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(DSSTPropagator, t_DSSTPropagator, DSSTPropagator);

          void t_DSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTPropagator), &PY_TYPE_DEF(DSSTPropagator), module, "DSSTPropagator", 0);
          }

          void t_DSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "class_", make_descriptor(DSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "wrapfn_", make_descriptor(t_DSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_DSSTPropagator::wrap_Object(DSSTPropagator(((t_DSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
                {
                  INT_CALL(object = DSSTPropagator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kKk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1, a2));
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

          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getShortPeriodTermsValue(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getShortPeriodTermsValue", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                ::org::orekit::orbits::Orbit a1((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::orbits::Orbit a2((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
              {
                INT_CALL(self->object.setAttitudeProvider(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setShortPeriodTerms(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "shortPeriodTerms", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodFacade::class$ = NULL;
          jmethodID *PocMethodFacade::mids$ = NULL;
          bool PocMethodFacade::live$ = false;

          jclass PocMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_94701ab674aa32f2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/PocMethodType;)V");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getType_02085b86725642db] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_parse_589a3825a8dd2867] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PocMethodFacade::PocMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::PocMethodType & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94701ab674aa32f2, a0.this$, a1.this$)) {}

          ::java::lang::String PocMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::org::orekit::files::ccsds::definitions::PocMethodType PocMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getType_02085b86725642db]));
          }

          PocMethodFacade PocMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_589a3825a8dd2867], a0.this$));
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
        namespace definitions {
          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data);
          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data);
          static PyGetSetDef t_PocMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodFacade, name),
            DECLARE_GET_FIELD(t_PocMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodFacade__methods_[] = {
            DECLARE_METHOD(t_PocMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodFacade)[] = {
            { Py_tp_methods, t_PocMethodFacade__methods_ },
            { Py_tp_init, (void *) t_PocMethodFacade_init_ },
            { Py_tp_getset, t_PocMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PocMethodFacade, t_PocMethodFacade, PocMethodFacade);

          void t_PocMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodFacade), &PY_TYPE_DEF(PocMethodFacade), module, "PocMethodFacade", 0);
          }

          void t_PocMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "class_", make_descriptor(PocMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "wrapfn_", make_descriptor(t_PocMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodFacade::initializeClass, 1)))
              return NULL;
            return t_PocMethodFacade::wrap_Object(PocMethodFacade(((t_PocMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::PocMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            PocMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::definitions::PocMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_PocMethodType::parameters_))
            {
              INT_CALL(object = PocMethodFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodFacade::parse(a0));
              return t_PocMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"
#include "java/lang/InstantiationException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/Package.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Class::class$ = NULL;
    jmethodID *Class::mids$ = NULL;
    bool Class::live$ = false;

    jclass Class::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Class");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asSubclass_c1bd0f9c0c5cc3c8] = env->getMethodID(cls, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
        mids$[mid_cast_65d69db95c5eb156] = env->getMethodID(cls, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_desiredAssertionStatus_89b302893bdbe1f1] = env->getMethodID(cls, "desiredAssertionStatus", "()Z");
        mids$[mid_forName_33271d9fced271c1] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_3eb86302ebf8d401] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_71c1e5b35d89d3a9] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        mids$[mid_getCanonicalName_3cffd47377eca18a] = env->getMethodID(cls, "getCanonicalName", "()Ljava/lang/String;");
        mids$[mid_getClassLoader_822bf82dfc5992ba] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getClasses_c988485cdace3d64] = env->getMethodID(cls, "getClasses", "()[Ljava/lang/Class;");
        mids$[mid_getComponentType_d4b191ff8147475d] = env->getMethodID(cls, "getComponentType", "()Ljava/lang/Class;");
        mids$[mid_getDeclaredClasses_c988485cdace3d64] = env->getMethodID(cls, "getDeclaredClasses", "()[Ljava/lang/Class;");
        mids$[mid_getDeclaringClass_d4b191ff8147475d] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_getEnclosingClass_d4b191ff8147475d] = env->getMethodID(cls, "getEnclosingClass", "()Ljava/lang/Class;");
        mids$[mid_getEnumConstants_6555a5198c71b73a] = env->getMethodID(cls, "getEnumConstants", "()[Ljava/lang/Object;");
        mids$[mid_getInterfaces_c988485cdace3d64] = env->getMethodID(cls, "getInterfaces", "()[Ljava/lang/Class;");
        mids$[mid_getModifiers_412668abc8d889e9] = env->getMethodID(cls, "getModifiers", "()I");
        mids$[mid_getModule_04458a8861f7bacc] = env->getMethodID(cls, "getModule", "()Ljava/lang/Module;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getNestHost_d4b191ff8147475d] = env->getMethodID(cls, "getNestHost", "()Ljava/lang/Class;");
        mids$[mid_getNestMembers_c988485cdace3d64] = env->getMethodID(cls, "getNestMembers", "()[Ljava/lang/Class;");
        mids$[mid_getPackage_2272e6eee5532c62] = env->getMethodID(cls, "getPackage", "()Ljava/lang/Package;");
        mids$[mid_getPackageName_3cffd47377eca18a] = env->getMethodID(cls, "getPackageName", "()Ljava/lang/String;");
        mids$[mid_getResource_b738586de9814931] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_425095ef57e6735b] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSigners_6555a5198c71b73a] = env->getMethodID(cls, "getSigners", "()[Ljava/lang/Object;");
        mids$[mid_getSimpleName_3cffd47377eca18a] = env->getMethodID(cls, "getSimpleName", "()Ljava/lang/String;");
        mids$[mid_getSuperclass_d4b191ff8147475d] = env->getMethodID(cls, "getSuperclass", "()Ljava/lang/Class;");
        mids$[mid_getTypeName_3cffd47377eca18a] = env->getMethodID(cls, "getTypeName", "()Ljava/lang/String;");
        mids$[mid_isAnnotation_89b302893bdbe1f1] = env->getMethodID(cls, "isAnnotation", "()Z");
        mids$[mid_isAnonymousClass_89b302893bdbe1f1] = env->getMethodID(cls, "isAnonymousClass", "()Z");
        mids$[mid_isArray_89b302893bdbe1f1] = env->getMethodID(cls, "isArray", "()Z");
        mids$[mid_isAssignableFrom_0580a8a10aabb274] = env->getMethodID(cls, "isAssignableFrom", "(Ljava/lang/Class;)Z");
        mids$[mid_isEnum_89b302893bdbe1f1] = env->getMethodID(cls, "isEnum", "()Z");
        mids$[mid_isInstance_221e8e85cb385209] = env->getMethodID(cls, "isInstance", "(Ljava/lang/Object;)Z");
        mids$[mid_isInterface_89b302893bdbe1f1] = env->getMethodID(cls, "isInterface", "()Z");
        mids$[mid_isLocalClass_89b302893bdbe1f1] = env->getMethodID(cls, "isLocalClass", "()Z");
        mids$[mid_isMemberClass_89b302893bdbe1f1] = env->getMethodID(cls, "isMemberClass", "()Z");
        mids$[mid_isNestmateOf_0580a8a10aabb274] = env->getMethodID(cls, "isNestmateOf", "(Ljava/lang/Class;)Z");
        mids$[mid_isPrimitive_89b302893bdbe1f1] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isSynthetic_89b302893bdbe1f1] = env->getMethodID(cls, "isSynthetic", "()Z");
        mids$[mid_newInstance_e661fe3ba2fafb22] = env->getMethodID(cls, "newInstance", "()Ljava/lang/Object;");
        mids$[mid_toGenericString_3cffd47377eca18a] = env->getMethodID(cls, "toGenericString", "()Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Class Class::asSubclass(const Class & a0) const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_asSubclass_c1bd0f9c0c5cc3c8], a0.this$));
    }

    ::java::lang::Object Class::cast(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cast_65d69db95c5eb156], a0.this$));
    }

    jboolean Class::desiredAssertionStatus() const
    {
      return env->callBooleanMethod(this$, mids$[mid_desiredAssertionStatus_89b302893bdbe1f1]);
    }

    Class Class::forName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_33271d9fced271c1], a0.this$));
    }

    Class Class::forName(const ::java::lang::Module & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_3eb86302ebf8d401], a0.this$, a1.this$));
    }

    Class Class::forName(const ::java::lang::String & a0, jboolean a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_71c1e5b35d89d3a9], a0.this$, a1, a2.this$));
    }

    ::java::lang::String Class::getCanonicalName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalName_3cffd47377eca18a]));
    }

    ::java::lang::ClassLoader Class::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_822bf82dfc5992ba]));
    }

    JArray< Class > Class::getClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getClasses_c988485cdace3d64]));
    }

    Class Class::getComponentType() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getComponentType_d4b191ff8147475d]));
    }

    JArray< Class > Class::getDeclaredClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getDeclaredClasses_c988485cdace3d64]));
    }

    Class Class::getDeclaringClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_d4b191ff8147475d]));
    }

    Class Class::getEnclosingClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getEnclosingClass_d4b191ff8147475d]));
    }

    JArray< ::java::lang::Object > Class::getEnumConstants() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getEnumConstants_6555a5198c71b73a]));
    }

    JArray< Class > Class::getInterfaces() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getInterfaces_c988485cdace3d64]));
    }

    jint Class::getModifiers() const
    {
      return env->callIntMethod(this$, mids$[mid_getModifiers_412668abc8d889e9]);
    }

    ::java::lang::Module Class::getModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getModule_04458a8861f7bacc]));
    }

    ::java::lang::String Class::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    Class Class::getNestHost() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getNestHost_d4b191ff8147475d]));
    }

    JArray< Class > Class::getNestMembers() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getNestMembers_c988485cdace3d64]));
    }

    ::java::lang::Package Class::getPackage() const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getPackage_2272e6eee5532c62]));
    }

    ::java::lang::String Class::getPackageName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPackageName_3cffd47377eca18a]));
    }

    ::java::net::URL Class::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_b738586de9814931], a0.this$));
    }

    ::java::io::InputStream Class::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_425095ef57e6735b], a0.this$));
    }

    JArray< ::java::lang::Object > Class::getSigners() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getSigners_6555a5198c71b73a]));
    }

    ::java::lang::String Class::getSimpleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSimpleName_3cffd47377eca18a]));
    }

    Class Class::getSuperclass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getSuperclass_d4b191ff8147475d]));
    }

    ::java::lang::String Class::getTypeName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeName_3cffd47377eca18a]));
    }

    jboolean Class::isAnnotation() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnnotation_89b302893bdbe1f1]);
    }

    jboolean Class::isAnonymousClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnonymousClass_89b302893bdbe1f1]);
    }

    jboolean Class::isArray() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isArray_89b302893bdbe1f1]);
    }

    jboolean Class::isAssignableFrom(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAssignableFrom_0580a8a10aabb274], a0.this$);
    }

    jboolean Class::isEnum() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEnum_89b302893bdbe1f1]);
    }

    jboolean Class::isInstance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInstance_221e8e85cb385209], a0.this$);
    }

    jboolean Class::isInterface() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterface_89b302893bdbe1f1]);
    }

    jboolean Class::isLocalClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLocalClass_89b302893bdbe1f1]);
    }

    jboolean Class::isMemberClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isMemberClass_89b302893bdbe1f1]);
    }

    jboolean Class::isNestmateOf(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNestmateOf_0580a8a10aabb274], a0.this$);
    }

    jboolean Class::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_89b302893bdbe1f1]);
    }

    jboolean Class::isSynthetic() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSynthetic_89b302893bdbe1f1]);
    }

    ::java::lang::Object Class::newInstance() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_newInstance_e661fe3ba2fafb22]));
    }

    ::java::lang::String Class::toGenericString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGenericString_3cffd47377eca18a]));
    }

    ::java::lang::String Class::toString() const
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
    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_of_(t_Class *self, PyObject *args);
    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg);
    static PyObject *t_Class_cast(t_Class *self, PyObject *arg);
    static PyObject *t_Class_desiredAssertionStatus(t_Class *self);
    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args);
    static PyObject *t_Class_getCanonicalName(t_Class *self);
    static PyObject *t_Class_getClassLoader(t_Class *self);
    static PyObject *t_Class_getClasses(t_Class *self);
    static PyObject *t_Class_getComponentType(t_Class *self);
    static PyObject *t_Class_getDeclaredClasses(t_Class *self);
    static PyObject *t_Class_getDeclaringClass(t_Class *self);
    static PyObject *t_Class_getEnclosingClass(t_Class *self);
    static PyObject *t_Class_getEnumConstants(t_Class *self);
    static PyObject *t_Class_getInterfaces(t_Class *self);
    static PyObject *t_Class_getModifiers(t_Class *self);
    static PyObject *t_Class_getModule(t_Class *self);
    static PyObject *t_Class_getName(t_Class *self);
    static PyObject *t_Class_getNestHost(t_Class *self);
    static PyObject *t_Class_getNestMembers(t_Class *self);
    static PyObject *t_Class_getPackage(t_Class *self);
    static PyObject *t_Class_getPackageName(t_Class *self);
    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getSigners(t_Class *self);
    static PyObject *t_Class_getSimpleName(t_Class *self);
    static PyObject *t_Class_getSuperclass(t_Class *self);
    static PyObject *t_Class_getTypeName(t_Class *self);
    static PyObject *t_Class_isAnnotation(t_Class *self);
    static PyObject *t_Class_isAnonymousClass(t_Class *self);
    static PyObject *t_Class_isArray(t_Class *self);
    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isEnum(t_Class *self);
    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isInterface(t_Class *self);
    static PyObject *t_Class_isLocalClass(t_Class *self);
    static PyObject *t_Class_isMemberClass(t_Class *self);
    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isPrimitive(t_Class *self);
    static PyObject *t_Class_isSynthetic(t_Class *self);
    static PyObject *t_Class_newInstance(t_Class *self);
    static PyObject *t_Class_toGenericString(t_Class *self);
    static PyObject *t_Class_toString(t_Class *self, PyObject *args);
    static PyObject *t_Class_get__annotation(t_Class *self, void *data);
    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data);
    static PyObject *t_Class_get__array(t_Class *self, void *data);
    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data);
    static PyObject *t_Class_get__classLoader(t_Class *self, void *data);
    static PyObject *t_Class_get__classes(t_Class *self, void *data);
    static PyObject *t_Class_get__componentType(t_Class *self, void *data);
    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data);
    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enum(t_Class *self, void *data);
    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data);
    static PyObject *t_Class_get__interface(t_Class *self, void *data);
    static PyObject *t_Class_get__interfaces(t_Class *self, void *data);
    static PyObject *t_Class_get__localClass(t_Class *self, void *data);
    static PyObject *t_Class_get__memberClass(t_Class *self, void *data);
    static PyObject *t_Class_get__modifiers(t_Class *self, void *data);
    static PyObject *t_Class_get__module(t_Class *self, void *data);
    static PyObject *t_Class_get__name(t_Class *self, void *data);
    static PyObject *t_Class_get__nestHost(t_Class *self, void *data);
    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data);
    static PyObject *t_Class_get__package(t_Class *self, void *data);
    static PyObject *t_Class_get__packageName(t_Class *self, void *data);
    static PyObject *t_Class_get__primitive(t_Class *self, void *data);
    static PyObject *t_Class_get__signers(t_Class *self, void *data);
    static PyObject *t_Class_get__simpleName(t_Class *self, void *data);
    static PyObject *t_Class_get__superclass(t_Class *self, void *data);
    static PyObject *t_Class_get__synthetic(t_Class *self, void *data);
    static PyObject *t_Class_get__typeName(t_Class *self, void *data);
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data);
    static PyGetSetDef t_Class__fields_[] = {
      DECLARE_GET_FIELD(t_Class, annotation),
      DECLARE_GET_FIELD(t_Class, anonymousClass),
      DECLARE_GET_FIELD(t_Class, array),
      DECLARE_GET_FIELD(t_Class, canonicalName),
      DECLARE_GET_FIELD(t_Class, classLoader),
      DECLARE_GET_FIELD(t_Class, classes),
      DECLARE_GET_FIELD(t_Class, componentType),
      DECLARE_GET_FIELD(t_Class, declaredClasses),
      DECLARE_GET_FIELD(t_Class, declaringClass),
      DECLARE_GET_FIELD(t_Class, enclosingClass),
      DECLARE_GET_FIELD(t_Class, enum),
      DECLARE_GET_FIELD(t_Class, enumConstants),
      DECLARE_GET_FIELD(t_Class, interface),
      DECLARE_GET_FIELD(t_Class, interfaces),
      DECLARE_GET_FIELD(t_Class, localClass),
      DECLARE_GET_FIELD(t_Class, memberClass),
      DECLARE_GET_FIELD(t_Class, modifiers),
      DECLARE_GET_FIELD(t_Class, module),
      DECLARE_GET_FIELD(t_Class, name),
      DECLARE_GET_FIELD(t_Class, nestHost),
      DECLARE_GET_FIELD(t_Class, nestMembers),
      DECLARE_GET_FIELD(t_Class, package),
      DECLARE_GET_FIELD(t_Class, packageName),
      DECLARE_GET_FIELD(t_Class, primitive),
      DECLARE_GET_FIELD(t_Class, signers),
      DECLARE_GET_FIELD(t_Class, simpleName),
      DECLARE_GET_FIELD(t_Class, superclass),
      DECLARE_GET_FIELD(t_Class, synthetic),
      DECLARE_GET_FIELD(t_Class, typeName),
      DECLARE_GET_FIELD(t_Class, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Class__methods_[] = {
      DECLARE_METHOD(t_Class, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, of_, METH_VARARGS),
      DECLARE_METHOD(t_Class, asSubclass, METH_O),
      DECLARE_METHOD(t_Class, cast, METH_O),
      DECLARE_METHOD(t_Class, desiredAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_Class, forName, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Class, getCanonicalName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getComponentType, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaredClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnclosingClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnumConstants, METH_NOARGS),
      DECLARE_METHOD(t_Class, getInterfaces, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModifiers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModule, METH_NOARGS),
      DECLARE_METHOD(t_Class, getName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestHost, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestMembers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackage, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackageName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getResource, METH_O),
      DECLARE_METHOD(t_Class, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Class, getSigners, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSimpleName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSuperclass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getTypeName, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnnotation, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnonymousClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isArray, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAssignableFrom, METH_O),
      DECLARE_METHOD(t_Class, isEnum, METH_NOARGS),
      DECLARE_METHOD(t_Class, isInstance, METH_O),
      DECLARE_METHOD(t_Class, isInterface, METH_NOARGS),
      DECLARE_METHOD(t_Class, isLocalClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isMemberClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isNestmateOf, METH_O),
      DECLARE_METHOD(t_Class, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_Class, isSynthetic, METH_NOARGS),
      DECLARE_METHOD(t_Class, newInstance, METH_NOARGS),
      DECLARE_METHOD(t_Class, toGenericString, METH_NOARGS),
      DECLARE_METHOD(t_Class, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Class)[] = {
      { Py_tp_methods, t_Class__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Class__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Class)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Class, t_Class, Class);
    PyObject *t_Class::wrap_Object(const Class& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Class::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Class::install(PyObject *module)
    {
      installType(&PY_TYPE(Class), &PY_TYPE_DEF(Class), module, "Class", 0);
    }

    void t_Class::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "class_", make_descriptor(Class::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "wrapfn_", make_descriptor(t_Class::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Class::initializeClass, 1)))
        return NULL;
      return t_Class::wrap_Object(Class(((t_Class *) arg)->object.this$));
    }
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Class::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Class_of_(t_Class *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      Class result((jobject) NULL);

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.asSubclass(a0));
        return t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "asSubclass", arg);
      return NULL;
    }

    static PyObject *t_Class_cast(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.cast(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "cast", arg);
      return NULL;
    }

    static PyObject *t_Class_desiredAssertionStatus(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.desiredAssertionStatus());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Module a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          ::java::lang::ClassLoader a2((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "sZk", ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1, a2));
            return t_Class::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "forName", args);
      return NULL;
    }

    static PyObject *t_Class_getCanonicalName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalName());
      return j2p(result);
    }

    static PyObject *t_Class_getClassLoader(t_Class *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Class_getClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getComponentType(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getComponentType());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getDeclaredClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaredClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getDeclaringClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnclosingClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnclosingClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnumConstants(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnumConstants());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getInterfaces(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getInterfaces());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getModifiers(t_Class *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getModifiers());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Class_getModule(t_Class *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_Class_getName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Class_getNestHost(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestHost());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getNestMembers(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestMembers());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getPackage(t_Class *self)
    {
      ::java::lang::Package result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(result);
    }

    static PyObject *t_Class_getPackageName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackageName());
      return j2p(result);
    }

    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg)
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

    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg)
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

    static PyObject *t_Class_getSigners(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSigners());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getSimpleName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSimpleName());
      return j2p(result);
    }

    static PyObject *t_Class_getSuperclass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuperclass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getTypeName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeName());
      return j2p(result);
    }

    static PyObject *t_Class_isAnnotation(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnnotation());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAnonymousClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnonymousClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isArray(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isArray());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isAssignableFrom(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isAssignableFrom", arg);
      return NULL;
    }

    static PyObject *t_Class_isEnum(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEnum());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.isInstance(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isInstance", arg);
      return NULL;
    }

    static PyObject *t_Class_isInterface(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterface());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isLocalClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isLocalClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isMemberClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isMemberClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isNestmateOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isNestmateOf", arg);
      return NULL;
    }

    static PyObject *t_Class_isPrimitive(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isSynthetic(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isSynthetic());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_newInstance(t_Class *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.newInstance());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Class_toGenericString(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGenericString());
      return j2p(result);
    }

    static PyObject *t_Class_toString(t_Class *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Class), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Class_get__annotation(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnnotation());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnonymousClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__array(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isArray());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalName());
      return j2p(value);
    }

    static PyObject *t_Class_get__classLoader(t_Class *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Class_get__classes(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__componentType(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getComponentType());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaredClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnclosingClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enum(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEnum());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnumConstants());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__interface(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInterface());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__interfaces(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getInterfaces());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__localClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isLocalClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__memberClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isMemberClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__modifiers(t_Class *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getModifiers());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Class_get__module(t_Class *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }

    static PyObject *t_Class_get__name(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Class_get__nestHost(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestHost());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestMembers());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__package(t_Class *self, void *data)
    {
      ::java::lang::Package value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(value);
    }

    static PyObject *t_Class_get__packageName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackageName());
      return j2p(value);
    }

    static PyObject *t_Class_get__primitive(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__signers(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSigners());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__simpleName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSimpleName());
      return j2p(value);
    }

    static PyObject *t_Class_get__superclass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuperclass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__synthetic(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSynthetic());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__typeName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeShiftable::class$ = NULL;
      jmethodID *TimeShiftable::mids$ = NULL;
      bool TimeShiftable::live$ = false;

      jclass TimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_f8c1bde396d79158] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeShiftable TimeShiftable::shiftedBy(jdouble a0) const
      {
        return TimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_f8c1bde396d79158], a0));
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
      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args);
      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg);
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data);
      static PyGetSetDef t_TimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_TimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeShiftable__methods_[] = {
        DECLARE_METHOD(t_TimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeShiftable)[] = {
        { Py_tp_methods, t_TimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeShiftable, t_TimeShiftable, TimeShiftable);
      PyObject *t_TimeShiftable::wrap_Object(const TimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeShiftable), &PY_TYPE_DEF(TimeShiftable), module, "TimeShiftable", 0);
      }

      void t_TimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "class_", make_descriptor(TimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "wrapfn_", make_descriptor(t_TimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeShiftable::initializeClass, 1)))
          return NULL;
        return t_TimeShiftable::wrap_Object(TimeShiftable(((t_TimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg)
      {
        jdouble a0;
        TimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_TimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *GenericTimeStampedCache::class$ = NULL;
      jmethodID *GenericTimeStampedCache::mids$ = NULL;
      bool GenericTimeStampedCache::live$ = false;
      jint GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER = (jint) 0;

      jclass GenericTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/GenericTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0f6126ec31c23fbe] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;)V");
          mids$[mid_init$_7dccdc905f2755d6] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;D)V");
          mids$[mid_getEarliest_da8f710d3d2958bf] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getEntries_412668abc8d889e9] = env->getMethodID(cls, "getEntries", "()I");
          mids$[mid_getGenerateCalls_412668abc8d889e9] = env->getMethodID(cls, "getGenerateCalls", "()I");
          mids$[mid_getGenerator_2c8890bb845f5c9a] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/utils/TimeStampedGenerator;");
          mids$[mid_getGetNeighborsCalls_412668abc8d889e9] = env->getMethodID(cls, "getGetNeighborsCalls", "()I");
          mids$[mid_getLatest_da8f710d3d2958bf] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getMaxSlots_412668abc8d889e9] = env->getMethodID(cls, "getMaxSlots", "()I");
          mids$[mid_getMaxSpan_557b8123390d8d0c] = env->getMethodID(cls, "getMaxSpan", "()D");
          mids$[mid_getNeighbors_b9470a4d1609cf1f] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_getNewSlotQuantumGap_557b8123390d8d0c] = env->getMethodID(cls, "getNewSlotQuantumGap", "()D");
          mids$[mid_getSlots_412668abc8d889e9] = env->getMethodID(cls, "getSlots", "()I");
          mids$[mid_getSlotsEvictions_412668abc8d889e9] = env->getMethodID(cls, "getSlotsEvictions", "()I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_CACHED_SLOTS_NUMBER = env->getStaticIntField(cls, "DEFAULT_CACHED_SLOTS_NUMBER");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f6126ec31c23fbe, a0, a1, a2, a3, a4.this$)) {}

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7dccdc905f2755d6, a0, a1, a2, a3, a4.this$, a5)) {}

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_da8f710d3d2958bf]));
      }

      jint GenericTimeStampedCache::getEntries() const
      {
        return env->callIntMethod(this$, mids$[mid_getEntries_412668abc8d889e9]);
      }

      jint GenericTimeStampedCache::getGenerateCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGenerateCalls_412668abc8d889e9]);
      }

      ::org::orekit::utils::TimeStampedGenerator GenericTimeStampedCache::getGenerator() const
      {
        return ::org::orekit::utils::TimeStampedGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_2c8890bb845f5c9a]));
      }

      jint GenericTimeStampedCache::getGetNeighborsCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGetNeighborsCalls_412668abc8d889e9]);
      }

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_da8f710d3d2958bf]));
      }

      jint GenericTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_412668abc8d889e9]);
      }

      jint GenericTimeStampedCache::getMaxSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxSlots_412668abc8d889e9]);
      }

      jdouble GenericTimeStampedCache::getMaxSpan() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxSpan_557b8123390d8d0c]);
      }

      ::java::util::stream::Stream GenericTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_b9470a4d1609cf1f], a0.this$, a1));
      }

      jdouble GenericTimeStampedCache::getNewSlotQuantumGap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNewSlotQuantumGap_557b8123390d8d0c]);
      }

      jint GenericTimeStampedCache::getSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlots_412668abc8d889e9]);
      }

      jint GenericTimeStampedCache::getSlotsEvictions() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlotsEvictions_412668abc8d889e9]);
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
      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args);
      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args);
      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data);
      static PyGetSetDef t_GenericTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, entries),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generateCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generator),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, getNeighborsCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSlots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSpan),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, newSlotQuantumGap),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slotsEvictions),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GenericTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_GenericTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerateCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGetNeighborsCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSpan, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNewSlotQuantumGap, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlotsEvictions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GenericTimeStampedCache)[] = {
        { Py_tp_methods, t_GenericTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_GenericTimeStampedCache_init_ },
        { Py_tp_getset, t_GenericTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GenericTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GenericTimeStampedCache, t_GenericTimeStampedCache, GenericTimeStampedCache);
      PyObject *t_GenericTimeStampedCache::wrap_Object(const GenericTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_GenericTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_GenericTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(GenericTimeStampedCache), &PY_TYPE_DEF(GenericTimeStampedCache), module, "GenericTimeStampedCache", 0);
      }

      void t_GenericTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "class_", make_descriptor(GenericTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "wrapfn_", make_descriptor(t_GenericTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        env->getClass(GenericTimeStampedCache::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "DEFAULT_CACHED_SLOTS_NUMBER", make_descriptor(GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER));
      }

      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GenericTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_GenericTimeStampedCache::wrap_Object(GenericTimeStampedCache(((t_GenericTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GenericTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDK", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDKD", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_, &a5))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEntries());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGenerateCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::utils::TimeStampedGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEntries());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGenerateCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::utils::TimeStampedGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanModel::class$ = NULL;
        jmethodID *UnscentedKalmanModel::mids$ = NULL;
        bool UnscentedKalmanModel::live$ = false;

        jclass UnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_55b445719d7de2a7] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_2d0616b730e7ec0f] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_17da385c0c368282] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_6f113314fca6b7ed] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_88f7aeb25bb98f36] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_6f886d47d0124943], a0.this$, a1.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af]));
        }

        ::org::orekit::time::AbsoluteDate UnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint UnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_55b445719d7de2a7]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a]));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_2d0616b730e7ec0f]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_17da385c0c368282], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_6f113314fca6b7ed], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::hipparchus::linear::RealVector > UnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_88f7aeb25bb98f36], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_5dccf571345671af]));
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
      namespace sequential {
        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_UnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanModel)[] = {
          { Py_tp_methods, t_UnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanModel, t_UnscentedKalmanModel, UnscentedKalmanModel);

        void t_UnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanModel), &PY_TYPE_DEF(UnscentedKalmanModel), module, "UnscentedKalmanModel", 0);
        }

        void t_UnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "class_", make_descriptor(UnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "wrapfn_", make_descriptor(t_UnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanModel::wrap_Object(UnscentedKalmanModel(((t_UnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region::class$ = NULL;
        jmethodID *Region::mids$ = NULL;
        bool Region::live$ = false;

        jclass Region::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildNew_37b48e8bc9bf7f8e] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_checkPoint_97aee1e2a4e02b02] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_ecd31bc5520bb9ef] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_fd006079784937f2] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getBarycenter_abb5df84e8ab06b8] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_557b8123390d8d0c] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTree_95b875058c69b395] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_90bd3924ff8382db] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_c5db5624507e8c83] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_89b302893bdbe1f1] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_c5db5624507e8c83] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_76fb0949df043b81] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region Region::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_buildNew_37b48e8bc9bf7f8e], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location Region::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_97aee1e2a4e02b02], a0.this$));
        }

        jboolean Region::contains(const Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_ecd31bc5520bb9ef], a0.this$);
        }

        Region Region::copySelf() const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_copySelf_fd006079784937f2]));
        }

        ::org::hipparchus::geometry::Point Region::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_abb5df84e8ab06b8]));
        }

        jdouble Region::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_557b8123390d8d0c]);
        }

        jdouble Region::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree Region::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_95b875058c69b395], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Region::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_90bd3924ff8382db], a0.this$));
        }

        jboolean Region::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
        }

        jboolean Region::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_c5db5624507e8c83], a0.this$);
        }

        jboolean Region::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_89b302893bdbe1f1]);
        }

        jboolean Region::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_c5db5624507e8c83], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection Region::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_76fb0949df043b81], a0.this$));
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
        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_of_(t_Region *self, PyObject *args);
        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg);
        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg);
        static PyObject *t_Region_contains(t_Region *self, PyObject *arg);
        static PyObject *t_Region_copySelf(t_Region *self);
        static PyObject *t_Region_getBarycenter(t_Region *self);
        static PyObject *t_Region_getBoundarySize(t_Region *self);
        static PyObject *t_Region_getSize(t_Region *self);
        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg);
        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg);
        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args);
        static PyObject *t_Region_isFull(t_Region *self, PyObject *args);
        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg);
        static PyObject *t_Region_get__barycenter(t_Region *self, void *data);
        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data);
        static PyObject *t_Region_get__empty(t_Region *self, void *data);
        static PyObject *t_Region_get__full(t_Region *self, void *data);
        static PyObject *t_Region_get__size(t_Region *self, void *data);
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data);
        static PyGetSetDef t_Region__fields_[] = {
          DECLARE_GET_FIELD(t_Region, barycenter),
          DECLARE_GET_FIELD(t_Region, boundarySize),
          DECLARE_GET_FIELD(t_Region, empty),
          DECLARE_GET_FIELD(t_Region, full),
          DECLARE_GET_FIELD(t_Region, size),
          DECLARE_GET_FIELD(t_Region, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region__methods_[] = {
          DECLARE_METHOD(t_Region, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region, buildNew, METH_O),
          DECLARE_METHOD(t_Region, checkPoint, METH_O),
          DECLARE_METHOD(t_Region, contains, METH_O),
          DECLARE_METHOD(t_Region, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getSize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getTree, METH_O),
          DECLARE_METHOD(t_Region, intersection, METH_O),
          DECLARE_METHOD(t_Region, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_Region, isFull, METH_VARARGS),
          DECLARE_METHOD(t_Region, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region)[] = {
          { Py_tp_methods, t_Region__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Region, t_Region, Region);
        PyObject *t_Region::wrap_Object(const Region& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region::install(PyObject *module)
        {
          installType(&PY_TYPE(Region), &PY_TYPE_DEF(Region), module, "Region", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "Location", make_descriptor(&PY_TYPE_DEF(Region$Location)));
        }

        void t_Region::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "class_", make_descriptor(Region::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "wrapfn_", make_descriptor(t_Region::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region::initializeClass, 1)))
            return NULL;
          return t_Region::wrap_Object(Region(((t_Region *) arg)->object.this$));
        }
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region_of_(t_Region *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.checkPoint(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
          return NULL;
        }

        static PyObject *t_Region_contains(t_Region *self, PyObject *arg)
        {
          Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Region::initializeClass, &a0, &p0, t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_Region_copySelf(t_Region *self)
        {
          Region result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBarycenter(t_Region *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBoundarySize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getSize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_Region_isFull(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Region_get__barycenter(t_Region *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Region_get__empty(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__full(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__size(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEIntegrator::class$ = NULL;
      jmethodID *FieldODEIntegrator::mids$ = NULL;
      bool FieldODEIntegrator::live$ = false;

      jclass FieldODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_7951513ad7dd1f46] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_f4eae0b3d6c5e2af] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_01ea5dfa7056a45c] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_613c8f46c659f636] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_45f3e0f3929fa6d9] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_integrate_dd582e1c9ef253c9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_7951513ad7dd1f46], a0.this$);
      }

      void FieldODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_f4eae0b3d6c5e2af], a0.this$);
      }

      void FieldODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_01ea5dfa7056a45c], a0.this$);
      }

      void FieldODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0640e6acf969ed28]);
      }

      void FieldODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0640e6acf969ed28]);
      }

      void FieldODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_613c8f46c659f636]));
      }

      jint FieldODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      ::java::util::List FieldODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_0d9551367f7ecdef]));
      }

      jint FieldODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
      }

      ::java::lang::String FieldODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::util::List FieldODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_0d9551367f7ecdef]));
      }

      ::java::util::List FieldODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_0d9551367f7ecdef]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_45f3e0f3929fa6d9]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_dd582e1c9ef253c9], a0.this$, a1.this$, a2.this$));
      }

      void FieldODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_a3da1a935cb37f7b], a0);
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
      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data);
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data);
      static PyGetSetDef t_FieldODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_FieldODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, name),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepStart),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegrator)[] = {
        { Py_tp_methods, t_FieldODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEIntegrator, t_FieldODEIntegrator, FieldODEIntegrator);
      PyObject *t_FieldODEIntegrator::wrap_Object(const FieldODEIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEIntegrator), &PY_TYPE_DEF(FieldODEIntegrator), module, "FieldODEIntegrator", 0);
      }

      void t_FieldODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "class_", make_descriptor(FieldODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "wrapfn_", make_descriptor(t_FieldODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldODEIntegrator::wrap_Object(FieldODEIntegrator(((t_FieldODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.integrate(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogNormalDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogNormalDistribution::class$ = NULL;
        jmethodID *LogNormalDistribution::mids$ = NULL;
        bool LogNormalDistribution::live$ = false;

        jclass LogNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_557b8123390d8d0c] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getShape_557b8123390d8d0c] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_2268d18be49a6087] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogNormalDistribution::LogNormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble LogNormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble LogNormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble LogNormalDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_557b8123390d8d0c]);
        }

        jdouble LogNormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble LogNormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble LogNormalDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_557b8123390d8d0c]);
        }

        jdouble LogNormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble LogNormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean LogNormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble LogNormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
        }

        jdouble LogNormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2268d18be49a6087], a0, a1);
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
      namespace continuous {
        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data);
        static PyGetSetDef t_LogNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogNormalDistribution, location),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogNormalDistribution, shape),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_LogNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogNormalDistribution)[] = {
          { Py_tp_methods, t_LogNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_LogNormalDistribution_init_ },
          { Py_tp_getset, t_LogNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogNormalDistribution, t_LogNormalDistribution, LogNormalDistribution);

        void t_LogNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogNormalDistribution), &PY_TYPE_DEF(LogNormalDistribution), module, "LogNormalDistribution", 0);
        }

        void t_LogNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "class_", make_descriptor(LogNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "wrapfn_", make_descriptor(t_LogNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_LogNormalDistribution::wrap_Object(LogNormalDistribution(((t_LogNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LogNormalDistribution object((jobject) NULL);

              INT_CALL(object = LogNormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1, a2));
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

        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthITU453AtmosphereRefraction::class$ = NULL;
        jmethodID *EarthITU453AtmosphereRefraction::mids$ = NULL;
        bool EarthITU453AtmosphereRefraction::live$ = false;

        jclass EarthITU453AtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthITU453AtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getRefraction_7e960cd6eee376d8] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTheta0_557b8123390d8d0c] = env->getMethodID(cls, "getTheta0", "()D");
            mids$[mid_getThetaMin_557b8123390d8d0c] = env->getMethodID(cls, "getThetaMin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthITU453AtmosphereRefraction::EarthITU453AtmosphereRefraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble EarthITU453AtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_7e960cd6eee376d8], a0);
        }

        jdouble EarthITU453AtmosphereRefraction::getTheta0() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTheta0_557b8123390d8d0c]);
        }

        jdouble EarthITU453AtmosphereRefraction::getThetaMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThetaMin_557b8123390d8d0c]);
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
        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyGetSetDef t_EarthITU453AtmosphereRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, theta0),
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, thetaMin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthITU453AtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getTheta0, METH_NOARGS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getThetaMin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthITU453AtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthITU453AtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthITU453AtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthITU453AtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthITU453AtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthITU453AtmosphereRefraction, t_EarthITU453AtmosphereRefraction, EarthITU453AtmosphereRefraction);

        void t_EarthITU453AtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthITU453AtmosphereRefraction), &PY_TYPE_DEF(EarthITU453AtmosphereRefraction), module, "EarthITU453AtmosphereRefraction", 0);
        }

        void t_EarthITU453AtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "class_", make_descriptor(EarthITU453AtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthITU453AtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthITU453AtmosphereRefraction::wrap_Object(EarthITU453AtmosphereRefraction(((t_EarthITU453AtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EarthITU453AtmosphereRefraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EarthITU453AtmosphereRefraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTheta0());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThetaMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTheta0());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThetaMin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationType::class$ = NULL;
            jmethodID *ObservationType::mids$ = NULL;
            bool ObservationType::live$ = false;
            ObservationType *ObservationType::ANGLE_1 = NULL;
            ObservationType *ObservationType::ANGLE_2 = NULL;
            ObservationType *ObservationType::CARRIER_POWER = NULL;
            ObservationType *ObservationType::CLOCK_BIAS = NULL;
            ObservationType *ObservationType::CLOCK_DRIFT = NULL;
            ObservationType *ObservationType::DOPPLER_COUNT = NULL;
            ObservationType *ObservationType::DOPPLER_INSTANTANEOUS = NULL;
            ObservationType *ObservationType::DOPPLER_INTEGRATED = NULL;
            ObservationType *ObservationType::DOR = NULL;
            ObservationType *ObservationType::MAG = NULL;
            ObservationType *ObservationType::PC_N0 = NULL;
            ObservationType *ObservationType::PRESSURE = NULL;
            ObservationType *ObservationType::PR_N0 = NULL;
            ObservationType *ObservationType::RANGE = NULL;
            ObservationType *ObservationType::RCS = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_1 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_2 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_3 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_4 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_5 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::RHUMIDITY = NULL;
            ObservationType *ObservationType::STEC = NULL;
            ObservationType *ObservationType::TEMPERATURE = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::TROPO_DRY = NULL;
            ObservationType *ObservationType::TROPO_WET = NULL;
            ObservationType *ObservationType::VLBI_DELAY = NULL;

            jclass ObservationType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_ed8b45f2e265f28c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_rawToSI_39eff01712aa84c6] = env->getMethodID(cls, "rawToSI", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_siToRaw_39eff01712aa84c6] = env->getMethodID(cls, "siToRaw", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_valueOf_09376b04ec936bb1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");
                mids$[mid_values_eb72dc802a5409b9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_1 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                ANGLE_2 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CARRIER_POWER = new ObservationType(env->getStaticObjectField(cls, "CARRIER_POWER", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_BIAS = new ObservationType(env->getStaticObjectField(cls, "CLOCK_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_DRIFT = new ObservationType(env->getStaticObjectField(cls, "CLOCK_DRIFT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_COUNT = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_COUNT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INSTANTANEOUS = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INSTANTANEOUS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INTEGRATED = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INTEGRATED", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOR = new ObservationType(env->getStaticObjectField(cls, "DOR", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                MAG = new ObservationType(env->getStaticObjectField(cls, "MAG", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PC_N0 = new ObservationType(env->getStaticObjectField(cls, "PC_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PRESSURE = new ObservationType(env->getStaticObjectField(cls, "PRESSURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PR_N0 = new ObservationType(env->getStaticObjectField(cls, "PR_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RANGE = new ObservationType(env->getStaticObjectField(cls, "RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RCS = new ObservationType(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RHUMIDITY = new ObservationType(env->getStaticObjectField(cls, "RHUMIDITY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                STEC = new ObservationType(env->getStaticObjectField(cls, "STEC", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TEMPERATURE = new ObservationType(env->getStaticObjectField(cls, "TEMPERATURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_DRY = new ObservationType(env->getStaticObjectField(cls, "TROPO_DRY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_WET = new ObservationType(env->getStaticObjectField(cls, "TROPO_WET", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                VLBI_DELAY = new ObservationType(env->getStaticObjectField(cls, "VLBI_DELAY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ObservationType::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a3, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_ed8b45f2e265f28c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$);
            }

            jdouble ObservationType::rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_rawToSI_39eff01712aa84c6], a0.this$, a1.this$, a2.this$, a3);
            }

            jdouble ObservationType::siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_siToRaw_39eff01712aa84c6], a0.this$, a1.this$, a2.this$, a3);
            }

            ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_09376b04ec936bb1], a0.this$));
            }

            JArray< ObservationType > ObservationType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_eb72dc802a5409b9]));
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
          namespace tdm {
            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ObservationType_values(PyTypeObject *type);
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
            static PyGetSetDef t_ObservationType__fields_[] = {
              DECLARE_GET_FIELD(t_ObservationType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationType__methods_[] = {
              DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, process, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, rawToSI, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, siToRaw, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
              { Py_tp_methods, t_ObservationType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ObservationType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
            PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ObservationType::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
            }

            void t_ObservationType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ObservationType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CARRIER_POWER", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CARRIER_POWER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_BIAS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_DRIFT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_DRIFT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_COUNT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_COUNT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INSTANTANEOUS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INSTANTANEOUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INTEGRATED", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INTEGRATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOR", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "MAG", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PC_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PC_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PRESSURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PRESSURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PR_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PR_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RANGE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RCS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RHUMIDITY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RHUMIDITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "STEC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::STEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TEMPERATURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TEMPERATURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_DRY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_DRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_WET", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_WET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "VLBI_DELAY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::VLBI_DELAY)));
            }

            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
                return NULL;
              return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
            }
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a3((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.rawToSI(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "rawToSI", args);
              return NULL;
            }

            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.siToRaw(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToRaw", args);
              return NULL;
            }

            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ObservationType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::valueOf(a0));
                return t_ObservationType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ObservationType_values(PyTypeObject *type)
            {
              JArray< ObservationType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::values());
              return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
            }
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBody::class$ = NULL;
      jmethodID *CelestialBody::mids$ = NULL;
      bool CelestialBody::live$ = false;

      jclass CelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyOrientedFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_557b8123390d8d0c] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame CelestialBody::getBodyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyOrientedFrame_6c9bc0a928c56d4e]));
      }

      jdouble CelestialBody::getGM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGM_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Frame CelestialBody::getInertiallyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertiallyOrientedFrame_6c9bc0a928c56d4e]));
      }

      ::java::lang::String CelestialBody::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getName(t_CelestialBody *self);
      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data);
      static PyGetSetDef t_CelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBody, bodyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, gM),
        DECLARE_GET_FIELD(t_CelestialBody, inertiallyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBody__methods_[] = {
        DECLARE_METHOD(t_CelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, getBodyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getGM, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getInertiallyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBody)[] = {
        { Py_tp_methods, t_CelestialBody__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBody)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(CelestialBody, t_CelestialBody, CelestialBody);

      void t_CelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBody), &PY_TYPE_DEF(CelestialBody), module, "CelestialBody", 0);
      }

      void t_CelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "class_", make_descriptor(CelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "wrapfn_", make_descriptor(t_CelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBody::initializeClass, 1)))
          return NULL;
        return t_CelestialBody::wrap_Object(CelestialBody(((t_CelestialBody *) arg)->object.this$));
      }
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getName(t_CelestialBody *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data)
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
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TypeSvMessage::class$ = NULL;
          jmethodID *TypeSvMessage::mids$ = NULL;
          bool TypeSvMessage::live$ = false;

          jclass TypeSvMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TypeSvMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationMessageType_3cffd47377eca18a] = env->getMethodID(cls, "getNavigationMessageType", "()Ljava/lang/String;");
              mids$[mid_getPrn_412668abc8d889e9] = env->getMethodID(cls, "getPrn", "()I");
              mids$[mid_getSystem_8b86408cc2633961] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String TypeSvMessage::getNavigationMessageType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNavigationMessageType_3cffd47377eca18a]));
          }

          jint TypeSvMessage::getPrn() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrn_412668abc8d889e9]);
          }

          ::org::orekit::gnss::SatelliteSystem TypeSvMessage::getSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_8b86408cc2633961]));
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data);
          static PyGetSetDef t_TypeSvMessage__fields_[] = {
            DECLARE_GET_FIELD(t_TypeSvMessage, navigationMessageType),
            DECLARE_GET_FIELD(t_TypeSvMessage, prn),
            DECLARE_GET_FIELD(t_TypeSvMessage, system),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TypeSvMessage__methods_[] = {
            DECLARE_METHOD(t_TypeSvMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, getNavigationMessageType, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getPrn, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TypeSvMessage)[] = {
            { Py_tp_methods, t_TypeSvMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TypeSvMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TypeSvMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TypeSvMessage, t_TypeSvMessage, TypeSvMessage);

          void t_TypeSvMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(TypeSvMessage), &PY_TYPE_DEF(TypeSvMessage), module, "TypeSvMessage", 0);
          }

          void t_TypeSvMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "class_", make_descriptor(TypeSvMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "wrapfn_", make_descriptor(t_TypeSvMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TypeSvMessage::initializeClass, 1)))
              return NULL;
            return t_TypeSvMessage::wrap_Object(TypeSvMessage(((t_TypeSvMessage *) arg)->object.this$));
          }
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TypeSvMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationMessageType());
            return j2p(result);
          }

          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationMessageType());
            return j2p(value);
          }

          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *GeneratedMeasurementSubscriber::mids$ = NULL;
          bool GeneratedMeasurementSubscriber::live$ = false;

          jclass GeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_handleGeneratedMeasurement_4063373aad443d2b] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GeneratedMeasurementSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_4063373aad443d2b], a0.this$);
          }

          void GeneratedMeasurementSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
        namespace generation {
          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args);

          static PyMethodDef t_GeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_GeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GeneratedMeasurementSubscriber, t_GeneratedMeasurementSubscriber, GeneratedMeasurementSubscriber);

          void t_GeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GeneratedMeasurementSubscriber), &PY_TYPE_DEF(GeneratedMeasurementSubscriber), module, "GeneratedMeasurementSubscriber", 0);
          }

          void t_GeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "class_", make_descriptor(GeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_GeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_GeneratedMeasurementSubscriber::wrap_Object(GeneratedMeasurementSubscriber(((t_GeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AllowedSolution::class$ = NULL;
        jmethodID *AllowedSolution::mids$ = NULL;
        bool AllowedSolution::live$ = false;
        AllowedSolution *AllowedSolution::ABOVE_SIDE = NULL;
        AllowedSolution *AllowedSolution::ANY_SIDE = NULL;
        AllowedSolution *AllowedSolution::BELOW_SIDE = NULL;
        AllowedSolution *AllowedSolution::LEFT_SIDE = NULL;
        AllowedSolution *AllowedSolution::RIGHT_SIDE = NULL;

        jclass AllowedSolution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AllowedSolution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7a78c9692a6fa434] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/analysis/solvers/AllowedSolution;");
            mids$[mid_values_979866882bd95823] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/analysis/solvers/AllowedSolution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABOVE_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ABOVE_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            ANY_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ANY_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            BELOW_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "BELOW_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            LEFT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "LEFT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            RIGHT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "RIGHT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AllowedSolution AllowedSolution::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AllowedSolution(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a78c9692a6fa434], a0.this$));
        }

        JArray< AllowedSolution > AllowedSolution::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AllowedSolution >(env->callStaticObjectMethod(cls, mids$[mid_values_979866882bd95823]));
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
        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args);
        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AllowedSolution_values(PyTypeObject *type);
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data);
        static PyGetSetDef t_AllowedSolution__fields_[] = {
          DECLARE_GET_FIELD(t_AllowedSolution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AllowedSolution__methods_[] = {
          DECLARE_METHOD(t_AllowedSolution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, of_, METH_VARARGS),
          DECLARE_METHOD(t_AllowedSolution, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AllowedSolution)[] = {
          { Py_tp_methods, t_AllowedSolution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AllowedSolution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AllowedSolution)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AllowedSolution, t_AllowedSolution, AllowedSolution);
        PyObject *t_AllowedSolution::wrap_Object(const AllowedSolution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AllowedSolution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AllowedSolution::install(PyObject *module)
        {
          installType(&PY_TYPE(AllowedSolution), &PY_TYPE_DEF(AllowedSolution), module, "AllowedSolution", 0);
        }

        void t_AllowedSolution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "class_", make_descriptor(AllowedSolution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "wrapfn_", make_descriptor(t_AllowedSolution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "boxfn_", make_descriptor(boxObject));
          env->getClass(AllowedSolution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ABOVE_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ABOVE_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ANY_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ANY_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "BELOW_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::BELOW_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "LEFT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::LEFT_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "RIGHT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::RIGHT_SIDE)));
        }

        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AllowedSolution::initializeClass, 1)))
            return NULL;
          return t_AllowedSolution::wrap_Object(AllowedSolution(((t_AllowedSolution *) arg)->object.this$));
        }
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AllowedSolution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AllowedSolution result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::valueOf(a0));
            return t_AllowedSolution::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AllowedSolution_values(PyTypeObject *type)
        {
          JArray< AllowedSolution > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::values());
          return JArray<jobject>(result.this$).wrap(t_AllowedSolution::wrap_jobject);
        }
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearKalmanFilter::class$ = NULL;
          jmethodID *LinearKalmanFilter::mids$ = NULL;
          bool LinearKalmanFilter::live$ = false;

          jclass LinearKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5c861e923d32d927] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/linear/LinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_8438f0b1b3460266] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearKalmanFilter::LinearKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::linear::LinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_5c861e923d32d927, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate LinearKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_8438f0b1b3460266], a0.this$));
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
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args);
          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args);
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data);
          static PyGetSetDef t_LinearKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_LinearKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_LinearKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearKalmanFilter)[] = {
            { Py_tp_methods, t_LinearKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_LinearKalmanFilter_init_ },
            { Py_tp_getset, t_LinearKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(LinearKalmanFilter, t_LinearKalmanFilter, LinearKalmanFilter);
          PyObject *t_LinearKalmanFilter::wrap_Object(const LinearKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearKalmanFilter), &PY_TYPE_DEF(LinearKalmanFilter), module, "LinearKalmanFilter", 0);
          }

          void t_LinearKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "class_", make_descriptor(LinearKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "wrapfn_", make_descriptor(t_LinearKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_LinearKalmanFilter::wrap_Object(LinearKalmanFilter(((t_LinearKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            LinearKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::linear::LinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::linear::t_LinearProcess::parameters_, &a2))
            {
              INT_CALL(object = LinearKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(LinearKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ConstantThrustDirectionProvider::class$ = NULL;
          jmethodID *ConstantThrustDirectionProvider::mids$ = NULL;
          bool ConstantThrustDirectionProvider::live$ = false;

          jclass ConstantThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_computeThrustDirection_102e5d95cb32da9e] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantThrustDirectionProvider::ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_102e5d95cb32da9e], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ConstantThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ConstantThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_ConstantThrustDirectionProvider_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantThrustDirectionProvider, t_ConstantThrustDirectionProvider, ConstantThrustDirectionProvider);

          void t_ConstantThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantThrustDirectionProvider), &PY_TYPE_DEF(ConstantThrustDirectionProvider), module, "ConstantThrustDirectionProvider", 0);
          }

          void t_ConstantThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "class_", make_descriptor(ConstantThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "wrapfn_", make_descriptor(t_ConstantThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ConstantThrustDirectionProvider::wrap_Object(ConstantThrustDirectionProvider(((t_ConstantThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ConstantThrustDirectionProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = ConstantThrustDirectionProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Kurtosis::class$ = NULL;
          jmethodID *Kurtosis::mids$ = NULL;
          bool Kurtosis::live$ = false;

          jclass Kurtosis::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Kurtosis");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_ba7003476927387b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Kurtosis;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Kurtosis::Kurtosis() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Kurtosis::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Kurtosis Kurtosis::copy() const
          {
            return Kurtosis(env->callObjectMethod(this$, mids$[mid_copy_ba7003476927387b]));
          }

          jdouble Kurtosis::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong Kurtosis::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Kurtosis::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Kurtosis::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data);
          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data);
          static PyGetSetDef t_Kurtosis__fields_[] = {
            DECLARE_GET_FIELD(t_Kurtosis, n),
            DECLARE_GET_FIELD(t_Kurtosis, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Kurtosis__methods_[] = {
            DECLARE_METHOD(t_Kurtosis, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, clear, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, copy, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getN, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Kurtosis)[] = {
            { Py_tp_methods, t_Kurtosis__methods_ },
            { Py_tp_init, (void *) t_Kurtosis_init_ },
            { Py_tp_getset, t_Kurtosis__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Kurtosis)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Kurtosis, t_Kurtosis, Kurtosis);

          void t_Kurtosis::install(PyObject *module)
          {
            installType(&PY_TYPE(Kurtosis), &PY_TYPE_DEF(Kurtosis), module, "Kurtosis", 0);
          }

          void t_Kurtosis::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "class_", make_descriptor(Kurtosis::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "wrapfn_", make_descriptor(t_Kurtosis::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Kurtosis::initializeClass, 1)))
              return NULL;
            return t_Kurtosis::wrap_Object(Kurtosis(((t_Kurtosis *) arg)->object.this$));
          }
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Kurtosis::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds)
          {
            Kurtosis object((jobject) NULL);

            INT_CALL(object = Kurtosis());
            self->object = object;

            return 0;
          }

          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args)
          {
            Kurtosis result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Kurtosis::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHull::class$ = NULL;
        jmethodID *ConvexHull::mids$ = NULL;
        bool ConvexHull::live$ = false;

        jclass ConvexHull::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHull");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createRegion_fd006079784937f2] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getVertices_029301c85132187e] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::Region ConvexHull::createRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_fd006079784937f2]));
        }

        JArray< ::org::hipparchus::geometry::Point > ConvexHull::getVertices() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getVertices_029301c85132187e]));
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
      namespace hull {
        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args);
        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self);
        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self);
        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data);
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data);
        static PyGetSetDef t_ConvexHull__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHull, vertices),
          DECLARE_GET_FIELD(t_ConvexHull, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHull__methods_[] = {
          DECLARE_METHOD(t_ConvexHull, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHull, createRegion, METH_NOARGS),
          DECLARE_METHOD(t_ConvexHull, getVertices, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHull)[] = {
          { Py_tp_methods, t_ConvexHull__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHull__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHull)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ConvexHull, t_ConvexHull, ConvexHull);
        PyObject *t_ConvexHull::wrap_Object(const ConvexHull& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHull::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHull::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHull), &PY_TYPE_DEF(ConvexHull), module, "ConvexHull", 0);
        }

        void t_ConvexHull::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "class_", make_descriptor(ConvexHull::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "wrapfn_", make_descriptor(t_ConvexHull::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHull::initializeClass, 1)))
            return NULL;
          return t_ConvexHull::wrap_Object(ConvexHull(((t_ConvexHull *) arg)->object.this$));
        }
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHull::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.createRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVertices());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVertices());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GoalType::class$ = NULL;
          jmethodID *GoalType::mids$ = NULL;
          bool GoalType::live$ = false;
          GoalType *GoalType::MAXIMIZE = NULL;
          GoalType *GoalType::MINIMIZE = NULL;

          jclass GoalType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GoalType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_c3f73218204d4841] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_values_1d242ab20f6f15e3] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAXIMIZE = new GoalType(env->getStaticObjectField(cls, "MAXIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              MINIMIZE = new GoalType(env->getStaticObjectField(cls, "MINIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GoalType GoalType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return GoalType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c3f73218204d4841], a0.this$));
          }

          JArray< GoalType > GoalType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< GoalType >(env->callStaticObjectMethod(cls, mids$[mid_values_1d242ab20f6f15e3]));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args);
          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_GoalType_values(PyTypeObject *type);
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data);
          static PyGetSetDef t_GoalType__fields_[] = {
            DECLARE_GET_FIELD(t_GoalType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GoalType__methods_[] = {
            DECLARE_METHOD(t_GoalType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, of_, METH_VARARGS),
            DECLARE_METHOD(t_GoalType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GoalType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GoalType)[] = {
            { Py_tp_methods, t_GoalType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GoalType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GoalType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(GoalType, t_GoalType, GoalType);
          PyObject *t_GoalType::wrap_Object(const GoalType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GoalType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GoalType::install(PyObject *module)
          {
            installType(&PY_TYPE(GoalType), &PY_TYPE_DEF(GoalType), module, "GoalType", 0);
          }

          void t_GoalType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "class_", make_descriptor(GoalType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "wrapfn_", make_descriptor(t_GoalType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "boxfn_", make_descriptor(boxObject));
            env->getClass(GoalType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MAXIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MAXIMIZE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MINIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MINIMIZE)));
          }

          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GoalType::initializeClass, 1)))
              return NULL;
            return t_GoalType::wrap_Object(GoalType(((t_GoalType *) arg)->object.this$));
          }
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GoalType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            GoalType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::valueOf(a0));
              return t_GoalType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_GoalType_values(PyTypeObject *type)
          {
            JArray< GoalType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::values());
            return JArray<jobject>(result.this$).wrap(t_GoalType::wrap_jobject);
          }
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data)
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
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *PythonAtmosphericRefractionModel::class$ = NULL;
      jmethodID *PythonAtmosphericRefractionModel::mids$ = NULL;
      bool PythonAtmosphericRefractionModel::live$ = false;

      jclass PythonAtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/PythonAtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getRefraction_7e960cd6eee376d8] = env->getMethodID(cls, "getRefraction", "(D)D");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAtmosphericRefractionModel::PythonAtmosphericRefractionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAtmosphericRefractionModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAtmosphericRefractionModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAtmosphericRefractionModel::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self);
      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args);
      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data);
      static PyGetSetDef t_PythonAtmosphericRefractionModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAtmosphericRefractionModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_PythonAtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) t_PythonAtmosphericRefractionModel_init_ },
        { Py_tp_getset, t_PythonAtmosphericRefractionModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAtmosphericRefractionModel, t_PythonAtmosphericRefractionModel, PythonAtmosphericRefractionModel);

      void t_PythonAtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAtmosphericRefractionModel), &PY_TYPE_DEF(PythonAtmosphericRefractionModel), module, "PythonAtmosphericRefractionModel", 1);
      }

      void t_PythonAtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "class_", make_descriptor(PythonAtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "wrapfn_", make_descriptor(t_PythonAtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAtmosphericRefractionModel::initializeClass);
        JNINativeMethod methods[] = {
          { "getRefraction", "(D)D", (void *) t_PythonAtmosphericRefractionModel_getRefraction0 },
          { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefractionModel_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_PythonAtmosphericRefractionModel::wrap_Object(PythonAtmosphericRefractionModel(((t_PythonAtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds)
      {
        PythonAtmosphericRefractionModel object((jobject) NULL);

        INT_CALL(object = PythonAtmosphericRefractionModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args)
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

      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getRefraction", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getRefraction", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOF::class$ = NULL;
        jmethodID *EncounterLOF::mids$ = NULL;
        bool EncounterLOF::live$ = false;

        jclass EncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeProjectionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "computeProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeProjectionMatrix_3547a3eeb1e69366] = env->getMethodID(cls, "computeProjectionMatrix", "(Lorg/hipparchus/Field;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_dda60cf1427afe76] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_77bd7b3cdab2713e] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_isQuasiInertial_89b302893bdbe1f1] = env->getMethodID(cls, "isQuasiInertial", "()Z");
            mids$[mid_projectOntoCollisionPlane_7f02e62a67dbd97c] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
            mids$[mid_projectOntoCollisionPlane_3b3b6a3c97d1f7fa] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
            mids$[mid_projectOntoCollisionPlane_60dc3401cb1a0936] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_projectOntoCollisionPlane_340b47d21842d02c] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_rotationFromInertial_8b424804999938a4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_9b71bf39454b4a07] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0158ab79fb625627] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_352d2666b9e583bd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_1022f468fb3d1015] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_ea6e3434436b926f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::computeProjectionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::computeProjectionMatrix(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_3547a3eeb1e69366], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D EncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf], a0.this$));
        }

        ::org::orekit::utils::FieldPVCoordinates EncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_dda60cf1427afe76], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates EncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_77bd7b3cdab2713e]));
        }

        jboolean EncounterLOF::isQuasiInertial() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_89b302893bdbe1f1]);
        }

        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_7f02e62a67dbd97c], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::twod::Vector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_3b3b6a3c97d1f7fa], a0.this$));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_60dc3401cb1a0936], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_340b47d21842d02c], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8b424804999938a4], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9b71bf39454b4a07], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0158ab79fb625627], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_352d2666b9e583bd], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_1022f468fb3d1015], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_ea6e3434436b926f], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg);
        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self);
        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data);
        static PyGetSetDef t_EncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_EncounterLOF, other),
          DECLARE_GET_FIELD(t_EncounterLOF, quasiInertial),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOF__methods_[] = {
          DECLARE_METHOD(t_EncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, computeProjectionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_EncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_EncounterLOF, isQuasiInertial, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, projectOntoCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOF)[] = {
          { Py_tp_methods, t_EncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::LOF),
          NULL
        };

        DEFINE_TYPE(EncounterLOF, t_EncounterLOF, EncounterLOF);

        void t_EncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOF), &PY_TYPE_DEF(EncounterLOF), module, "EncounterLOF", 0);
        }

        void t_EncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "class_", make_descriptor(EncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "wrapfn_", make_descriptor(t_EncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOF::initializeClass, 1)))
            return NULL;
          return t_EncounterLOF::wrap_Object(EncounterLOF(((t_EncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.computeProjectionMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.computeProjectionMatrix(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeProjectionMatrix", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAxisNormalToCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "isQuasiInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectOntoCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isQuasiInertial());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanEstimation::class$ = NULL;
        jmethodID *PythonKalmanEstimation::mids$ = NULL;
        bool PythonKalmanEstimation::live$ = false;

        jclass PythonKalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanEstimation::PythonKalmanEstimation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonKalmanEstimation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonKalmanEstimation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonKalmanEstimation::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self);
        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data);
        static PyGetSetDef t_PythonKalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanEstimation, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanEstimation, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanEstimation)[] = {
          { Py_tp_methods, t_PythonKalmanEstimation__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanEstimation_init_ },
          { Py_tp_getset, t_PythonKalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanEstimation, t_PythonKalmanEstimation, PythonKalmanEstimation);

        void t_PythonKalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanEstimation), &PY_TYPE_DEF(PythonKalmanEstimation), module, "PythonKalmanEstimation", 1);
        }

        void t_PythonKalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "class_", make_descriptor(PythonKalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "wrapfn_", make_descriptor(t_PythonKalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanEstimation::initializeClass);
          JNINativeMethod methods[] = {
            { "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getCorrectedMeasurement0 },
            { "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getCorrectedSpacecraftStates1 },
            { "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonKalmanEstimation_getCurrentDate2 },
            { "getCurrentMeasurementNumber", "()I", (void *) t_PythonKalmanEstimation_getCurrentMeasurementNumber3 },
            { "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4 },
            { "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedOrbitalParameters5 },
            { "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedPropagationParameters6 },
            { "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7 },
            { "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedState8 },
            { "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9 },
            { "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalKalmanGain10 },
            { "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11 },
            { "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12 },
            { "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getPredictedMeasurement13 },
            { "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getPredictedSpacecraftStates14 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanEstimation_pythonDecRef15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanEstimation::wrap_Object(PythonKalmanEstimation(((t_PythonKalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanEstimation object((jobject) NULL);

          INT_CALL(object = PythonKalmanEstimation());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args)
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getCorrectedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCorrectedSpacecraftStates", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getCurrentDate", result);
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

        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getCurrentMeasurementNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getCurrentMeasurementNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurementsParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurementsParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedOrbitalParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedOrbitalParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedPropagationParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedPropagationParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealVector::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedState", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalInnovationCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalInnovationCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalKalmanGain", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalKalmanGain", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalMeasurementJacobian", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalMeasurementJacobian", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalStateTransitionMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalStateTransitionMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getPredictedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPredictedSpacecraftStates", result);
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

        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data)
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
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log::Log() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Log::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
#include "java/lang/Double.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Double::class$ = NULL;
    jmethodID *Double::mids$ = NULL;
    bool Double::live$ = false;
    jint Double::BYTES = (jint) 0;
    jint Double::MAX_EXPONENT = (jint) 0;
    jdouble Double::MAX_VALUE = (jdouble) 0;
    jint Double::MIN_EXPONENT = (jint) 0;
    jdouble Double::MIN_NORMAL = (jdouble) 0;
    jdouble Double::MIN_VALUE = (jdouble) 0;
    jdouble Double::NEGATIVE_INFINITY = (jdouble) 0;
    jdouble Double::NaN = (jdouble) 0;
    jdouble Double::POSITIVE_INFINITY = (jdouble) 0;
    jint Double::SIZE = (jint) 0;
    ::java::lang::Class *Double::TYPE = NULL;

    jclass Double::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Double");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_4dfe98c34ce8e2ad] = env->getStaticMethodID(cls, "compare", "(DD)I");
        mids$[mid_compareTo_39609b8954e7e0eb] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Double;)I");
        mids$[mid_doubleToLongBits_9d550dd06216a860] = env->getStaticMethodID(cls, "doubleToLongBits", "(D)J");
        mids$[mid_doubleToRawLongBits_9d550dd06216a860] = env->getStaticMethodID(cls, "doubleToRawLongBits", "(D)J");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_abbeb9db7144ca23] = env->getStaticMethodID(cls, "hashCode", "(D)I");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_dd69c3ab2404bb71] = env->getStaticMethodID(cls, "isFinite", "(D)Z");
        mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_dd69c3ab2404bb71] = env->getStaticMethodID(cls, "isInfinite", "(D)Z");
        mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_dd69c3ab2404bb71] = env->getStaticMethodID(cls, "isNaN", "(D)Z");
        mids$[mid_longBitsToDouble_32ecb089f4c907e7] = env->getStaticMethodID(cls, "longBitsToDouble", "(J)D");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_2268d18be49a6087] = env->getStaticMethodID(cls, "max", "(DD)D");
        mids$[mid_min_2268d18be49a6087] = env->getStaticMethodID(cls, "min", "(DD)D");
        mids$[mid_parseDouble_071554b5f5a6b17b] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_2268d18be49a6087] = env->getStaticMethodID(cls, "sum", "(DD)D");
        mids$[mid_toHexString_c03a7791f2fcb1f1] = env->getStaticMethodID(cls, "toHexString", "(D)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_c03a7791f2fcb1f1] = env->getStaticMethodID(cls, "toString", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_3471f90efebfeabb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
        mids$[mid_valueOf_229e479e8962b1c5] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/Double;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticDoubleField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticDoubleField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticDoubleField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticDoubleField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticDoubleField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticDoubleField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Double::Double(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Double::Double(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

    jbyte Double::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Double::compare(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_4dfe98c34ce8e2ad], a0, a1);
    }

    jint Double::compareTo(const Double & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_39609b8954e7e0eb], a0.this$);
    }

    jlong Double::doubleToLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToLongBits_9d550dd06216a860], a0);
    }

    jlong Double::doubleToRawLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToRawLongBits_9d550dd06216a860], a0);
    }

    jdouble Double::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Double::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jfloat Double::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    jint Double::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Double::hashCode(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_abbeb9db7144ca23], a0);
    }

    jint Double::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jboolean Double::isFinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_dd69c3ab2404bb71], a0);
    }

    jboolean Double::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
    }

    jboolean Double::isInfinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_dd69c3ab2404bb71], a0);
    }

    jboolean Double::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
    }

    jboolean Double::isNaN(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_dd69c3ab2404bb71], a0);
    }

    jdouble Double::longBitsToDouble(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_longBitsToDouble_32ecb089f4c907e7], a0);
    }

    jlong Double::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jdouble Double::max$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_max_2268d18be49a6087], a0, a1);
    }

    jdouble Double::min$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_min_2268d18be49a6087], a0, a1);
    }

    jdouble Double::parseDouble(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_071554b5f5a6b17b], a0.this$);
    }

    jshort Double::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    jdouble Double::sum(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_sum_2268d18be49a6087], a0, a1);
    }

    ::java::lang::String Double::toHexString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_c03a7791f2fcb1f1], a0));
    }

    ::java::lang::String Double::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Double::toString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c03a7791f2fcb1f1], a0));
    }

    Double Double::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3471f90efebfeabb], a0.this$));
    }

    Double Double::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_229e479e8962b1c5], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg);
    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_equals(t_Double *self, PyObject *args);
    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_intValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isInfinite(t_Double *self);
    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isNaN(t_Double *self);
    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_toString(t_Double *self, PyObject *args);
    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_get__infinite(t_Double *self, void *data);
    static PyObject *t_Double_get__naN(t_Double *self, void *data);
    static PyGetSetDef t_Double__fields_[] = {
      DECLARE_GET_FIELD(t_Double, infinite),
      DECLARE_GET_FIELD(t_Double, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Double__methods_[] = {
      DECLARE_METHOD(t_Double, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, compareTo, METH_O),
      DECLARE_METHOD(t_Double, doubleToLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleToRawLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, equals, METH_VARARGS),
      DECLARE_METHOD(t_Double, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Double, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Double, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longBitsToDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, parseDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, toString, METH_VARARGS),
      DECLARE_METHOD(t_Double, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Double)[] = {
      { Py_tp_methods, t_Double__methods_ },
      { Py_tp_init, (void *) t_Double_init_ },
      { Py_tp_getset, t_Double__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Double)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Double, t_Double, Double);

    void t_Double::install(PyObject *module)
    {
      installType(&PY_TYPE(Double), &PY_TYPE_DEF(Double), module, "Double", 0);
    }

    void t_Double::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "class_", make_descriptor(Double::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "wrapfn_", make_descriptor(unboxDouble));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "boxfn_", make_descriptor(boxDouble));
      env->getClass(Double::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "BYTES", make_descriptor(Double::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_EXPONENT", make_descriptor(Double::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_VALUE", make_descriptor(Double::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_EXPONENT", make_descriptor(Double::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_NORMAL", make_descriptor(Double::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_VALUE", make_descriptor(Double::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NEGATIVE_INFINITY", make_descriptor(Double::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NaN", make_descriptor(Double::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "POSITIVE_INFINITY", make_descriptor(Double::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "SIZE", make_descriptor(Double::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Double::TYPE)));
    }

    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Double::initializeClass, 1)))
        return NULL;
      return t_Double::wrap_Object(Double(((t_Double *) arg)->object.this$));
    }
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Double::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Double(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Double object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Double(a0));
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

    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jint result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg)
    {
      Double a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Double), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToRawLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToRawLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Double_equals(t_Double *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jint result;

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Double_intValue(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Double_isInfinite(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Double_isNaN(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jdouble result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::longBitsToDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "longBitsToDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_longValue(t_Double *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jdouble result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::parseDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Double_toString(t_Double *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          Double result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Double_get__infinite(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Double_get__naN(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *CompositeDataContext::class$ = NULL;
      jmethodID *CompositeDataContext::mids$ = NULL;
      bool CompositeDataContext::live$ = false;

      jclass CompositeDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/CompositeDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43a4c57c41cef5bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frames;Lorg/orekit/bodies/CelestialBodies;Lorg/orekit/forces/gravity/potential/GravityFields;Lorg/orekit/models/earth/GeoMagneticFields;)V");
          mids$[mid_getCelestialBodies_a9d31e254defc040] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_efd6f6d0fc89f7ce] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_ac4b7520cc429937] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_d0ea355ca6d68d00] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_ac9ef17f951ae11a] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompositeDataContext::CompositeDataContext(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::frames::Frames & a1, const ::org::orekit::bodies::CelestialBodies & a2, const ::org::orekit::forces::gravity::potential::GravityFields & a3, const ::org::orekit::models::earth::GeoMagneticFields & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43a4c57c41cef5bc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::bodies::CelestialBodies CompositeDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_a9d31e254defc040]));
      }

      ::org::orekit::frames::Frames CompositeDataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_efd6f6d0fc89f7ce]));
      }

      ::org::orekit::models::earth::GeoMagneticFields CompositeDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_ac4b7520cc429937]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields CompositeDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_d0ea355ca6d68d00]));
      }

      ::org::orekit::time::TimeScales CompositeDataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_ac9ef17f951ae11a]));
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
      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data);
      static PyGetSetDef t_CompositeDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_CompositeDataContext, frames),
        DECLARE_GET_FIELD(t_CompositeDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, gravityFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeDataContext__methods_[] = {
        DECLARE_METHOD(t_CompositeDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeDataContext)[] = {
        { Py_tp_methods, t_CompositeDataContext__methods_ },
        { Py_tp_init, (void *) t_CompositeDataContext_init_ },
        { Py_tp_getset, t_CompositeDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeDataContext, t_CompositeDataContext, CompositeDataContext);

      void t_CompositeDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeDataContext), &PY_TYPE_DEF(CompositeDataContext), module, "CompositeDataContext", 0);
      }

      void t_CompositeDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "class_", make_descriptor(CompositeDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "wrapfn_", make_descriptor(t_CompositeDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeDataContext::initializeClass, 1)))
          return NULL;
        return t_CompositeDataContext::wrap_Object(CompositeDataContext(((t_CompositeDataContext *) arg)->object.this$));
      }
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::frames::Frames a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        ::org::orekit::forces::gravity::potential::GravityFields a3((jobject) NULL);
        ::org::orekit::models::earth::GeoMagneticFields a4((jobject) NULL);
        CompositeDataContext object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frames::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CompositeDataContext(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *GlobalIonosphereMapModel::class$ = NULL;
          jmethodID *GlobalIonosphereMapModel::mids$ = NULL;
          bool GlobalIonosphereMapModel::live$ = false;

          jclass GlobalIonosphereMapModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_57dc6ad440197703] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;[Lorg/orekit/data/DataSource;)V");
              mids$[mid_init$_d8fcbe65f280bc96] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale & a0, const JArray< ::org::orekit::data::DataSource > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_57dc6ad440197703, a0.this$, a1.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8fcbe65f280bc96, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List GlobalIonosphereMapModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self);
          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args);
          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data);
          static PyGetSetDef t_GlobalIonosphereMapModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalIonosphereMapModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalIonosphereMapModel__methods_[] = {
            DECLARE_METHOD(t_GlobalIonosphereMapModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalIonosphereMapModel)[] = {
            { Py_tp_methods, t_GlobalIonosphereMapModel__methods_ },
            { Py_tp_init, (void *) t_GlobalIonosphereMapModel_init_ },
            { Py_tp_getset, t_GlobalIonosphereMapModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalIonosphereMapModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalIonosphereMapModel, t_GlobalIonosphereMapModel, GlobalIonosphereMapModel);

          void t_GlobalIonosphereMapModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalIonosphereMapModel), &PY_TYPE_DEF(GlobalIonosphereMapModel), module, "GlobalIonosphereMapModel", 0);
          }

          void t_GlobalIonosphereMapModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "class_", make_descriptor(GlobalIonosphereMapModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "wrapfn_", make_descriptor(t_GlobalIonosphereMapModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalIonosphereMapModel::initializeClass, 1)))
              return NULL;
            return t_GlobalIonosphereMapModel::wrap_Object(GlobalIonosphereMapModel(((t_GlobalIonosphereMapModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalIonosphereMapModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                JArray< ::org::orekit::data::DataSource > a1((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "k[k", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1, a2));
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

          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data)
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
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinates::class$ = NULL;
      jmethodID *AbsolutePVCoordinates::mids$ = NULL;
      bool AbsolutePVCoordinates::live$ = false;

      jclass AbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fd02f06b657f28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_76db051720408dec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_9843b99b5e658838] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_243f7b18c367ef6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_745e3e9bf9e580ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_a40d3c1c906792a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_0f6c145f52314e2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_e35ea6ed1126bff5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_7e1773b50a3ff7d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_f7f3bf23e900bdc6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_8cf7b972bef1e4d8] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_8386213426308de8] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_1e0bd76edd81d64f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_dec199e86bf037eb] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a1fd02f06b657f28, a0.this$, a1.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const AbsolutePVCoordinates & a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_76db051720408dec, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9843b99b5e658838, a0.this$, a1, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_243f7b18c367ef6e, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_745e3e9bf9e580ce, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a40d3c1c906792a4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0f6c145f52314e2c, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e35ea6ed1126bff5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7e1773b50a3ff7d2, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6, jdouble a7, const AbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f7f3bf23e900bdc6, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::frames::Frame AbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_daf15abc21907508]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_8cf7b972bef1e4d8], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8386213426308de8], a0.this$));
      }

      AbsolutePVCoordinates AbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_1e0bd76edd81d64f], a0));
      }

      ::org::orekit::utils::PVCoordinatesProvider AbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_dec199e86bf037eb]));
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
      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self);
      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data);
      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, pVCoordinates),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, toTaylorProvider, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinates, t_AbsolutePVCoordinates, AbsolutePVCoordinates);

      void t_AbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinates), &PY_TYPE_DEF(AbsolutePVCoordinates), module, "AbsolutePVCoordinates", 0);
      }

      void t_AbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "class_", make_descriptor(AbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "wrapfn_", make_descriptor(t_AbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinates::wrap_Object(AbsolutePVCoordinates(((t_AbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbsolutePVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            jdouble a7;
            AbsolutePVCoordinates a8((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsolutePVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toTaylorProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "toTaylorProvider", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperBigFractionFormat::class$ = NULL;
      jmethodID *ProperBigFractionFormat::mids$ = NULL;
      bool ProperBigFractionFormat::live$ = false;

      jclass ProperBigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperBigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0c28e98ce8b6fdd7] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c2b55dec3da6da3b] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_001645e916bd626d] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_38d74adaa6fcd6d8] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperBigFractionFormat::ProperBigFractionFormat() : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0c28e98ce8b6fdd7, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperBigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c2b55dec3da6da3b], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperBigFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_001645e916bd626d]));
      }

      ::org::hipparchus::fraction::BigFraction ProperBigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_38d74adaa6fcd6d8], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self);
      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data);
      static PyGetSetDef t_ProperBigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperBigFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperBigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperBigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperBigFractionFormat)[] = {
        { Py_tp_methods, t_ProperBigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperBigFractionFormat_init_ },
        { Py_tp_getset, t_ProperBigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperBigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::BigFractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperBigFractionFormat, t_ProperBigFractionFormat, ProperBigFractionFormat);

      void t_ProperBigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperBigFractionFormat), &PY_TYPE_DEF(ProperBigFractionFormat), module, "ProperBigFractionFormat", 0);
      }

      void t_ProperBigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "class_", make_descriptor(ProperBigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "wrapfn_", make_descriptor(t_ProperBigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperBigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperBigFractionFormat::wrap_Object(ProperBigFractionFormat(((t_ProperBigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperBigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperBigFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperBigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperBigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperBigFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationModifier::class$ = NULL;
        jmethodID *EstimationModifier::mids$ = NULL;
        bool EstimationModifier::live$ = false;

        jclass EstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EstimationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
        }

        void EstimationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args);
        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data);
        static PyGetSetDef t_EstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationModifier__methods_[] = {
          DECLARE_METHOD(t_EstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimationModifier, modify, METH_O),
          DECLARE_METHOD(t_EstimationModifier, modifyWithoutDerivatives, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationModifier)[] = {
          { Py_tp_methods, t_EstimationModifier__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationModifier)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(EstimationModifier, t_EstimationModifier, EstimationModifier);
        PyObject *t_EstimationModifier::wrap_Object(const EstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationModifier), &PY_TYPE_DEF(EstimationModifier), module, "EstimationModifier", 0);
        }

        void t_EstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "class_", make_descriptor(EstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "wrapfn_", make_descriptor(t_EstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationModifier::initializeClass, 1)))
            return NULL;
          return t_EstimationModifier::wrap_Object(EstimationModifier(((t_EstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg)
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

        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg)
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
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
