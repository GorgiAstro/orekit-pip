#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeInterpolator::class$ = NULL;
      jmethodID *PythonFieldTimeInterpolator::mids$ = NULL;
      bool PythonFieldTimeInterpolator::live$ = false;

      jclass PythonFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_66eecc2273162e9b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_interpolate_ba43d53651adbb8f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeInterpolator::PythonFieldTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldTimeInterpolator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self);
      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data);
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeInterpolator, t_PythonFieldTimeInterpolator, PythonFieldTimeInterpolator);
      PyObject *t_PythonFieldTimeInterpolator::wrap_Object(const PythonFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeInterpolator), &PY_TYPE_DEF(PythonFieldTimeInterpolator), module, "PythonFieldTimeInterpolator", 1);
      }

      void t_PythonFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "class_", make_descriptor(PythonFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "wrapfn_", make_descriptor(t_PythonFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonFieldTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonFieldTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonFieldTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeInterpolator::wrap_Object(PythonFieldTimeInterpolator(((t_PythonFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *DateBasedManeuverTriggers::class$ = NULL;
          jmethodID *DateBasedManeuverTriggers::mids$ = NULL;
          bool DateBasedManeuverTriggers::live$ = false;
          ::java::lang::String *DateBasedManeuverTriggers::DEFAULT_NAME = NULL;

          jclass DateBasedManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fdc72bfdba154d74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_init$_7d29df8e1e987e68] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
              mids$[mid_getEndDate_85703d13e302437e] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStartDate_85703d13e302437e] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_convertIntervalDetector_6d5643096d51e9e8] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_fdc72bfdba154d74, a0.this$, a1)) {}

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_7d29df8e1e987e68, a0.this$, a1.this$, a2)) {}

          jdouble DateBasedManeuverTriggers::getDuration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_85703d13e302437e]));
          }

          ::java::lang::String DateBasedManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::java::util::List DateBasedManeuverTriggers::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_85703d13e302437e]));
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
        namespace trigger {
          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args);
          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data);
          static PyGetSetDef t_DateBasedManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, duration),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, endDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, name),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parametersDrivers),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, startDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DateBasedManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_DateBasedManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, of_, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getDuration, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getName, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DateBasedManeuverTriggers)[] = {
            { Py_tp_methods, t_DateBasedManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_DateBasedManeuverTriggers_init_ },
            { Py_tp_getset, t_DateBasedManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DateBasedManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(DateBasedManeuverTriggers, t_DateBasedManeuverTriggers, DateBasedManeuverTriggers);
          PyObject *t_DateBasedManeuverTriggers::wrap_Object(const DateBasedManeuverTriggers& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DateBasedManeuverTriggers::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DateBasedManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(DateBasedManeuverTriggers), &PY_TYPE_DEF(DateBasedManeuverTriggers), module, "DateBasedManeuverTriggers", 0);
          }

          void t_DateBasedManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "class_", make_descriptor(DateBasedManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "wrapfn_", make_descriptor(t_DateBasedManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            env->getClass(DateBasedManeuverTriggers::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "DEFAULT_NAME", make_descriptor(j2p(*DateBasedManeuverTriggers::DEFAULT_NAME)));
          }

          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DateBasedManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_DateBasedManeuverTriggers::wrap_Object(DateBasedManeuverTriggers(((t_DateBasedManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DateBasedManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble a1;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
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

          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDuration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getName", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDuration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeBuilder::class$ = NULL;
          jmethodID *RangeBuilder::mids$ = NULL;
          bool RangeBuilder::live$ = false;

          jclass RangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cde18597fb8b008b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_3ea6986c2d4922f7] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Range;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeBuilder::RangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_cde18597fb8b008b, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::Range RangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Range(env->callObjectMethod(this$, mids$[mid_build_3ea6986c2d4922f7], a0.this$, a1.this$));
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
          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args);
          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args);
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data);
          static PyGetSetDef t_RangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeBuilder)[] = {
            { Py_tp_methods, t_RangeBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeBuilder_init_ },
            { Py_tp_getset, t_RangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeBuilder, t_RangeBuilder, RangeBuilder);
          PyObject *t_RangeBuilder::wrap_Object(const RangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeBuilder), &PY_TYPE_DEF(RangeBuilder), module, "RangeBuilder", 0);
          }

          void t_RangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "class_", make_descriptor(RangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "wrapfn_", make_descriptor(t_RangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeBuilder::wrap_Object(RangeBuilder(((t_RangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Range result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Range::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_38903000df91ad6d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)V");
              mids$[mid_getEnd_d52645e0d4c07563] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getLine_9fb9cdc35bfe2f74] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getStart_d52645e0d4c07563] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_38903000df91ad6d, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEnd_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_getLine_9fb9cdc35bfe2f74]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getStart_d52645e0d4c07563]));
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
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a2((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Segment(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmSatelliteEphemeris::class$ = NULL;
              jmethodID *OcmSatelliteEphemeris::mids$ = NULL;
              bool OcmSatelliteEphemeris::live$ = false;

              jclass OcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_659ce81fb27f7feb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmSatelliteEphemeris::OcmSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_659ce81fb27f7feb, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              jdouble OcmSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
              }

              ::java::util::List OcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmSatelliteEphemeris, t_OcmSatelliteEphemeris, OcmSatelliteEphemeris);

              void t_OcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmSatelliteEphemeris), &PY_TYPE_DEF(OcmSatelliteEphemeris), module, "OcmSatelliteEphemeris", 0);
              }

              void t_OcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "class_", make_descriptor(OcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_OcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OcmSatelliteEphemeris::wrap_Object(OcmSatelliteEphemeris(((t_OcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OcmSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeConverter::class$ = NULL;
          jmethodID *TimeConverter::mids$ = NULL;
          bool TimeConverter::live$ = false;

          jclass TimeConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b853b844e7592d04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_components_5983e23690eb425a] = env->getMethodID(cls, "components", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeScale_c39031284193adbe] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_offset_bf1d7732f1acb697] = env->getMethodID(cls, "offset", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_parse_c366629d892ff755] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeConverter::TimeConverter(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b853b844e7592d04, a0.this$, a1.this$)) {}

          ::org::orekit::time::DateTimeComponents TimeConverter::components(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_components_5983e23690eb425a], a0.this$));
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
          }

          ::org::orekit::time::TimeScale TimeConverter::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_c39031284193adbe]));
          }

          jdouble TimeConverter::offset(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_bf1d7732f1acb697], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_parse_c366629d892ff755], a0.this$));
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
          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self);
          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self);
          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data);
          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data);
          static PyGetSetDef t_TimeConverter__fields_[] = {
            DECLARE_GET_FIELD(t_TimeConverter, referenceDate),
            DECLARE_GET_FIELD(t_TimeConverter, timeScale),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeConverter__methods_[] = {
            DECLARE_METHOD(t_TimeConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, components, METH_O),
            DECLARE_METHOD(t_TimeConverter, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, offset, METH_O),
            DECLARE_METHOD(t_TimeConverter, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeConverter)[] = {
            { Py_tp_methods, t_TimeConverter__methods_ },
            { Py_tp_init, (void *) t_TimeConverter_init_ },
            { Py_tp_getset, t_TimeConverter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeConverter, t_TimeConverter, TimeConverter);

          void t_TimeConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeConverter), &PY_TYPE_DEF(TimeConverter), module, "TimeConverter", 0);
          }

          void t_TimeConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "class_", make_descriptor(TimeConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "wrapfn_", make_descriptor(t_TimeConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeConverter::initializeClass, 1)))
              return NULL;
            return t_TimeConverter::wrap_Object(TimeConverter(((t_TimeConverter *) arg)->object.this$));
          }
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeConverter object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeConverter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.components(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "components", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *HatchFilter::class$ = NULL;
          jmethodID *HatchFilter::mids$ = NULL;
          bool HatchFilter::live$ = false;

          jclass HatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/HatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addToCodeHistory_17db3a65980d3441] = env->getMethodID(cls, "addToCodeHistory", "(D)V");
              mids$[mid_addToSmoothedCodeHistory_17db3a65980d3441] = env->getMethodID(cls, "addToSmoothedCodeHistory", "(D)V");
              mids$[mid_getCodeHistory_d91fa6c7b6ddeaae] = env->getMethodID(cls, "getCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSmoothedCodeHistory_d91fa6c7b6ddeaae] = env->getMethodID(cls, "getSmoothedCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getThreshold_dff5885c2c873297] = env->getMethodID(cls, "getThreshold", "()D");
              mids$[mid_resetFilterNext_17db3a65980d3441] = env->getMethodID(cls, "resetFilterNext", "(D)V");
              mids$[mid_updatePreviousSmoothedCode_17db3a65980d3441] = env->getMethodID(cls, "updatePreviousSmoothedCode", "(D)V");
              mids$[mid_updatePreviousSmoothingValue_17db3a65980d3441] = env->getMethodID(cls, "updatePreviousSmoothingValue", "(D)V");
              mids$[mid_smoothedCode_86ffecc08a63eff0] = env->getMethodID(cls, "smoothedCode", "(DD)D");
              mids$[mid_checkValidData_9df09399397f756e] = env->getMethodID(cls, "checkValidData", "(DDZ)D");
              mids$[mid_resetNextBoolean_0fa09c18fee449d5] = env->getMethodID(cls, "resetNextBoolean", "()V");
              mids$[mid_resetK_0fa09c18fee449d5] = env->getMethodID(cls, "resetK", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void HatchFilter::addToCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToCodeHistory_17db3a65980d3441], a0);
          }

          void HatchFilter::addToSmoothedCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToSmoothedCodeHistory_17db3a65980d3441], a0);
          }

          ::java::util::ArrayList HatchFilter::getCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getCodeHistory_d91fa6c7b6ddeaae]));
          }

          ::java::util::ArrayList HatchFilter::getSmoothedCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSmoothedCodeHistory_d91fa6c7b6ddeaae]));
          }

          jdouble HatchFilter::getThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreshold_dff5885c2c873297]);
          }

          void HatchFilter::resetFilterNext(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetFilterNext_17db3a65980d3441], a0);
          }

          void HatchFilter::updatePreviousSmoothedCode(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothedCode_17db3a65980d3441], a0);
          }

          void HatchFilter::updatePreviousSmoothingValue(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothingValue_17db3a65980d3441], a0);
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
          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self);
          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data);
          static PyGetSetDef t_HatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_HatchFilter, codeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, smoothedCodeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, threshold),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HatchFilter__methods_[] = {
            DECLARE_METHOD(t_HatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, addToCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, addToSmoothedCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, getCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getSmoothedCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getThreshold, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, resetFilterNext, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothedCode, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothingValue, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HatchFilter)[] = {
            { Py_tp_methods, t_HatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HatchFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HatchFilter, t_HatchFilter, HatchFilter);

          void t_HatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(HatchFilter), &PY_TYPE_DEF(HatchFilter), module, "HatchFilter", 0);
          }

          void t_HatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "class_", make_descriptor(HatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "wrapfn_", make_descriptor(t_HatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HatchFilter::initializeClass, 1)))
              return NULL;
            return t_HatchFilter::wrap_Object(HatchFilter(((t_HatchFilter *) arg)->object.this$));
          }
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToSmoothedCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToSmoothedCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.resetFilterNext(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "resetFilterNext", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothedCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothedCode", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothingValue(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothingValue", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThreshold());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *MannWhitneyUTest::class$ = NULL;
        jmethodID *MannWhitneyUTest::mids$ = NULL;
        bool MannWhitneyUTest::live$ = false;

        jclass MannWhitneyUTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/MannWhitneyUTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ed87323846b88129] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_mannWhitneyU_b561c6892e9976f8] = env->getMethodID(cls, "mannWhitneyU", "([D[D)D");
            mids$[mid_mannWhitneyUTest_b561c6892e9976f8] = env->getMethodID(cls, "mannWhitneyUTest", "([D[D)D");
            mids$[mid_mannWhitneyUTest_c98cc76e0ea0aa4c] = env->getMethodID(cls, "mannWhitneyUTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MannWhitneyUTest::MannWhitneyUTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        MannWhitneyUTest::MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed87323846b88129, a0.this$, a1.this$)) {}

        jdouble MannWhitneyUTest::mannWhitneyU(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyU_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_c98cc76e0ea0aa4c], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args);
        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args);

        static PyMethodDef t_MannWhitneyUTest__methods_[] = {
          DECLARE_METHOD(t_MannWhitneyUTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyU, METH_VARARGS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyUTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MannWhitneyUTest)[] = {
          { Py_tp_methods, t_MannWhitneyUTest__methods_ },
          { Py_tp_init, (void *) t_MannWhitneyUTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MannWhitneyUTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MannWhitneyUTest, t_MannWhitneyUTest, MannWhitneyUTest);

        void t_MannWhitneyUTest::install(PyObject *module)
        {
          installType(&PY_TYPE(MannWhitneyUTest), &PY_TYPE_DEF(MannWhitneyUTest), module, "MannWhitneyUTest", 0);
        }

        void t_MannWhitneyUTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "class_", make_descriptor(MannWhitneyUTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "wrapfn_", make_descriptor(t_MannWhitneyUTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MannWhitneyUTest::initializeClass, 1)))
            return NULL;
          return t_MannWhitneyUTest::wrap_Object(MannWhitneyUTest(((t_MannWhitneyUTest *) arg)->object.this$));
        }
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MannWhitneyUTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MannWhitneyUTest object((jobject) NULL);

              INT_CALL(object = MannWhitneyUTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              MannWhitneyUTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = MannWhitneyUTest(a0, a1));
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

        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.mannWhitneyU(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyU", args);
          return NULL;
        }

        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1));
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
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyUTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory::mids$ = NULL;
        bool GeoMagneticFieldFactory::live$ = false;

        jclass GeoMagneticFieldFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_4aeee65bc3c68b0b] = env->getStaticMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getGeoMagneticFields_df53e62f422caa08] = env->getStaticMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
            mids$[mid_getIGRF_11ad1d91265636f7] = env->getStaticMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_11ad1d91265636f7] = env->getStaticMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getField_4aeee65bc3c68b0b], a0.this$, a1));
        }

        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields GeoMagneticFieldFactory::getGeoMagneticFields()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callStaticObjectMethod(cls, mids$[mid_getGeoMagneticFields_df53e62f422caa08]));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getIGRF(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getIGRF_11ad1d91265636f7], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getWMM(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getWMM_11ad1d91265636f7], a0));
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
        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory, geoMagneticFields),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getGeoMagneticFields, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getIGRF, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getWMM, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory, t_GeoMagneticFieldFactory, GeoMagneticFieldFactory);

        void t_GeoMagneticFieldFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory), &PY_TYPE_DEF(GeoMagneticFieldFactory), module, "GeoMagneticFieldFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "FieldModel", make_descriptor(&PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel)));
        }

        void t_GeoMagneticFieldFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "class_", make_descriptor(GeoMagneticFieldFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory::wrap_Object(GeoMagneticFieldFactory(((t_GeoMagneticFieldFactory *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWMM", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonMessageWriter::class$ = NULL;
            jmethodID *PythonMessageWriter::mids$ = NULL;
            bool PythonMessageWriter::live$ = false;

            jclass PythonMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_11b109bd155ca898] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_dff5885c2c873297] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeFooter_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_48090222d5fb583c] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_6a1f0a7164a88e0a] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageWriter::PythonMessageWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args);
            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self);
            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args);
            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data);
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data);
            static PyGetSetDef t_PythonMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageWriter)[] = {
              { Py_tp_methods, t_PythonMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonMessageWriter_init_ },
              { Py_tp_getset, t_PythonMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageWriter, t_PythonMessageWriter, PythonMessageWriter);
            PyObject *t_PythonMessageWriter::wrap_Object(const PythonMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageWriter), &PY_TYPE_DEF(PythonMessageWriter), module, "PythonMessageWriter", 1);
            }

            void t_PythonMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "class_", make_descriptor(PythonMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "wrapfn_", make_descriptor(t_PythonMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getFormatVersionKey0 },
                { "getRoot", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getRoot1 },
                { "getVersion", "()D", (void *) t_PythonMessageWriter_getVersion2 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageWriter_pythonDecRef3 },
                { "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonMessageWriter_writeFooter4 },
                { "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V", (void *) t_PythonMessageWriter_writeHeader5 },
                { "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonMessageWriter_writeSegment6 },
              };
              env->registerNatives(cls, methods, 7);
            }

            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonMessageWriter::wrap_Object(PythonMessageWriter(((t_PythonMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageWriter object((jobject) NULL);

              INT_CALL(object = PythonMessageWriter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getRoot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getRoot", result);
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

            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getVersion", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getVersion", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeFooter", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Header::wrap_Object(::org::orekit::files::ccsds::section::Header(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeHeader", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeSegment", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data)
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
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguityAcceptance::class$ = NULL;
          jmethodID *AmbiguityAcceptance::mids$ = NULL;
          bool AmbiguityAcceptance::live$ = false;

          jclass AmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_accept_9b257df6a366a6ba] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_570ce0828f81a2c1] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution AmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_9b257df6a366a6ba], a0.this$));
          }

          jint AmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_570ce0828f81a2c1]);
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
          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self);

          static PyMethodDef t_AmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_AmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_AmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityAcceptance)[] = {
            { Py_tp_methods, t_AmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguityAcceptance, t_AmbiguityAcceptance, AmbiguityAcceptance);

          void t_AmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityAcceptance), &PY_TYPE_DEF(AmbiguityAcceptance), module, "AmbiguityAcceptance", 0);
          }

          void t_AmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "class_", make_descriptor(AmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "wrapfn_", make_descriptor(t_AmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_AmbiguityAcceptance::wrap_Object(AmbiguityAcceptance(((t_AmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEState::class$ = NULL;
      jmethodID *ComplexODEState::mids$ = NULL;
      bool ComplexODEState::live$ = false;

      jclass ComplexODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_218aa60ac719f855] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_0320e82fa6ccb5a8] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteState_8a0770025abeda5b] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getCompleteStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_8a0770025abeda5b] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_8b297114c93ecf96] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryStateDimension_2235cd056f5a882b] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_4b54973ff9f93de0] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/complex/Complex;)[[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_218aa60ac719f855, a0, a1.this$)) {}

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0320e82fa6ccb5a8, a0, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteState_8a0770025abeda5b]));
      }

      jint ComplexODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_570ce0828f81a2c1]);
      }

      jint ComplexODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_8a0770025abeda5b]));
      }

      jint ComplexODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_8b297114c93ecf96], a0));
      }

      jint ComplexODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_2235cd056f5a882b], a0);
      }

      jdouble ComplexODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
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
      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data);
      static PyGetSetDef t_ComplexODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEState, completeState),
        DECLARE_GET_FIELD(t_ComplexODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryState),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEState__methods_[] = {
        DECLARE_METHOD(t_ComplexODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEState)[] = {
        { Py_tp_methods, t_ComplexODEState__methods_ },
        { Py_tp_init, (void *) t_ComplexODEState_init_ },
        { Py_tp_getset, t_ComplexODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEState, t_ComplexODEState, ComplexODEState);

      void t_ComplexODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEState), &PY_TYPE_DEF(ComplexODEState), module, "ComplexODEState", 0);
      }

      void t_ComplexODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "class_", make_descriptor(ComplexODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "wrapfn_", make_descriptor(t_ComplexODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEState::initializeClass, 1)))
          return NULL;
        return t_ComplexODEState::wrap_Object(ComplexODEState(((t_ComplexODEState *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a2((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEState(a0, a1, a2));
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

      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Sphere2D::class$ = NULL;
          jmethodID *Sphere2D::mids$ = NULL;
          bool Sphere2D::live$ = false;
          jdouble Sphere2D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Sphere2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_17db3a65980d3441] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_89597fd2befc9ecf] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/twod/Sphere2D;");
              mids$[mid_getSubSpace_1bd6b4665a0d1abd] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere2D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_17db3a65980d3441], a0);
          }

          jint Sphere2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          Sphere2D Sphere2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_89597fd2befc9ecf]));
          }

          ::org::hipparchus::geometry::spherical::oned::Sphere1D Sphere2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::Sphere1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_1bd6b4665a0d1abd]));
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
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self);
          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self);
          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data);
          static PyGetSetDef t_Sphere2D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere2D, dimension),
            DECLARE_GET_FIELD(t_Sphere2D, instance),
            DECLARE_GET_FIELD(t_Sphere2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere2D__methods_[] = {
            DECLARE_METHOD(t_Sphere2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere2D)[] = {
            { Py_tp_methods, t_Sphere2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere2D, t_Sphere2D, Sphere2D);

          void t_Sphere2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere2D), &PY_TYPE_DEF(Sphere2D), module, "Sphere2D", 0);
          }

          void t_Sphere2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "class_", make_descriptor(Sphere2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "wrapfn_", make_descriptor(t_Sphere2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "SMALLEST_TOLERANCE", make_descriptor(Sphere2D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere2D::initializeClass, 1)))
              return NULL;
            return t_Sphere2D::wrap_Object(Sphere2D(((t_Sphere2D *) arg)->object.this$));
          }
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::twod::Sphere2D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type)
          {
            Sphere2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Sphere2D::getInstance());
            return t_Sphere2D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data)
          {
            Sphere2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere2D::wrap_Object(value);
          }

          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperature2Model::class$ = NULL;
          jmethodID *GlobalPressureTemperature2Model::mids$ = NULL;
          bool GlobalPressureTemperature2Model::live$ = false;
          ::java::lang::String *GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass GlobalPressureTemperature2Model::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperature2Model");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_19e8fabe7fac9f6f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_b0686cbcd452eabf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_9192b414c25d017b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getA_60c7040667a7dc5c] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getPressure_dff5885c2c873297] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_dff5885c2c873297] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_getWaterVaporPressure_dff5885c2c873297] = env->getMethodID(cls, "getWaterVaporPressure", "()D");
              mids$[mid_weatherParameters_a7786d9d355d3792] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(jdouble a0, jdouble a1, const ::org::orekit::models::earth::Geoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19e8fabe7fac9f6f, a0, a1, a2.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0686cbcd452eabf, a0.this$, a1, a2, a3.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3, const ::org::orekit::data::DataProvidersManager & a4, const ::org::orekit::time::TimeScale & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9192b414c25d017b, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          JArray< jdouble > GlobalPressureTemperature2Model::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_60c7040667a7dc5c]));
          }

          jdouble GlobalPressureTemperature2Model::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_dff5885c2c873297]);
          }

          jdouble GlobalPressureTemperature2Model::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_dff5885c2c873297]);
          }

          jdouble GlobalPressureTemperature2Model::getWaterVaporPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWaterVaporPressure_dff5885c2c873297]);
          }

          void GlobalPressureTemperature2Model::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_a7786d9d355d3792], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperature2Model__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, a),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, temperature),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, waterVaporPressure),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperature2Model__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getA, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getWaterVaporPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperature2Model)[] = {
            { Py_tp_methods, t_GlobalPressureTemperature2Model__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperature2Model_init_ },
            { Py_tp_getset, t_GlobalPressureTemperature2Model__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperature2Model)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperature2Model, t_GlobalPressureTemperature2Model, GlobalPressureTemperature2Model);

          void t_GlobalPressureTemperature2Model::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperature2Model), &PY_TYPE_DEF(GlobalPressureTemperature2Model), module, "GlobalPressureTemperature2Model", 0);
          }

          void t_GlobalPressureTemperature2Model::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "class_", make_descriptor(GlobalPressureTemperature2Model::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "wrapfn_", make_descriptor(t_GlobalPressureTemperature2Model::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "boxfn_", make_descriptor(boxObject));
            env->getClass(GlobalPressureTemperature2Model::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperature2Model::wrap_Object(GlobalPressureTemperature2Model(((t_GlobalPressureTemperature2Model *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::Geoid a2((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ::org::orekit::time::TimeScale a5((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDkkk", ::org::orekit::models::earth::Geoid::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan2::class$ = NULL;
        jmethodID *Atan2::mids$ = NULL;
        bool Atan2::live$ = false;

        jclass Atan2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan2::Atan2() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Atan2::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args);

        static PyMethodDef t_Atan2__methods_[] = {
          DECLARE_METHOD(t_Atan2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan2)[] = {
          { Py_tp_methods, t_Atan2__methods_ },
          { Py_tp_init, (void *) t_Atan2_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan2)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan2, t_Atan2, Atan2);

        void t_Atan2::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan2), &PY_TYPE_DEF(Atan2), module, "Atan2", 0);
        }

        void t_Atan2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "class_", make_descriptor(Atan2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "wrapfn_", make_descriptor(t_Atan2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan2::initializeClass, 1)))
            return NULL;
          return t_Atan2::wrap_Object(Atan2(((t_Atan2 *) arg)->object.this$));
        }
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds)
        {
          Atan2 object((jobject) NULL);

          INT_CALL(object = Atan2());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonFieldShortPeriodTerms::class$ = NULL;
            jmethodID *PythonFieldShortPeriodTerms::mids$ = NULL;
            bool PythonFieldShortPeriodTerms::live$ = false;

            jclass PythonFieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_8ceaa814d240672e] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_32514bc2dbb6aee5] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldShortPeriodTerms::PythonFieldShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonFieldShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonFieldShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonFieldShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self);
            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonFieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, self),
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonFieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonFieldShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonFieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldShortPeriodTerms, t_PythonFieldShortPeriodTerms, PythonFieldShortPeriodTerms);
            PyObject *t_PythonFieldShortPeriodTerms::wrap_Object(const PythonFieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldShortPeriodTerms), &PY_TYPE_DEF(PythonFieldShortPeriodTerms), module, "PythonFieldShortPeriodTerms", 1);
            }

            void t_PythonFieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "class_", make_descriptor(PythonFieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonFieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonFieldShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonFieldShortPeriodTerms::wrap_Object(PythonFieldShortPeriodTerms(((t_PythonFieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonFieldShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data)
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
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data)
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
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNegateDetector::class$ = NULL;
        jmethodID *FieldNegateDetector::mids$ = NULL;
        bool FieldNegateDetector::live$ = false;

        jclass FieldNegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f929ebd2a84dbfe7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOriginal_4fe06ecc019ea51d] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_34fe31f8a0a646b6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNegateDetector::FieldNegateDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f929ebd2a84dbfe7, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNegateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldNegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_4fe06ecc019ea51d]));
        }

        void FieldNegateDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args);
        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self);
        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data);
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data);
        static PyGetSetDef t_FieldNegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNegateDetector, original),
          DECLARE_GET_FIELD(t_FieldNegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNegateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_FieldNegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNegateDetector)[] = {
          { Py_tp_methods, t_FieldNegateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNegateDetector_init_ },
          { Py_tp_getset, t_FieldNegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNegateDetector, t_FieldNegateDetector, FieldNegateDetector);
        PyObject *t_FieldNegateDetector::wrap_Object(const FieldNegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNegateDetector), &PY_TYPE_DEF(FieldNegateDetector), module, "FieldNegateDetector", 0);
        }

        void t_FieldNegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "class_", make_descriptor(FieldNegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "wrapfn_", make_descriptor(t_FieldNegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNegateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNegateDetector::wrap_Object(FieldNegateDetector(((t_FieldNegateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldNegateDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldNegateDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008InputParameters::class$ = NULL;
          jmethodID *JB2008InputParameters::mids$ = NULL;
          bool JB2008InputParameters::live$ = false;

          jclass JB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDSTDTC_bf1d7732f1acb697] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_bf1d7732f1acb697] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_bf1d7732f1acb697] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_bf1d7732f1acb697] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_bf1d7732f1acb697] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_bf1d7732f1acb697] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_bf1d7732f1acb697] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JB2008InputParameters::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10B_bf1d7732f1acb697], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
          }

          jdouble JB2008InputParameters::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10B_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10B_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10_bf1d7732f1acb697], a0.this$);
          }

          jdouble JB2008InputParameters::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10B_bf1d7732f1acb697], a0.this$);
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
          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data);
          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data);
          static PyGetSetDef t_JB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008InputParameters, maxDate),
            DECLARE_GET_FIELD(t_JB2008InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_JB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, getDSTDTC, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getS10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getS10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10B, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008InputParameters)[] = {
            { Py_tp_methods, t_JB2008InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(JB2008InputParameters, t_JB2008InputParameters, JB2008InputParameters);

          void t_JB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008InputParameters), &PY_TYPE_DEF(JB2008InputParameters), module, "JB2008InputParameters", 0);
          }

          void t_JB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "class_", make_descriptor(JB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "wrapfn_", make_descriptor(t_JB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_JB2008InputParameters::wrap_Object(JB2008InputParameters(((t_JB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDSTDTC(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *GlonassSatelliteChannel::class$ = NULL;
          jmethodID *GlonassSatelliteChannel::mids$ = NULL;
          bool GlonassSatelliteChannel::live$ = false;

          jclass GlonassSatelliteChannel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/GlonassSatelliteChannel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07ee2f395c5cfb36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;I)V");
              mids$[mid_getK_570ce0828f81a2c1] = env->getMethodID(cls, "getK", "()I");
              mids$[mid_getSatellite_7c0ce8c834d2e72b] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlonassSatelliteChannel::GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07ee2f395c5cfb36, a0.this$, a1)) {}

          jint GlonassSatelliteChannel::getK() const
          {
            return env->callIntMethod(this$, mids$[mid_getK_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::SatInSystem GlonassSatelliteChannel::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_7c0ce8c834d2e72b]));
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
        namespace observation {
          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data);
          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data);
          static PyGetSetDef t_GlonassSatelliteChannel__fields_[] = {
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, k),
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlonassSatelliteChannel__methods_[] = {
            DECLARE_METHOD(t_GlonassSatelliteChannel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getK, METH_NOARGS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlonassSatelliteChannel)[] = {
            { Py_tp_methods, t_GlonassSatelliteChannel__methods_ },
            { Py_tp_init, (void *) t_GlonassSatelliteChannel_init_ },
            { Py_tp_getset, t_GlonassSatelliteChannel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlonassSatelliteChannel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlonassSatelliteChannel, t_GlonassSatelliteChannel, GlonassSatelliteChannel);

          void t_GlonassSatelliteChannel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlonassSatelliteChannel), &PY_TYPE_DEF(GlonassSatelliteChannel), module, "GlonassSatelliteChannel", 0);
          }

          void t_GlonassSatelliteChannel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "class_", make_descriptor(GlonassSatelliteChannel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "wrapfn_", make_descriptor(t_GlonassSatelliteChannel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlonassSatelliteChannel::initializeClass, 1)))
              return NULL;
            return t_GlonassSatelliteChannel::wrap_Object(GlonassSatelliteChannel(((t_GlonassSatelliteChannel *) arg)->object.this$));
          }
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlonassSatelliteChannel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            jint a1;
            GlonassSatelliteChannel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::SatInSystem::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GlonassSatelliteChannel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getK());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getK());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
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
                mids$[mid_accept_bd04c9335fb9e4cf] = env->getMethodID(cls, "accept", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$BooleanConsumer::accept(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_bd04c9335fb9e4cf], a0);
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$InvalidPVProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$InvalidPVProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$InvalidPVProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$InvalidPVProvider::AggregatedPVCoordinatesProvider$InvalidPVProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider$InvalidPVProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider, t_AggregatedPVCoordinatesProvider$InvalidPVProvider, AggregatedPVCoordinatesProvider$InvalidPVProvider);

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider), module, "AggregatedPVCoordinatesProvider$InvalidPVProvider", 0);
      }

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_Object(AggregatedPVCoordinatesProvider$InvalidPVProvider(((t_AggregatedPVCoordinatesProvider$InvalidPVProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds)
      {
        AggregatedPVCoordinatesProvider$InvalidPVProvider object((jobject) NULL);

        INT_CALL(object = AggregatedPVCoordinatesProvider$InvalidPVProvider());
        self->object = object;

        return 0;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *GeodeticPoint::class$ = NULL;
      jmethodID *GeodeticPoint::mids$ = NULL;
      bool GeodeticPoint::live$ = false;
      GeodeticPoint *GeodeticPoint::NORTH_POLE = NULL;
      GeodeticPoint *GeodeticPoint::SOUTH_POLE = NULL;

      jclass GeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/GeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_dff5885c2c873297] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getEast_d52645e0d4c07563] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getLatitude_dff5885c2c873297] = env->getMethodID(cls, "getLatitude", "()D");
          mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
          mids$[mid_getNadir_d52645e0d4c07563] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_d52645e0d4c07563] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSouth_d52645e0d4c07563] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getWest_d52645e0d4c07563] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_d52645e0d4c07563] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "NORTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          SOUTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "SOUTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GeodeticPoint::GeodeticPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

      jboolean GeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jdouble GeodeticPoint::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_dff5885c2c873297]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_d52645e0d4c07563]));
      }

      jdouble GeodeticPoint::getLatitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLatitude_dff5885c2c873297]);
      }

      jdouble GeodeticPoint::getLongitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_d52645e0d4c07563]));
      }

      jint GeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::java::lang::String GeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data);
      static PyGetSetDef t_GeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_GeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, east),
        DECLARE_GET_FIELD(t_GeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_GeodeticPoint, north),
        DECLARE_GET_FIELD(t_GeodeticPoint, south),
        DECLARE_GET_FIELD(t_GeodeticPoint, west),
        DECLARE_GET_FIELD(t_GeodeticPoint, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_GeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GeodeticPoint)[] = {
        { Py_tp_methods, t_GeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_GeodeticPoint_init_ },
        { Py_tp_getset, t_GeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GeodeticPoint, t_GeodeticPoint, GeodeticPoint);

      void t_GeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(GeodeticPoint), &PY_TYPE_DEF(GeodeticPoint), module, "GeodeticPoint", 0);
      }

      void t_GeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "class_", make_descriptor(GeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "wrapfn_", make_descriptor(t_GeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "boxfn_", make_descriptor(boxObject));
        env->getClass(GeodeticPoint::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "NORTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::NORTH_POLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "SOUTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::SOUTH_POLE)));
      }

      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_GeodeticPoint::wrap_Object(GeodeticPoint(((t_GeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        GeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = GeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLatitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLongitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLatitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLongitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadataKey::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadataKey::live$ = false;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COMMENT = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ORDERING = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_TYPE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_UNITS = NULL;

              jclass OrbitCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_138c68d2746c1c8e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_45008e387ae525fc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");
                  mids$[mid_values_279f60f4984908a7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_CONFIDENCE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_FRAME_EPOCH = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_NEXT_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ORDERING = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ORDERING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MAX = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MIN = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_UNITS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_138c68d2746c1c8e], a0.this$, a1.this$, a2.this$);
              }

              OrbitCovarianceHistoryMetadataKey OrbitCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_45008e387ae525fc], a0.this$));
              }

              JArray< OrbitCovarianceHistoryMetadataKey > OrbitCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_279f60f4984908a7]));
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
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadataKey, t_OrbitCovarianceHistoryMetadataKey, OrbitCovarianceHistoryMetadataKey);
              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_Object(const OrbitCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadataKey), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey), module, "OrbitCovarianceHistoryMetadataKey", 0);
              }

              void t_OrbitCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "class_", make_descriptor(OrbitCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_CONFIDENCE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_FRAME_EPOCH", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_NEXT_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ORDERING", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ORDERING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MAX", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MIN", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_UNITS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_UNITS)));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(OrbitCovarianceHistoryMetadataKey(((t_OrbitCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *AbstractRealDistribution::class$ = NULL;
        jmethodID *AbstractRealDistribution::mids$ = NULL;
        bool AbstractRealDistribution::live$ = false;

        jclass AbstractRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/AbstractRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_86ffecc08a63eff0] = env->getMethodID(cls, "probability", "(DD)D");
            mids$[mid_getSolverAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getSolverAbsoluteAccuracy", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble AbstractRealDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
        }

        jdouble AbstractRealDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, logDensity, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRealDistribution)[] = {
          { Py_tp_methods, t_AbstractRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRealDistribution, t_AbstractRealDistribution, AbstractRealDistribution);

        void t_AbstractRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRealDistribution), &PY_TYPE_DEF(AbstractRealDistribution), module, "AbstractRealDistribution", 0);
        }

        void t_AbstractRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "class_", make_descriptor(AbstractRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "wrapfn_", make_descriptor(t_AbstractRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractRealDistribution::wrap_Object(AbstractRealDistribution(((t_AbstractRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020::class$ = NULL;
              jmethodID *Rtcm1020::mids$ = NULL;
              bool Rtcm1020::live$ = false;

              jclass Rtcm1020::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cf1a49b727a5b318] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020::Rtcm1020(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_cf1a49b727a5b318, a0, a1.this$)) {}
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args);
              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data);
              static PyGetSetDef t_Rtcm1020__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1020, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020)[] = {
                { Py_tp_methods, t_Rtcm1020__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020_init_ },
                { Py_tp_getset, t_Rtcm1020__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1020, t_Rtcm1020, Rtcm1020);
              PyObject *t_Rtcm1020::wrap_Object(const Rtcm1020& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1020::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1020::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020), &PY_TYPE_DEF(Rtcm1020), module, "Rtcm1020", 0);
              }

              void t_Rtcm1020::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "class_", make_descriptor(Rtcm1020::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "wrapfn_", make_descriptor(t_Rtcm1020::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020::wrap_Object(Rtcm1020(((t_Rtcm1020 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data a1((jobject) NULL);
                Rtcm1020 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1020(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1020Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SbasId::class$ = NULL;
          jmethodID *SbasId::mids$ = NULL;
          bool SbasId::live$ = false;
          SbasId *SbasId::A_SBAS = NULL;
          SbasId *SbasId::BDSBAS = NULL;
          SbasId *SbasId::EGNOS = NULL;
          SbasId *SbasId::GAGAN = NULL;
          SbasId *SbasId::KASS = NULL;
          SbasId *SbasId::MSAS = NULL;
          SbasId *SbasId::SACCSA = NULL;
          SbasId *SbasId::SDCM = NULL;
          SbasId *SbasId::SPAN = NULL;
          SbasId *SbasId::WAAS = NULL;

          jclass SbasId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SbasId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_4a103ce40e3e1eb1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_values_3e8f18767058fcea] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/SbasId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A_SBAS = new SbasId(env->getStaticObjectField(cls, "A_SBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              BDSBAS = new SbasId(env->getStaticObjectField(cls, "BDSBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              EGNOS = new SbasId(env->getStaticObjectField(cls, "EGNOS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              GAGAN = new SbasId(env->getStaticObjectField(cls, "GAGAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              KASS = new SbasId(env->getStaticObjectField(cls, "KASS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              MSAS = new SbasId(env->getStaticObjectField(cls, "MSAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SACCSA = new SbasId(env->getStaticObjectField(cls, "SACCSA", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SDCM = new SbasId(env->getStaticObjectField(cls, "SDCM", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SPAN = new SbasId(env->getStaticObjectField(cls, "SPAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              WAAS = new SbasId(env->getStaticObjectField(cls, "WAAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SbasId SbasId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SbasId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a103ce40e3e1eb1], a0.this$));
          }

          JArray< SbasId > SbasId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SbasId >(env->callStaticObjectMethod(cls, mids$[mid_values_3e8f18767058fcea]));
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
          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args);
          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SbasId_values(PyTypeObject *type);
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data);
          static PyGetSetDef t_SbasId__fields_[] = {
            DECLARE_GET_FIELD(t_SbasId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SbasId__methods_[] = {
            DECLARE_METHOD(t_SbasId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, of_, METH_VARARGS),
            DECLARE_METHOD(t_SbasId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SbasId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SbasId)[] = {
            { Py_tp_methods, t_SbasId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SbasId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SbasId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SbasId, t_SbasId, SbasId);
          PyObject *t_SbasId::wrap_Object(const SbasId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SbasId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SbasId::install(PyObject *module)
          {
            installType(&PY_TYPE(SbasId), &PY_TYPE_DEF(SbasId), module, "SbasId", 0);
          }

          void t_SbasId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "class_", make_descriptor(SbasId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "wrapfn_", make_descriptor(t_SbasId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "boxfn_", make_descriptor(boxObject));
            env->getClass(SbasId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "A_SBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::A_SBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "BDSBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::BDSBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "EGNOS", make_descriptor(t_SbasId::wrap_Object(*SbasId::EGNOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "GAGAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::GAGAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "KASS", make_descriptor(t_SbasId::wrap_Object(*SbasId::KASS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "MSAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::MSAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SACCSA", make_descriptor(t_SbasId::wrap_Object(*SbasId::SACCSA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SDCM", make_descriptor(t_SbasId::wrap_Object(*SbasId::SDCM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SPAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::SPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "WAAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::WAAS)));
          }

          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SbasId::initializeClass, 1)))
              return NULL;
            return t_SbasId::wrap_Object(SbasId(((t_SbasId *) arg)->object.this$));
          }
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SbasId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SbasId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::valueOf(a0));
              return t_SbasId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SbasId_values(PyTypeObject *type)
          {
            JArray< SbasId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::values());
            return JArray<jobject>(result.this$).wrap(t_SbasId::wrap_jobject);
          }
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data)
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
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Space::class$ = NULL;
      jmethodID *Space::mids$ = NULL;
      bool Space::live$ = false;

      jclass Space::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Space");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSubSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Space::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      Space Space::getSubSpace() const
      {
        return Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_ebbd6b2d39ab0e4f]));
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
      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_getDimension(t_Space *self);
      static PyObject *t_Space_getSubSpace(t_Space *self);
      static PyObject *t_Space_get__dimension(t_Space *self, void *data);
      static PyObject *t_Space_get__subSpace(t_Space *self, void *data);
      static PyGetSetDef t_Space__fields_[] = {
        DECLARE_GET_FIELD(t_Space, dimension),
        DECLARE_GET_FIELD(t_Space, subSpace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Space__methods_[] = {
        DECLARE_METHOD(t_Space, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Space, getSubSpace, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Space)[] = {
        { Py_tp_methods, t_Space__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Space__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Space)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Space, t_Space, Space);

      void t_Space::install(PyObject *module)
      {
        installType(&PY_TYPE(Space), &PY_TYPE_DEF(Space), module, "Space", 0);
      }

      void t_Space::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "class_", make_descriptor(Space::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "wrapfn_", make_descriptor(t_Space::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Space::initializeClass, 1)))
          return NULL;
        return t_Space::wrap_Object(Space(((t_Space *) arg)->object.this$));
      }
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Space::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Space_getDimension(t_Space *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Space_getSubSpace(t_Space *self)
      {
        Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubSpace());
        return t_Space::wrap_Object(result);
      }

      static PyObject *t_Space_get__dimension(t_Space *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Space_get__subSpace(t_Space *self, void *data)
      {
        Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubSpace());
        return t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovariance::class$ = NULL;
      jmethodID *StateCovariance::mids$ = NULL;
      bool StateCovariance::live$ = false;
      jint StateCovariance::STATE_DIMENSION = (jint) 0;

      jclass StateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_adcc3987ecb59f2f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_8c76bcc3b3703cd4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_182573aae0235221] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceFrame_4b28d150e65f081d] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceType_e0215de50e31f8fc] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_checkFrameAndOrbitTypeConsistency_45530030cb08ed48] = env->getStaticMethodID(cls, "checkFrameAndOrbitTypeConsistency", "(Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_d1997b828913f65f] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_688b496048ff947b] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStm_f193dd9736942df6] = env->getStaticMethodID(cls, "getStm", "(Lorg/orekit/orbits/Orbit;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_shiftedBy_5f863ee3bdf9af16] = env->getMethodID(cls, "shiftedBy", "(Lorg/orekit/orbits/Orbit;D)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_adcc3987ecb59f2f, a0.this$, a1.this$, a2.this$)) {}

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c76bcc3b3703cd4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_182573aae0235221], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_4b28d150e65f081d], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceType(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_e0215de50e31f8fc], a0.this$, a1.this$, a2.this$));
      }

      void StateCovariance::checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame & a0, const ::org::orekit::orbits::OrbitType & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFrameAndOrbitTypeConsistency_45530030cb08ed48], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate StateCovariance::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      ::org::orekit::frames::Frame StateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::LOF StateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_d1997b828913f65f]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_688b496048ff947b]));
      }

      ::org::orekit::orbits::OrbitType StateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
      }

      ::org::orekit::orbits::PositionAngleType StateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getStm(const ::org::orekit::orbits::Orbit & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_getStm_f193dd9736942df6], a0.this$, a1));
      }

      StateCovariance StateCovariance::shiftedBy(const ::org::orekit::orbits::Orbit & a0, jdouble a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_5f863ee3bdf9af16], a0.this$, a1));
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
      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data);
      static PyGetSetDef t_StateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovariance, date),
        DECLARE_GET_FIELD(t_StateCovariance, frame),
        DECLARE_GET_FIELD(t_StateCovariance, lOF),
        DECLARE_GET_FIELD(t_StateCovariance, matrix),
        DECLARE_GET_FIELD(t_StateCovariance, orbitType),
        DECLARE_GET_FIELD(t_StateCovariance, positionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovariance__methods_[] = {
        DECLARE_METHOD(t_StateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, checkFrameAndOrbitTypeConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getStm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovariance)[] = {
        { Py_tp_methods, t_StateCovariance__methods_ },
        { Py_tp_init, (void *) t_StateCovariance_init_ },
        { Py_tp_getset, t_StateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovariance, t_StateCovariance, StateCovariance);

      void t_StateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovariance), &PY_TYPE_DEF(StateCovariance), module, "StateCovariance", 0);
      }

      void t_StateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "class_", make_descriptor(StateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "wrapfn_", make_descriptor(t_StateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "boxfn_", make_descriptor(boxObject));
        env->getClass(StateCovariance::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "STATE_DIMENSION", make_descriptor(StateCovariance::STATE_DIMENSION));
      }

      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovariance::initializeClass, 1)))
          return NULL;
        return t_StateCovariance::wrap_Object(StateCovariance(((t_StateCovariance *) arg)->object.this$));
      }
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::LOF a2((jobject) NULL);
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkkKK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::StateCovariance::checkFrameAndOrbitTypeConsistency(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkFrameAndOrbitTypeConsistency", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::propagation::StateCovariance::getStm(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getStm", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoModel::class$ = NULL;
          jmethodID *KlobucharIonoModel::mids$ = NULL;
          bool KlobucharIonoModel::live$ = false;

          jclass KlobucharIonoModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_c9965c971ad94126] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_9d8059e615e4302f] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;DDD[D)D");
              mids$[mid_pathDelay_2787d703045bd2bf] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9965c971ad94126, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List KlobucharIonoModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jdouble a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_9d8059e615e4302f], a0.this$, a1.this$, a2, a3, a4, a5.this$);
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, const JArray< ::org::hipparchus::CalculusFieldElement > & a5) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_2787d703045bd2bf], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self);
          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args);
          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data);
          static PyGetSetDef t_KlobucharIonoModel__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoModel__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoModel)[] = {
            { Py_tp_methods, t_KlobucharIonoModel__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoModel_init_ },
            { Py_tp_getset, t_KlobucharIonoModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoModel, t_KlobucharIonoModel, KlobucharIonoModel);

          void t_KlobucharIonoModel::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoModel), &PY_TYPE_DEF(KlobucharIonoModel), module, "KlobucharIonoModel", 0);
          }

          void t_KlobucharIonoModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "class_", make_descriptor(KlobucharIonoModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "wrapfn_", make_descriptor(t_KlobucharIonoModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoModel::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoModel::wrap_Object(KlobucharIonoModel(((t_KlobucharIonoModel *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1, a2));
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

          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
              break;
             case 6:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                JArray< ::org::hipparchus::CalculusFieldElement > a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKD[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                jdouble a2;
                jdouble a3;
                jdouble a4;
                JArray< jdouble > a5((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkDDD[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data)
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
