#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonFieldEventHandler::class$ = NULL;
          jmethodID *PythonFieldEventHandler::mids$ = NULL;
          bool PythonFieldEventHandler::live$ = false;

          jclass PythonFieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonFieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_0b61dd15b1566b79] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_6d7738c703495790] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldEventHandler::PythonFieldEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonFieldEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonFieldEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonFieldEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace events {
        namespace handlers {
          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args);
          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self);
          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data);
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data);
          static PyGetSetDef t_PythonFieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, self),
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonFieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventHandler)[] = {
            { Py_tp_methods, t_PythonFieldEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonFieldEventHandler_init_ },
            { Py_tp_getset, t_PythonFieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldEventHandler, t_PythonFieldEventHandler, PythonFieldEventHandler);
          PyObject *t_PythonFieldEventHandler::wrap_Object(const PythonFieldEventHandler& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonFieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonFieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldEventHandler), &PY_TYPE_DEF(PythonFieldEventHandler), module, "PythonFieldEventHandler", 1);
          }

          void t_PythonFieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "class_", make_descriptor(PythonFieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "wrapfn_", make_descriptor(t_PythonFieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonFieldEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonFieldEventHandler::wrap_Object(PythonFieldEventHandler(((t_PythonFieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldEventHandler object((jobject) NULL);

            INT_CALL(object = PythonFieldEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data)
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
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data)
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
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/IterationListener.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationManager::class$ = NULL;
      jmethodID *IterationManager::mids$ = NULL;
      bool IterationManager::live$ = false;

      jclass IterationManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_929833d91a321b2f] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_addIterationListener_fed7170d694f54c3] = env->getMethodID(cls, "addIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_fireInitializationEvent_71cb46270a31ceff] = env->getMethodID(cls, "fireInitializationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationPerformedEvent_71cb46270a31ceff] = env->getMethodID(cls, "fireIterationPerformedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationStartedEvent_71cb46270a31ceff] = env->getMethodID(cls, "fireIterationStartedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireTerminationEvent_71cb46270a31ceff] = env->getMethodID(cls, "fireTerminationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxIterations_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_incrementIterationCount_7ae3461a92a43152] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_removeIterationListener_fed7170d694f54c3] = env->getMethodID(cls, "removeIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_resetIterationCount_7ae3461a92a43152] = env->getMethodID(cls, "resetIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationManager::IterationManager(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      IterationManager::IterationManager(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_929833d91a321b2f, a0, a1.this$)) {}

      void IterationManager::addIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addIterationListener_fed7170d694f54c3], a0.this$);
      }

      void IterationManager::fireInitializationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireInitializationEvent_71cb46270a31ceff], a0.this$);
      }

      void IterationManager::fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationPerformedEvent_71cb46270a31ceff], a0.this$);
      }

      void IterationManager::fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationStartedEvent_71cb46270a31ceff], a0.this$);
      }

      void IterationManager::fireTerminationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireTerminationEvent_71cb46270a31ceff], a0.this$);
      }

      jint IterationManager::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
      }

      jint IterationManager::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_f2f64475e4580546]);
      }

      void IterationManager::incrementIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_incrementIterationCount_7ae3461a92a43152]);
      }

      void IterationManager::removeIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeIterationListener_fed7170d694f54c3], a0.this$);
      }

      void IterationManager::resetIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_resetIterationCount_7ae3461a92a43152]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_getIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data);
      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data);
      static PyGetSetDef t_IterationManager__fields_[] = {
        DECLARE_GET_FIELD(t_IterationManager, iterations),
        DECLARE_GET_FIELD(t_IterationManager, maxIterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationManager__methods_[] = {
        DECLARE_METHOD(t_IterationManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, addIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, fireInitializationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationPerformedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationStartedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireTerminationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, incrementIterationCount, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, removeIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, resetIterationCount, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationManager)[] = {
        { Py_tp_methods, t_IterationManager__methods_ },
        { Py_tp_init, (void *) t_IterationManager_init_ },
        { Py_tp_getset, t_IterationManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterationManager, t_IterationManager, IterationManager);

      void t_IterationManager::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationManager), &PY_TYPE_DEF(IterationManager), module, "IterationManager", 0);
      }

      void t_IterationManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "class_", make_descriptor(IterationManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "wrapfn_", make_descriptor(t_IterationManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationManager::initializeClass, 1)))
          return NULL;
        return t_IterationManager::wrap_Object(IterationManager(((t_IterationManager *) arg)->object.this$));
      }
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterationManager(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = IterationManager(a0, a1));
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

      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireInitializationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireInitializationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationPerformedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationPerformedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationStartedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationStartedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireTerminationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireTerminationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_getIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.incrementIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.resetIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *MeasurementType::class$ = NULL;
      jmethodID *MeasurementType::mids$ = NULL;
      bool MeasurementType::live$ = false;
      MeasurementType *MeasurementType::CARRIER_PHASE = NULL;
      MeasurementType *MeasurementType::COMBINED_RANGE_PHASE = NULL;
      MeasurementType *MeasurementType::DOPPLER = NULL;
      MeasurementType *MeasurementType::PSEUDO_RANGE = NULL;
      MeasurementType *MeasurementType::SIGNAL_STRENGTH = NULL;

      jclass MeasurementType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/MeasurementType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_0aee3529d78e4b18] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_values_e316541010d6444a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/MeasurementType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CARRIER_PHASE = new MeasurementType(env->getStaticObjectField(cls, "CARRIER_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          COMBINED_RANGE_PHASE = new MeasurementType(env->getStaticObjectField(cls, "COMBINED_RANGE_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          DOPPLER = new MeasurementType(env->getStaticObjectField(cls, "DOPPLER", "Lorg/orekit/gnss/MeasurementType;"));
          PSEUDO_RANGE = new MeasurementType(env->getStaticObjectField(cls, "PSEUDO_RANGE", "Lorg/orekit/gnss/MeasurementType;"));
          SIGNAL_STRENGTH = new MeasurementType(env->getStaticObjectField(cls, "SIGNAL_STRENGTH", "Lorg/orekit/gnss/MeasurementType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MeasurementType MeasurementType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MeasurementType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0aee3529d78e4b18], a0.this$));
      }

      JArray< MeasurementType > MeasurementType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MeasurementType >(env->callStaticObjectMethod(cls, mids$[mid_values_e316541010d6444a]));
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
      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args);
      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MeasurementType_values(PyTypeObject *type);
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data);
      static PyGetSetDef t_MeasurementType__fields_[] = {
        DECLARE_GET_FIELD(t_MeasurementType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MeasurementType__methods_[] = {
        DECLARE_METHOD(t_MeasurementType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, of_, METH_VARARGS),
        DECLARE_METHOD(t_MeasurementType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MeasurementType)[] = {
        { Py_tp_methods, t_MeasurementType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MeasurementType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MeasurementType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MeasurementType, t_MeasurementType, MeasurementType);
      PyObject *t_MeasurementType::wrap_Object(const MeasurementType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MeasurementType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MeasurementType::install(PyObject *module)
      {
        installType(&PY_TYPE(MeasurementType), &PY_TYPE_DEF(MeasurementType), module, "MeasurementType", 0);
      }

      void t_MeasurementType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "class_", make_descriptor(MeasurementType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "wrapfn_", make_descriptor(t_MeasurementType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "boxfn_", make_descriptor(boxObject));
        env->getClass(MeasurementType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "CARRIER_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::CARRIER_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "COMBINED_RANGE_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::COMBINED_RANGE_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "DOPPLER", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::DOPPLER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "PSEUDO_RANGE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::PSEUDO_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "SIGNAL_STRENGTH", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::SIGNAL_STRENGTH)));
      }

      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MeasurementType::initializeClass, 1)))
          return NULL;
        return t_MeasurementType::wrap_Object(MeasurementType(((t_MeasurementType *) arg)->object.this$));
      }
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MeasurementType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MeasurementType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::valueOf(a0));
          return t_MeasurementType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MeasurementType_values(PyTypeObject *type)
      {
        JArray< MeasurementType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::values());
        return JArray<jobject>(result.this$).wrap(t_MeasurementType::wrap_jobject);
      }
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitStepHandler::mids$ = NULL;
        bool PythonFieldOrekitStepHandler::live$ = false;

        jclass PythonFieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_9eedcf3b856fcc75] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepHandler::PythonFieldOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self);
        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepHandler, t_PythonFieldOrekitStepHandler, PythonFieldOrekitStepHandler);
        PyObject *t_PythonFieldOrekitStepHandler::wrap_Object(const PythonFieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepHandler), &PY_TYPE_DEF(PythonFieldOrekitStepHandler), module, "PythonFieldOrekitStepHandler", 1);
        }

        void t_PythonFieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "class_", make_descriptor(PythonFieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V", (void *) t_PythonFieldOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepHandler::wrap_Object(PythonFieldOrekitStepHandler(((t_PythonFieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::FieldOrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/SlewingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *SlewingPanel::class$ = NULL;
      jmethodID *SlewingPanel::mids$ = NULL;
      bool SlewingPanel::live$ = false;

      jclass SlewingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/SlewingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_50acda441e2341fa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDD)V");
          mids$[mid_getNormal_665eae343e14b9ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_78226ca7935182ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SlewingPanel::SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_50acda441e2341fa, a0.this$, a1, a2.this$, a3.this$, a4, a5, a6, a7, a8)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SlewingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_665eae343e14b9ea], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SlewingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_78226ca7935182ea], a0.this$));
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
      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args);

      static PyMethodDef t_SlewingPanel__methods_[] = {
        DECLARE_METHOD(t_SlewingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SlewingPanel)[] = {
        { Py_tp_methods, t_SlewingPanel__methods_ },
        { Py_tp_init, (void *) t_SlewingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SlewingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(SlewingPanel, t_SlewingPanel, SlewingPanel);

      void t_SlewingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(SlewingPanel), &PY_TYPE_DEF(SlewingPanel), module, "SlewingPanel", 0);
      }

      void t_SlewingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "class_", make_descriptor(SlewingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "wrapfn_", make_descriptor(t_SlewingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SlewingPanel::initializeClass, 1)))
          return NULL;
        return t_SlewingPanel::wrap_Object(SlewingPanel(((t_SlewingPanel *) arg)->object.this$));
      }
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SlewingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        SlewingPanel object((jobject) NULL);

        if (!parseArgs(args, "kDkkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
        {
          INT_CALL(object = SlewingPanel(a0, a1, a2, a3, a4, a5, a6, a7, a8));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args)
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

        return callSuper(PY_TYPE(SlewingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonXmlTokenBuilder::class$ = NULL;
            jmethodID *PythonXmlTokenBuilder::mids$ = NULL;
            bool PythonXmlTokenBuilder::live$ = false;

            jclass PythonXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonXmlTokenBuilder::PythonXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonXmlTokenBuilder::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonXmlTokenBuilder::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonXmlTokenBuilder::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self);
            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args);
            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6);
            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data);
            static PyGetSetDef t_PythonXmlTokenBuilder__fields_[] = {
              DECLARE_GET_FIELD(t_PythonXmlTokenBuilder, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_PythonXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonXmlTokenBuilder)[] = {
              { Py_tp_methods, t_PythonXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_PythonXmlTokenBuilder_init_ },
              { Py_tp_getset, t_PythonXmlTokenBuilder__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonXmlTokenBuilder, t_PythonXmlTokenBuilder, PythonXmlTokenBuilder);

            void t_PythonXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonXmlTokenBuilder), &PY_TYPE_DEF(PythonXmlTokenBuilder), module, "PythonXmlTokenBuilder", 1);
            }

            void t_PythonXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "class_", make_descriptor(PythonXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "wrapfn_", make_descriptor(t_PythonXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonXmlTokenBuilder::initializeClass);
              JNINativeMethod methods[] = {
                { "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;", (void *) t_PythonXmlTokenBuilder_buildTokens0 },
                { "pythonDecRef", "()V", (void *) t_PythonXmlTokenBuilder_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_PythonXmlTokenBuilder::wrap_Object(PythonXmlTokenBuilder(((t_PythonXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              PythonXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = PythonXmlTokenBuilder());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args)
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

            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = (a0 ? Py_True : Py_False);
              PyObject *o1 = (a1 ? Py_True : Py_False);
              PyObject *o2 = env->fromJString((jstring) a2, 0);
              PyObject *o3 = env->fromJString((jstring) a3, 0);
              PyObject *o4 = ::java::util::t_Map::wrap_Object(::java::util::Map(a4));
              PyObject *o6 = env->fromJString((jstring) a6, 0);
              PyObject *result = PyObject_CallMethod(obj, "buildTokens", "OOOOOiO", o0, o1, o2, o3, o4, (int) a5, o6);
              Py_DECREF(o2);
              Py_DECREF(o3);
              Py_DECREF(o4);
              Py_DECREF(o6);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("buildTokens", result);
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

            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data)
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
#include "java/io/ObjectInputStream.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/NotActiveException.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInput.h"
#include "java/io/ObjectInputValidation.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/InvalidObjectException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputStream::class$ = NULL;
    jmethodID *ObjectInputStream::mids$ = NULL;
    bool ObjectInputStream::live$ = false;

    jclass ObjectInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a51aa99816400fdd] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_available_f2f64475e4580546] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultReadObject_7ae3461a92a43152] = env->getMethodID(cls, "defaultReadObject", "()V");
        mids$[mid_getObjectInputFilter_37597b78118eda63] = env->getMethodID(cls, "getObjectInputFilter", "()Ljava/io/ObjectInputFilter;");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_4e993e185759f10d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_1d06dd1980a98d13] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_29e026b9d068f1c7] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFields_7fc95909ca6a1a37] = env->getMethodID(cls, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
        mids$[mid_readFloat_966c782d3223854d] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_9c4b35f0a6dc87f3] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_125b1e9f043b29f8] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_f2f64475e4580546] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_0090f7797e403f43] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_a27fc9afd27e559d] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readObject_dfd7647d9110ac9f] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_readShort_f89720844d790ad7] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_0090f7797e403f43] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnshared_dfd7647d9110ac9f] = env->getMethodID(cls, "readUnshared", "()Ljava/lang/Object;");
        mids$[mid_readUnsignedByte_f2f64475e4580546] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_f2f64475e4580546] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_registerValidation_b54dbe70afcc7e91] = env->getMethodID(cls, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
        mids$[mid_setObjectInputFilter_08673f74e3323897] = env->getMethodID(cls, "setObjectInputFilter", "(Ljava/io/ObjectInputFilter;)V");
        mids$[mid_skipBytes_38565d58479aa24a] = env->getMethodID(cls, "skipBytes", "(I)I");
        mids$[mid_readStreamHeader_7ae3461a92a43152] = env->getMethodID(cls, "readStreamHeader", "()V");
        mids$[mid_readObjectOverride_dfd7647d9110ac9f] = env->getMethodID(cls, "readObjectOverride", "()Ljava/lang/Object;");
        mids$[mid_resolveProxyClass_4bfd98bd8c284f28] = env->getMethodID(cls, "resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveObject_ed50a8b49b8274dc] = env->getMethodID(cls, "resolveObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableResolveObject_677f083a4e44dce2] = env->getMethodID(cls, "enableResolveObject", "(Z)Z");
        mids$[mid_readClassDescriptor_8ad6f15d09fb9e15] = env->getMethodID(cls, "readClassDescriptor", "()Ljava/io/ObjectStreamClass;");
        mids$[mid_resolveClass_ad19ee5e4057c955] = env->getMethodID(cls, "resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream::ObjectInputStream(const ::java::io::InputStream & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_a51aa99816400fdd, a0.this$)) {}

    jint ObjectInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_f2f64475e4580546]);
    }

    void ObjectInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void ObjectInputStream::defaultReadObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultReadObject_7ae3461a92a43152]);
    }

    ::java::io::ObjectInputFilter ObjectInputStream::getObjectInputFilter() const
    {
      return ::java::io::ObjectInputFilter(env->callObjectMethod(this$, mids$[mid_getObjectInputFilter_37597b78118eda63]));
    }

    jint ObjectInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint ObjectInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_4e993e185759f10d], a0.this$, a1, a2);
    }

    jboolean ObjectInputStream::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_e470b6d9e0d979db]);
    }

    jbyte ObjectInputStream::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_1d06dd1980a98d13]);
    }

    jchar ObjectInputStream::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_29e026b9d068f1c7]);
    }

    jdouble ObjectInputStream::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_456d9a2f64d6b28d]);
    }

    ::java::io::ObjectInputStream$GetField ObjectInputStream::readFields() const
    {
      return ::java::io::ObjectInputStream$GetField(env->callObjectMethod(this$, mids$[mid_readFields_7fc95909ca6a1a37]));
    }

    jfloat ObjectInputStream::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_966c782d3223854d]);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_9c4b35f0a6dc87f3], a0.this$);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    jint ObjectInputStream::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_f2f64475e4580546]);
    }

    ::java::lang::String ObjectInputStream::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_0090f7797e403f43]));
    }

    jlong ObjectInputStream::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_a27fc9afd27e559d]);
    }

    ::java::lang::Object ObjectInputStream::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_dfd7647d9110ac9f]));
    }

    jshort ObjectInputStream::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_f89720844d790ad7]);
    }

    ::java::lang::String ObjectInputStream::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_0090f7797e403f43]));
    }

    ::java::lang::Object ObjectInputStream::readUnshared() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readUnshared_dfd7647d9110ac9f]));
    }

    jint ObjectInputStream::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_f2f64475e4580546]);
    }

    jint ObjectInputStream::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_f2f64475e4580546]);
    }

    void ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_registerValidation_b54dbe70afcc7e91], a0.this$, a1);
    }

    void ObjectInputStream::setObjectInputFilter(const ::java::io::ObjectInputFilter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setObjectInputFilter_08673f74e3323897], a0.this$);
    }

    jint ObjectInputStream::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_38565d58479aa24a], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data);
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data);
    static PyGetSetDef t_ObjectInputStream__fields_[] = {
      DECLARE_GETSET_FIELD(t_ObjectInputStream, objectInputFilter),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, defaultReadObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, getObjectInputFilter, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readBoolean, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readChar, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readDouble, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFloat, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFully, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readInt, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLine, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLong, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUTF, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnshared, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, registerValidation, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, setObjectInputFilter, METH_O),
      DECLARE_METHOD(t_ObjectInputStream, skipBytes, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputStream)[] = {
      { Py_tp_methods, t_ObjectInputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectInputStream_init_ },
      { Py_tp_getset, t_ObjectInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(ObjectInputStream, t_ObjectInputStream, ObjectInputStream);

    void t_ObjectInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputStream), &PY_TYPE_DEF(ObjectInputStream), module, "ObjectInputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "GetField", make_descriptor(&PY_TYPE_DEF(ObjectInputStream$GetField)));
    }

    void t_ObjectInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "class_", make_descriptor(ObjectInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "wrapfn_", make_descriptor(t_ObjectInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectInputStream::wrap_Object(ObjectInputStream(((t_ObjectInputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::InputStream a0((jobject) NULL);
      ObjectInputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectInputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self)
    {
      OBJ_CALL(self->object.defaultReadObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputFilter result((jobject) NULL);
      OBJ_CALL(result = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
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

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.readBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.readByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.readChar());
      return c2p(result);
    }

    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.readDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputStream$GetField result((jobject) NULL);
      OBJ_CALL(result = self->object.readFields());
      return ::java::io::t_ObjectInputStream$GetField::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.readFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args)
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

    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readInt());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.readLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readObject());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.readShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readUTF());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readUnshared());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args)
    {
      ::java::io::ObjectInputValidation a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "kI", ::java::io::ObjectInputValidation::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.registerValidation(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "registerValidation", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg)
    {
      ::java::io::ObjectInputFilter a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setObjectInputFilter(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setObjectInputFilter", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg)
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

    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data)
    {
      ::java::io::ObjectInputFilter value((jobject) NULL);
      OBJ_CALL(value = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(value);
    }
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data)
    {
      {
        ::java::io::ObjectInputFilter value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &value))
        {
          INT_CALL(self->object.setObjectInputFilter(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "objectInputFilter", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIOException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIOException::class$ = NULL;
      jmethodID *OrekitIOException::mids$ = NULL;
      bool OrekitIOException::live$ = false;

      jclass OrekitIOException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIOException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIOException::OrekitIOException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIOException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIOException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIOException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIOException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitIOException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data);
      static PyGetSetDef t_OrekitIOException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIOException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIOException, message),
        DECLARE_GET_FIELD(t_OrekitIOException, parts),
        DECLARE_GET_FIELD(t_OrekitIOException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIOException__methods_[] = {
        DECLARE_METHOD(t_OrekitIOException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIOException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIOException)[] = {
        { Py_tp_methods, t_OrekitIOException__methods_ },
        { Py_tp_init, (void *) t_OrekitIOException_init_ },
        { Py_tp_getset, t_OrekitIOException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIOException)[] = {
        &PY_TYPE_DEF(::java::io::IOException),
        NULL
      };

      DEFINE_TYPE(OrekitIOException, t_OrekitIOException, OrekitIOException);

      void t_OrekitIOException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIOException), &PY_TYPE_DEF(OrekitIOException), module, "OrekitIOException", 0);
      }

      void t_OrekitIOException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "class_", make_descriptor(OrekitIOException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "wrapfn_", make_descriptor(t_OrekitIOException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIOException::initializeClass, 1)))
          return NULL;
        return t_OrekitIOException::wrap_Object(OrekitIOException(((t_OrekitIOException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIOException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIOException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIOException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonSphericalHarmonicsProvider::live$ = false;

          jclass PythonSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSphericalHarmonicsProvider::PythonSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self);
          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSphericalHarmonicsProvider, t_PythonSphericalHarmonicsProvider, PythonSphericalHarmonicsProvider);

          void t_PythonSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonSphericalHarmonicsProvider), module, "PythonSphericalHarmonicsProvider", 1);
          }

          void t_PythonSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "class_", make_descriptor(PythonSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonSphericalHarmonicsProvider_getTideSystem5 },
              { "pythonDecRef", "()V", (void *) t_PythonSphericalHarmonicsProvider_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonSphericalHarmonicsProvider::wrap_Object(PythonSphericalHarmonicsProvider(((t_PythonSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data)
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
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearProcess::class$ = NULL;
          jmethodID *LinearProcess::mids$ = NULL;
          bool LinearProcess::live$ = false;

          jclass LinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_d2ab0077711f83a4] = env->getMethodID(cls, "getEvolution", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/linear/LinearEvolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::linear::LinearEvolution LinearProcess::getEvolution(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::linear::LinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_d2ab0077711f83a4], a0.this$));
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
          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args);
          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg);
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data);
          static PyGetSetDef t_LinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_LinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearProcess__methods_[] = {
            DECLARE_METHOD(t_LinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearProcess, getEvolution, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearProcess)[] = {
            { Py_tp_methods, t_LinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearProcess, t_LinearProcess, LinearProcess);
          PyObject *t_LinearProcess::wrap_Object(const LinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearProcess), &PY_TYPE_DEF(LinearProcess), module, "LinearProcess", 0);
          }

          void t_LinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "class_", make_descriptor(LinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "wrapfn_", make_descriptor(t_LinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearProcess::initializeClass, 1)))
              return NULL;
            return t_LinearProcess::wrap_Object(LinearProcess(((t_LinearProcess *) arg)->object.this$));
          }
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearEvolution result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEvolution(a0));
              return ::org::hipparchus::filtering::kalman::linear::t_LinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", arg);
            return NULL;
          }
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data)
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
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$Segment::class$ = NULL;
        jmethodID *StreamingCpfWriter$Segment::mids$ = NULL;
        bool StreamingCpfWriter$Segment::live$ = false;

        jclass StreamingCpfWriter$Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_writeEphemerisLine_9080af590c7e4f05] = env->getMethodID(cls, "writeEphemerisLine", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StreamingCpfWriter$Segment::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
        }

        void StreamingCpfWriter$Segment::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_2b88003f931f70a7], a0.this$);
        }

        void StreamingCpfWriter$Segment::writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_writeEphemerisLine_9080af590c7e4f05], a0.this$);
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
        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg);

        static PyMethodDef t_StreamingCpfWriter$Segment__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, finish, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, handleStep, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, writeEphemerisLine, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$Segment)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$Segment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$Segment, t_StreamingCpfWriter$Segment, StreamingCpfWriter$Segment);

        void t_StreamingCpfWriter$Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$Segment), &PY_TYPE_DEF(StreamingCpfWriter$Segment), module, "StreamingCpfWriter$Segment", 0);
        }

        void t_StreamingCpfWriter$Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "class_", make_descriptor(StreamingCpfWriter$Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "wrapfn_", make_descriptor(t_StreamingCpfWriter$Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$Segment::wrap_Object(StreamingCpfWriter$Segment(((t_StreamingCpfWriter$Segment *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
          {
            OBJ_CALL(self->object.writeEphemerisLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "writeEphemerisLine", arg);
          return NULL;
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
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmData::SsrIgmData() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIgmData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_f2f64475e4580546]);
              }

              void SsrIgmData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_0a2a1ac2721c0336], a0);
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
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitType::class$ = NULL;
      jmethodID *LibrationOrbitType::mids$ = NULL;
      bool LibrationOrbitType::live$ = false;
      LibrationOrbitType *LibrationOrbitType::HALO = NULL;
      LibrationOrbitType *LibrationOrbitType::LYAPUNOV = NULL;

      jclass LibrationOrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_325577e8d76d51a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitType;");
          mids$[mid_values_4d547f0f9c296451] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HALO = new LibrationOrbitType(env->getStaticObjectField(cls, "HALO", "Lorg/orekit/orbits/LibrationOrbitType;"));
          LYAPUNOV = new LibrationOrbitType(env->getStaticObjectField(cls, "LYAPUNOV", "Lorg/orekit/orbits/LibrationOrbitType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitType LibrationOrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_325577e8d76d51a9], a0.this$));
      }

      JArray< LibrationOrbitType > LibrationOrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_4d547f0f9c296451]));
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
      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args);
      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data);
      static PyGetSetDef t_LibrationOrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitType__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitType)[] = {
        { Py_tp_methods, t_LibrationOrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitType, t_LibrationOrbitType, LibrationOrbitType);
      PyObject *t_LibrationOrbitType::wrap_Object(const LibrationOrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitType), &PY_TYPE_DEF(LibrationOrbitType), module, "LibrationOrbitType", 0);
      }

      void t_LibrationOrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "class_", make_descriptor(LibrationOrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "wrapfn_", make_descriptor(t_LibrationOrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "HALO", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::HALO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "LYAPUNOV", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::LYAPUNOV)));
      }

      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitType::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitType::wrap_Object(LibrationOrbitType(((t_LibrationOrbitType *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::valueOf(a0));
          return t_LibrationOrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitType::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalArgumentException::class$ = NULL;
    jmethodID *IllegalArgumentException::mids$ = NULL;
    bool IllegalArgumentException::live$ = false;

    jclass IllegalArgumentException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalArgumentException");

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

    IllegalArgumentException::IllegalArgumentException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalArgumentException__methods_[] = {
      DECLARE_METHOD(t_IllegalArgumentException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalArgumentException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalArgumentException)[] = {
      { Py_tp_methods, t_IllegalArgumentException__methods_ },
      { Py_tp_init, (void *) t_IllegalArgumentException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalArgumentException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalArgumentException, t_IllegalArgumentException, IllegalArgumentException);

    void t_IllegalArgumentException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalArgumentException), &PY_TYPE_DEF(IllegalArgumentException), module, "IllegalArgumentException", 0);
    }

    void t_IllegalArgumentException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "class_", make_descriptor(IllegalArgumentException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "wrapfn_", make_descriptor(t_IllegalArgumentException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalArgumentException::initializeClass, 1)))
        return NULL;
      return t_IllegalArgumentException::wrap_Object(IllegalArgumentException(((t_IllegalArgumentException *) arg)->object.this$));
    }
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalArgumentException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalArgumentException object((jobject) NULL);

          INT_CALL(object = IllegalArgumentException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalArgumentException(a0, a1));
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
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldTaylorMap::class$ = NULL;
        jmethodID *FieldTaylorMap::mids$ = NULL;
        bool FieldTaylorMap::live$ = false;

        jclass FieldTaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldTaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9cf2acb2788b573e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_3537cc0f3be9839f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_compose_10e3913c7d4a482e] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_getFunction_ee1359d8f0ec1f6b] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getNbFunctions_f2f64475e4580546] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_f2f64475e4580546] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_01c7d10e96d5cf94] = env->getMethodID(cls, "getPoint", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_invert_435c9099831c7875] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/FieldMatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_value_3ec681aa2c641b4a] = env->getMethodID(cls, "value", "([D)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_45349640cfb1ab66] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTaylorMap::FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cf2acb2788b573e, a0.this$, a1.this$)) {}

        FieldTaylorMap::FieldTaylorMap(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3537cc0f3be9839f, a0.this$, a1, a2, a3)) {}

        FieldTaylorMap FieldTaylorMap::compose(const FieldTaylorMap & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_compose_10e3913c7d4a482e], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldTaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_ee1359d8f0ec1f6b], a0));
        }

        jint FieldTaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_f2f64475e4580546]);
        }

        jint FieldTaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::getPoint() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPoint_01c7d10e96d5cf94]));
        }

        FieldTaylorMap FieldTaylorMap::invert(const ::org::hipparchus::linear::FieldMatrixDecomposer & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_invert_435c9099831c7875], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_3ec681aa2c641b4a], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_45349640cfb1ab66], a0.this$));
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
        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args);
        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args);
        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data);
        static PyGetSetDef t_FieldTaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_FieldTaylorMap, point),
          DECLARE_GET_FIELD(t_FieldTaylorMap, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTaylorMap__methods_[] = {
          DECLARE_METHOD(t_FieldTaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTaylorMap, compose, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, invert, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTaylorMap)[] = {
          { Py_tp_methods, t_FieldTaylorMap__methods_ },
          { Py_tp_init, (void *) t_FieldTaylorMap_init_ },
          { Py_tp_getset, t_FieldTaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTaylorMap, t_FieldTaylorMap, FieldTaylorMap);
        PyObject *t_FieldTaylorMap::wrap_Object(const FieldTaylorMap& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTaylorMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTaylorMap), &PY_TYPE_DEF(FieldTaylorMap), module, "FieldTaylorMap", 0);
        }

        void t_FieldTaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "class_", make_descriptor(FieldTaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "wrapfn_", make_descriptor(t_FieldTaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTaylorMap::initializeClass, 1)))
            return NULL;
          return t_FieldTaylorMap::wrap_Object(FieldTaylorMap(((t_FieldTaylorMap *) arg)->object.this$));
        }
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1, a2, a3));
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

        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg)
        {
          FieldTaylorMap a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", FieldTaylorMap::initializeClass, &a0, &p0, t_FieldTaylorMap::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::FieldMatrixDecomposer a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrixDecomposer::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixDecomposer::parameters_))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *EllipticalFieldOfView::class$ = NULL;
        jmethodID *EllipticalFieldOfView::mids$ = NULL;
        bool EllipticalFieldOfView::live$ = false;

        jclass EllipticalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/EllipticalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_16c53ea5015820c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDD)V");
            mids$[mid_getFocus1_17a952530a808943] = env->getMethodID(cls, "getFocus1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFocus2_17a952530a808943] = env->getMethodID(cls, "getFocus2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHalfApertureAlongX_456d9a2f64d6b28d] = env->getMethodID(cls, "getHalfApertureAlongX", "()D");
            mids$[mid_getHalfApertureAlongY_456d9a2f64d6b28d] = env->getMethodID(cls, "getHalfApertureAlongY", "()D");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_5f993a721a1d8c59] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipticalFieldOfView::EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_16c53ea5015820c2, a0.this$, a1.this$, a2, a3, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus1() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus1_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus2() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus2_17a952530a808943]));
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongX_456d9a2f64d6b28d]);
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongY_456d9a2f64d6b28d]);
        }

        jdouble EllipticalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_afd63a09f6d01e4c], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data);
        static PyGetSetDef t_EllipticalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus1),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus2),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongX),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongY),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipticalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_EllipticalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus1, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus2, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongX, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongY, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipticalFieldOfView)[] = {
          { Py_tp_methods, t_EllipticalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_EllipticalFieldOfView_init_ },
          { Py_tp_getset, t_EllipticalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipticalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(EllipticalFieldOfView, t_EllipticalFieldOfView, EllipticalFieldOfView);

        void t_EllipticalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipticalFieldOfView), &PY_TYPE_DEF(EllipticalFieldOfView), module, "EllipticalFieldOfView", 0);
        }

        void t_EllipticalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "class_", make_descriptor(EllipticalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "wrapfn_", make_descriptor(t_EllipticalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipticalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_EllipticalFieldOfView::wrap_Object(EllipticalFieldOfView(((t_EllipticalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipticalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          EllipticalFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EllipticalFieldOfView(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdapterDetector::class$ = NULL;
        jmethodID *FieldAdapterDetector::mids$ = NULL;
        bool FieldAdapterDetector::live$ = false;

        jclass FieldAdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1843b26af41f9c8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_9afb3f6694da2222] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getHandler_fa8b0a49dc8c921f] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_e6d4d3215c30992a] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAdapterDetector::FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1843b26af41f9c8e, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldAdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9afb3f6694da2222]));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_fa8b0a49dc8c921f]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9]));
        }

        jint FieldAdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_e6d4d3215c30992a]));
        }

        void FieldAdapterDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args);
        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args);
        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data);
        static PyGetSetDef t_FieldAdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdapterDetector, detector),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, handler),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdapterDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdapterDetector)[] = {
          { Py_tp_methods, t_FieldAdapterDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAdapterDetector_init_ },
          { Py_tp_getset, t_FieldAdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdapterDetector, t_FieldAdapterDetector, FieldAdapterDetector);
        PyObject *t_FieldAdapterDetector::wrap_Object(const FieldAdapterDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdapterDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdapterDetector), &PY_TYPE_DEF(FieldAdapterDetector), module, "FieldAdapterDetector", 0);
        }

        void t_FieldAdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "class_", make_descriptor(FieldAdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "wrapfn_", make_descriptor(t_FieldAdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdapterDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAdapterDetector::wrap_Object(FieldAdapterDetector(((t_FieldAdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldAdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractMeasurementBuilder::class$ = NULL;
          jmethodID *PythonAbstractMeasurementBuilder::mids$ = NULL;
          bool PythonAbstractMeasurementBuilder::live$ = false;

          jclass PythonAbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1cda38b242122db4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;[D[D[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_init$_f74e8126ce3426c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DD[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_d02e2fca157afe5d] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getBaseWeight_7cdc325af0834901] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getEnd_aaa854c403487cf3] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getNoise_7cdc325af0834901] = env->getMethodID(cls, "getNoise", "()[D");
              mids$[mid_getSatellites_ff20f279f9ba9f9e] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_1cda38b242122db4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f74e8126ce3426c2, a0.this$, a1, a2, a3.this$)) {}

          void PythonAbstractMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getBaseWeight() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_7cdc325af0834901]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getEnd() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_aaa854c403487cf3]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getNoise() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNoise_7cdc325af0834901]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > PythonAbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_ff20f279f9ba9f9e]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getStart() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getTheoreticalStandardDeviation() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901]));
          }

          jlong PythonAbstractMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, baseWeight),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, end),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, noise),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, start),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, theoreticalStandardDeviation),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getBaseWeight, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getNoise, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getSatellites, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getStart, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getTheoreticalStandardDeviation, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractMeasurementBuilder, t_PythonAbstractMeasurementBuilder, PythonAbstractMeasurementBuilder);
          PyObject *t_PythonAbstractMeasurementBuilder::wrap_Object(const PythonAbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractMeasurementBuilder), &PY_TYPE_DEF(PythonAbstractMeasurementBuilder), module, "PythonAbstractMeasurementBuilder", 1);
          }

          void t_PythonAbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "class_", make_descriptor(PythonAbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonAbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonAbstractMeasurementBuilder_build0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurementBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractMeasurementBuilder::wrap_Object(PythonAbstractMeasurementBuilder(((t_PythonAbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "k[D[D[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "kDD[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseWeight());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNoise());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSatellites());
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
            }

            return callSuper(PY_TYPE(PythonAbstractMeasurementBuilder), (PyObject *) self, "getSatellites", args, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
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

          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseWeight());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNoise());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_59b52385712e2119] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_e6884b0e87afb0fe] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_8ad78bbe55a6bdaf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getA_7cdc325af0834901] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getPressure_456d9a2f64d6b28d] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_456d9a2f64d6b28d] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_getWaterVaporPressure_456d9a2f64d6b28d] = env->getMethodID(cls, "getWaterVaporPressure", "()D");
              mids$[mid_weatherParameters_82dcc83e88ee1b1f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(jdouble a0, jdouble a1, const ::org::orekit::models::earth::Geoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59b52385712e2119, a0, a1, a2.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6884b0e87afb0fe, a0.this$, a1, a2, a3.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3, const ::org::orekit::data::DataProvidersManager & a4, const ::org::orekit::time::TimeScale & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ad78bbe55a6bdaf, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          JArray< jdouble > GlobalPressureTemperature2Model::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_7cdc325af0834901]));
          }

          jdouble GlobalPressureTemperature2Model::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_456d9a2f64d6b28d]);
          }

          jdouble GlobalPressureTemperature2Model::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_456d9a2f64d6b28d]);
          }

          jdouble GlobalPressureTemperature2Model::getWaterVaporPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWaterVaporPressure_456d9a2f64d6b28d]);
          }

          void GlobalPressureTemperature2Model::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_82dcc83e88ee1b1f], a0, a1.this$);
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
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics::class$ = NULL;
        jmethodID *StreamingStatistics::mids$ = NULL;
        bool StreamingStatistics::live$ = false;

        jclass StreamingStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_313f2327697bef05] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_aggregate_209abf4c4bd685bf] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)V");
            mids$[mid_builder_8895a9fba315c7a6] = env->getStaticMethodID(cls, "builder", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_cdee09d4729ad8fd] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getGeometricMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMedian_456d9a2f64d6b28d] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_0ba5fed9597b693e] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSecondMoment_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondMoment", "()D");
            mids$[mid_getStandardDeviation_456d9a2f64d6b28d] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfLogs_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumOfLogs", "()D");
            mids$[mid_getSumOfSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getSummary_47e97143cdc53a1c] = env->getMethodID(cls, "getSummary", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics::StreamingStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        StreamingStatistics::StreamingStatistics(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_313f2327697bef05, a0, a1.this$)) {}

        void StreamingStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
        }

        void StreamingStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_77e0f9a1f260e2e5], a0);
        }

        void StreamingStatistics::aggregate(const StreamingStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_209abf4c4bd685bf], a0.this$);
        }

        ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics::builder()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder(env->callStaticObjectMethod(cls, mids$[mid_builder_8895a9fba315c7a6]));
        }

        void StreamingStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        StreamingStatistics StreamingStatistics::copy() const
        {
          return StreamingStatistics(env->callObjectMethod(this$, mids$[mid_copy_cdee09d4729ad8fd]));
        }

        jboolean StreamingStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        jdouble StreamingStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jlong StreamingStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble StreamingStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_0ba5fed9597b693e], a0);
        }

        jdouble StreamingStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getSecondMoment() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondMoment_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getSumOfLogs() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfLogs_456d9a2f64d6b28d]);
        }

        jdouble StreamingStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary StreamingStatistics::getSummary() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSummary_47e97143cdc53a1c]));
        }

        jdouble StreamingStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_456d9a2f64d6b28d]);
        }

        jint StreamingStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        ::java::lang::String StreamingStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type);
        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data);
        static PyGetSetDef t_StreamingStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingStatistics, geometricMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, max),
          DECLARE_GET_FIELD(t_StreamingStatistics, mean),
          DECLARE_GET_FIELD(t_StreamingStatistics, median),
          DECLARE_GET_FIELD(t_StreamingStatistics, min),
          DECLARE_GET_FIELD(t_StreamingStatistics, n),
          DECLARE_GET_FIELD(t_StreamingStatistics, populationVariance),
          DECLARE_GET_FIELD(t_StreamingStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, secondMoment),
          DECLARE_GET_FIELD(t_StreamingStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_StreamingStatistics, sum),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfLogs),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_StreamingStatistics, summary),
          DECLARE_GET_FIELD(t_StreamingStatistics, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingStatistics__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, accept, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, addValue, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, aggregate, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, builder, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSecondMoment, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfLogs, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSummary, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics)[] = {
          { Py_tp_methods, t_StreamingStatistics__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics_init_ },
          { Py_tp_getset, t_StreamingStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics, t_StreamingStatistics, StreamingStatistics);

        void t_StreamingStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics), &PY_TYPE_DEF(StreamingStatistics), module, "StreamingStatistics", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "StreamingStatisticsBuilder", make_descriptor(&PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder)));
        }

        void t_StreamingStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "class_", make_descriptor(StreamingStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "wrapfn_", make_descriptor(t_StreamingStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics::wrap_Object(StreamingStatistics(((t_StreamingStatistics *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              StreamingStatistics object((jobject) NULL);

              INT_CALL(object = StreamingStatistics());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              StreamingStatistics object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StreamingStatistics(a0, a1));
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

        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg)
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

        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg)
        {
          StreamingStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", StreamingStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.aggregate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StreamingStatistics::builder());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self)
        {
          StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/UnitsCache.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsCache::class$ = NULL;
        jmethodID *UnitsCache::mids$ = NULL;
        bool UnitsCache::live$ = false;

        jclass UnitsCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getUnits_6650924024ae0f55] = env->getMethodID(cls, "getUnits", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsCache::UnitsCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::utils::units::Unit UnitsCache::getUnits(const ::java::lang::String & a0) const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_6650924024ae0f55], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg);

        static PyMethodDef t_UnitsCache__methods_[] = {
          DECLARE_METHOD(t_UnitsCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, getUnits, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsCache)[] = {
          { Py_tp_methods, t_UnitsCache__methods_ },
          { Py_tp_init, (void *) t_UnitsCache_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsCache, t_UnitsCache, UnitsCache);

        void t_UnitsCache::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsCache), &PY_TYPE_DEF(UnitsCache), module, "UnitsCache", 0);
        }

        void t_UnitsCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "class_", make_descriptor(UnitsCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "wrapfn_", make_descriptor(t_UnitsCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsCache::initializeClass, 1)))
            return NULL;
          return t_UnitsCache::wrap_Object(UnitsCache(((t_UnitsCache *) arg)->object.this$));
        }
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds)
        {
          UnitsCache object((jobject) NULL);

          INT_CALL(object = UnitsCache());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::utils::units::Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getUnits(a0));
            return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUnits", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethod::live$ = false;
              jdouble ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD = (jdouble) 0;

              jclass ShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_ebc171d08f1d7fba] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d55bd73b302e5c1d] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4c5fe0d13c4a2327] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_89657d3eec4c0847] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a4d7e214295a00c5] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a50e19d883e35f53] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8a0e10c1a658e7e9] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4f61fc1ea038da56] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_3bcb77a97ea3d0dc] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_56248789276af3a9] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_7267010ee6098c01] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_c51dae52f7f8ac4e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_870697ec3831405a] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_1b10fae37738440c] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_97c5e8233a686699] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_ZERO_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ZERO_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ebc171d08f1d7fba], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d55bd73b302e5c1d], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4c5fe0d13c4a2327], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_89657d3eec4c0847], a0.this$, a1.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a4d7e214295a00c5], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a50e19d883e35f53], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8a0e10c1a658e7e9], a0.this$, a1, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4f61fc1ea038da56], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_3bcb77a97ea3d0dc], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_56248789276af3a9], a0.this$, a1.this$, a2.this$, a3.this$, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7267010ee6098c01], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_c51dae52f7f8ac4e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_870697ec3831405a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1b10fae37738440c], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_97c5e8233a686699], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String ShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethod::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
              }

              jboolean ShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db]);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, name),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethod, t_ShortTermEncounter2DPOCMethod, ShortTermEncounter2DPOCMethod);

              void t_ShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethod), module, "ShortTermEncounter2DPOCMethod", 0);
              }

              void t_ShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "class_", make_descriptor(ShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "DEFAULT_ZERO_THRESHOLD", make_descriptor(ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethod::wrap_Object(ShortTermEncounter2DPOCMethod(((t_ShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 1:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "K", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
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
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TAIScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble TAIScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TAIScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble TAIScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String TAIScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffsetPointing::class$ = NULL;
      jmethodID *LofOffsetPointing::mids$ = NULL;
      bool LofOffsetPointing::live$ = false;

      jclass LofOffsetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffsetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0d2c3c0a71896e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffsetPointing::LofOffsetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_d0d2c3c0a71896e1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args);

      static PyMethodDef t_LofOffsetPointing__methods_[] = {
        DECLARE_METHOD(t_LofOffsetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffsetPointing)[] = {
        { Py_tp_methods, t_LofOffsetPointing__methods_ },
        { Py_tp_init, (void *) t_LofOffsetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffsetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(LofOffsetPointing, t_LofOffsetPointing, LofOffsetPointing);

      void t_LofOffsetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffsetPointing), &PY_TYPE_DEF(LofOffsetPointing), module, "LofOffsetPointing", 0);
      }

      void t_LofOffsetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "class_", make_descriptor(LofOffsetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "wrapfn_", make_descriptor(t_LofOffsetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffsetPointing::initializeClass, 1)))
          return NULL;
        return t_LofOffsetPointing::wrap_Object(LofOffsetPointing(((t_LofOffsetPointing *) arg)->object.this$));
      }
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffsetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        LofOffsetPointing object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LofOffsetPointing(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitudeRotation", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldBooleanDetector::class$ = NULL;
        jmethodID *FieldBooleanDetector::mids$ = NULL;
        bool FieldBooleanDetector::live$ = false;

        jclass FieldBooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldBooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_0157e0384da63662] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_andCombine_8b9f98582937f428] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetectors_a6156df500549a58] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_notCombine_835a5282d28930ad] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldNegateDetector;");
            mids$[mid_orCombine_0157e0384da63662] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_orCombine_8b9f98582937f428] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_create_9c0b562710a845f3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldBooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_0157e0384da63662], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_8b9f98582937f428], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBooleanDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::java::util::List FieldBooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_a6156df500549a58]));
        }

        void FieldBooleanDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::FieldNegateDetector FieldBooleanDetector::notCombine(const ::org::orekit::propagation::events::FieldEventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::FieldNegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_835a5282d28930ad], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_0157e0384da63662], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_8b9f98582937f428], a0.this$));
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
        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self);
        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data);
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data);
        static PyGetSetDef t_FieldBooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBooleanDetector, detectors),
          DECLARE_GET_FIELD(t_FieldBooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBooleanDetector__methods_[] = {
          DECLARE_METHOD(t_FieldBooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBooleanDetector)[] = {
          { Py_tp_methods, t_FieldBooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldBooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldBooleanDetector, t_FieldBooleanDetector, FieldBooleanDetector);
        PyObject *t_FieldBooleanDetector::wrap_Object(const FieldBooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBooleanDetector), &PY_TYPE_DEF(FieldBooleanDetector), module, "FieldBooleanDetector", 0);
        }

        void t_FieldBooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "class_", make_descriptor(FieldBooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "wrapfn_", make_descriptor(t_FieldBooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBooleanDetector::initializeClass, 1)))
            return NULL;
          return t_FieldBooleanDetector::wrap_Object(FieldBooleanDetector(((t_FieldBooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldNegateDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_FieldNegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader$LineParameters::class$ = NULL;
            jmethodID *SOLFSMYDataLoader$LineParameters::mids$ = NULL;
            bool SOLFSMYDataLoader$LineParameters::live$ = false;

            jclass SOLFSMYDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d1c0c6d79ec1d6d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDD)V");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getF10_456d9a2f64d6b28d] = env->getMethodID(cls, "getF10", "()D");
                mids$[mid_getF10B_456d9a2f64d6b28d] = env->getMethodID(cls, "getF10B", "()D");
                mids$[mid_getS10_456d9a2f64d6b28d] = env->getMethodID(cls, "getS10", "()D");
                mids$[mid_getS10B_456d9a2f64d6b28d] = env->getMethodID(cls, "getS10B", "()D");
                mids$[mid_getXM10_456d9a2f64d6b28d] = env->getMethodID(cls, "getXM10", "()D");
                mids$[mid_getXM10B_456d9a2f64d6b28d] = env->getMethodID(cls, "getXM10B", "()D");
                mids$[mid_getY10_456d9a2f64d6b28d] = env->getMethodID(cls, "getY10", "()D");
                mids$[mid_getY10B_456d9a2f64d6b28d] = env->getMethodID(cls, "getY10B", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader$LineParameters::SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1c0c6d79ec1d6d3, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_456d9a2f64d6b28d]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_456d9a2f64d6b28d]);
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
            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10B),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10B, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader$LineParameters, t_SOLFSMYDataLoader$LineParameters, SOLFSMYDataLoader$LineParameters);

            void t_SOLFSMYDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader$LineParameters), &PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters), module, "SOLFSMYDataLoader$LineParameters", 0);
            }

            void t_SOLFSMYDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "class_", make_descriptor(SOLFSMYDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader$LineParameters::wrap_Object(SOLFSMYDataLoader$LineParameters(((t_SOLFSMYDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              SOLFSMYDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = SOLFSMYDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10B());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *FirstMoment::class$ = NULL;
          jmethodID *FirstMoment::mids$ = NULL;
          bool FirstMoment::live$ = false;

          jclass FirstMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/FirstMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_15286cb5955cd290] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/FirstMoment;");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_aggregate_8ac58f304db3fcf7] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FirstMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          FirstMoment FirstMoment::copy() const
          {
            return FirstMoment(env->callObjectMethod(this$, mids$[mid_copy_15286cb5955cd290]));
          }

          jlong FirstMoment::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble FirstMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void FirstMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data);
          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data);
          static PyGetSetDef t_FirstMoment__fields_[] = {
            DECLARE_GET_FIELD(t_FirstMoment, n),
            DECLARE_GET_FIELD(t_FirstMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FirstMoment__methods_[] = {
            DECLARE_METHOD(t_FirstMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getN, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FirstMoment)[] = {
            { Py_tp_methods, t_FirstMoment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FirstMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FirstMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(FirstMoment, t_FirstMoment, FirstMoment);

          void t_FirstMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(FirstMoment), &PY_TYPE_DEF(FirstMoment), module, "FirstMoment", 0);
          }

          void t_FirstMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "class_", make_descriptor(FirstMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "wrapfn_", make_descriptor(t_FirstMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FirstMoment::initializeClass, 1)))
              return NULL;
            return t_FirstMoment::wrap_Object(FirstMoment(((t_FirstMoment *) arg)->object.this$));
          }
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FirstMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args)
          {
            FirstMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_FirstMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
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
            mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EstimationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
        }

        void EstimationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_4e618201ea15a8cc] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_e65e411976c35f1d] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileWriter::PythonEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_a27fc9afd27e559d]);
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
