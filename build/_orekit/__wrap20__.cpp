#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/StepEndEventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *StepEndEventState::class$ = NULL;
        jmethodID *StepEndEventState::mids$ = NULL;
        bool StepEndEventState::live$ = false;

        jclass StepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/StepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff5dc983cf5314d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
            mids$[mid_doEvent_f67305c017c9762e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_37ca30d971b4fe79] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_dff5885c2c873297] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_getHandler_6ac30cb74168b374] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEStepEndHandler;");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_setStepEnd_17db3a65980d3441] = env->getMethodID(cls, "setStepEnd", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepEndEventState::StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff5dc983cf5314d8, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence StepEndEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_f67305c017c9762e], a0.this$));
        }

        jboolean StepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_37ca30d971b4fe79], a0.this$);
        }

        jdouble StepEndEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_dff5885c2c873297]);
        }

        ::org::hipparchus::ode::events::ODEStepEndHandler StepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_6ac30cb74168b374]));
        }

        void StepEndEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
        }

        void StepEndEventState::setStepEnd(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_17db3a65980d3441], a0);
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
        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args);
        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data);
        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data);
        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data);
        static PyGetSetDef t_StepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_StepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_StepEndEventState, handler),
          DECLARE_SET_FIELD(t_StepEndEventState, stepEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepEndEventState__methods_[] = {
          DECLARE_METHOD(t_StepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_StepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_StepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_StepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepEndEventState)[] = {
          { Py_tp_methods, t_StepEndEventState__methods_ },
          { Py_tp_init, (void *) t_StepEndEventState_init_ },
          { Py_tp_getset, t_StepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepEndEventState, t_StepEndEventState, StepEndEventState);

        void t_StepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(StepEndEventState), &PY_TYPE_DEF(StepEndEventState), module, "StepEndEventState", 0);
        }

        void t_StepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "class_", make_descriptor(StepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "wrapfn_", make_descriptor(t_StepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepEndEventState::initializeClass, 1)))
            return NULL;
          return t_StepEndEventState::wrap_Object(StepEndEventState(((t_StepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);
          StepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
          {
            INT_CALL(object = StepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(result);
        }

        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(value);
        }

        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *PythonStationDisplacement::class$ = NULL;
          jmethodID *PythonStationDisplacement::mids$ = NULL;
          bool PythonStationDisplacement::live$ = false;

          jclass PythonStationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/PythonStationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_displacement_dc5338a5a1255d1d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStationDisplacement::PythonStationDisplacement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonStationDisplacement::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonStationDisplacement::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonStationDisplacement::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace displacement {
          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self);
          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args);
          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data);
          static PyGetSetDef t_PythonStationDisplacement__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStationDisplacement, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStationDisplacement__methods_[] = {
            DECLARE_METHOD(t_PythonStationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStationDisplacement, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStationDisplacement)[] = {
            { Py_tp_methods, t_PythonStationDisplacement__methods_ },
            { Py_tp_init, (void *) t_PythonStationDisplacement_init_ },
            { Py_tp_getset, t_PythonStationDisplacement__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonStationDisplacement, t_PythonStationDisplacement, PythonStationDisplacement);

          void t_PythonStationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStationDisplacement), &PY_TYPE_DEF(PythonStationDisplacement), module, "PythonStationDisplacement", 1);
          }

          void t_PythonStationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "class_", make_descriptor(PythonStationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "wrapfn_", make_descriptor(t_PythonStationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStationDisplacement::initializeClass);
            JNINativeMethod methods[] = {
              { "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStationDisplacement_displacement0 },
              { "pythonDecRef", "()V", (void *) t_PythonStationDisplacement_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStationDisplacement::initializeClass, 1)))
              return NULL;
            return t_PythonStationDisplacement::wrap_Object(PythonStationDisplacement(((t_PythonStationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds)
          {
            PythonStationDisplacement object((jobject) NULL);

            INT_CALL(object = PythonStationDisplacement());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args)
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

          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
            PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
            PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
            PyObject *result = PyObject_CallMethod(obj, "displacement", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("displacement", result);
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

          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data)
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
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointValuePair::class$ = NULL;
      jmethodID *PointValuePair::mids$ = NULL;
      bool PointValuePair::live$ = false;

      jclass PointValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bc1ff02eb3693128] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_256c87e8e4263524] = env->getMethodID(cls, "<init>", "([DDZ)V");
          mids$[mid_getPoint_60c7040667a7dc5c] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_60c7040667a7dc5c] = env->getMethodID(cls, "getPointRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_bc1ff02eb3693128, a0.this$, a1)) {}

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_256c87e8e4263524, a0.this$, a1, a2)) {}

      JArray< jdouble > PointValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_60c7040667a7dc5c]));
      }

      JArray< jdouble > PointValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_60c7040667a7dc5c]));
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
      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args);
      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self);
      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self);
      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data);
      static PyGetSetDef t_PointValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointValuePair, point),
        DECLARE_GET_FIELD(t_PointValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointValuePair__methods_[] = {
        DECLARE_METHOD(t_PointValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointValuePair, getPointRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointValuePair)[] = {
        { Py_tp_methods, t_PointValuePair__methods_ },
        { Py_tp_init, (void *) t_PointValuePair_init_ },
        { Py_tp_getset, t_PointValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointValuePair, t_PointValuePair, PointValuePair);
      PyObject *t_PointValuePair::wrap_Object(const PointValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointValuePair), &PY_TYPE_DEF(PointValuePair), module, "PointValuePair", 0);
      }

      void t_PointValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "class_", make_descriptor(PointValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "wrapfn_", make_descriptor(t_PointValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointValuePair::initializeClass, 1)))
          return NULL;
        return t_PointValuePair::wrap_Object(PointValuePair(((t_PointValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = PointValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
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

      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateComponents::class$ = NULL;
      jmethodID *DateComponents::mids$ = NULL;
      bool DateComponents::live$ = false;
      DateComponents *DateComponents::BEIDOU_EPOCH = NULL;
      DateComponents *DateComponents::CCSDS_EPOCH = NULL;
      DateComponents *DateComponents::FIFTIES_EPOCH = NULL;
      DateComponents *DateComponents::GALILEO_EPOCH = NULL;
      DateComponents *DateComponents::GLONASS_EPOCH = NULL;
      DateComponents *DateComponents::GPS_EPOCH = NULL;
      DateComponents *DateComponents::IRNSS_EPOCH = NULL;
      DateComponents *DateComponents::J2000_EPOCH = NULL;
      DateComponents *DateComponents::JAVA_EPOCH = NULL;
      DateComponents *DateComponents::JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::MAX_EPOCH = NULL;
      DateComponents *DateComponents::MIN_EPOCH = NULL;
      DateComponents *DateComponents::MODIFIED_JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::QZSS_EPOCH = NULL;

      jclass DateComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_07bece3cd7a2ccd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_2981819d13ae2f57] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_compareTo_ae7b5ab7634ca960] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateComponents;)I");
          mids$[mid_createFromWeekComponents_e3e2a8ae3bc201ad] = env->getStaticMethodID(cls, "createFromWeekComponents", "(III)Lorg/orekit/time/DateComponents;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCalendarWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getCalendarWeek", "()I");
          mids$[mid_getDay_570ce0828f81a2c1] = env->getMethodID(cls, "getDay", "()I");
          mids$[mid_getDayOfWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getDayOfWeek", "()I");
          mids$[mid_getDayOfYear_570ce0828f81a2c1] = env->getMethodID(cls, "getDayOfYear", "()I");
          mids$[mid_getJ2000Day_570ce0828f81a2c1] = env->getMethodID(cls, "getJ2000Day", "()I");
          mids$[mid_getMJD_570ce0828f81a2c1] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getMonth_570ce0828f81a2c1] = env->getMethodID(cls, "getMonth", "()I");
          mids$[mid_getMonthEnum_c6b6e6a1b9b6ecef] = env->getMethodID(cls, "getMonthEnum", "()Lorg/orekit/time/Month;");
          mids$[mid_getYear_570ce0828f81a2c1] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseDate_668d97c23df2044a] = env->getStaticMethodID(cls, "parseDate", "(Ljava/lang/String;)Lorg/orekit/time/DateComponents;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU_EPOCH = new DateComponents(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/DateComponents;"));
          CCSDS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          FIFTIES_EPOCH = new DateComponents(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GALILEO_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GLONASS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GPS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          IRNSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          J2000_EPOCH = new DateComponents(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JAVA_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MAX_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MAX_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MIN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MIN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MODIFIED_JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          QZSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateComponents::DateComponents(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      DateComponents::DateComponents(const DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07bece3cd7a2ccd6, a0.this$, a1)) {}

      DateComponents::DateComponents(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      DateComponents::DateComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2981819d13ae2f57, a0, a1.this$, a2)) {}

      DateComponents::DateComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

      jint DateComponents::compareTo(const DateComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_ae7b5ab7634ca960], a0.this$);
      }

      DateComponents DateComponents::createFromWeekComponents(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_createFromWeekComponents_e3e2a8ae3bc201ad], a0, a1, a2));
      }

      jboolean DateComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint DateComponents::getCalendarWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getCalendarWeek_570ce0828f81a2c1]);
      }

      jint DateComponents::getDay() const
      {
        return env->callIntMethod(this$, mids$[mid_getDay_570ce0828f81a2c1]);
      }

      jint DateComponents::getDayOfWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfWeek_570ce0828f81a2c1]);
      }

      jint DateComponents::getDayOfYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfYear_570ce0828f81a2c1]);
      }

      jint DateComponents::getJ2000Day() const
      {
        return env->callIntMethod(this$, mids$[mid_getJ2000Day_570ce0828f81a2c1]);
      }

      jint DateComponents::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_570ce0828f81a2c1]);
      }

      jint DateComponents::getMonth() const
      {
        return env->callIntMethod(this$, mids$[mid_getMonth_570ce0828f81a2c1]);
      }

      ::org::orekit::time::Month DateComponents::getMonthEnum() const
      {
        return ::org::orekit::time::Month(env->callObjectMethod(this$, mids$[mid_getMonthEnum_c6b6e6a1b9b6ecef]));
      }

      jint DateComponents::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_570ce0828f81a2c1]);
      }

      jint DateComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      DateComponents DateComponents::parseDate(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDate_668d97c23df2044a], a0.this$));
      }

      ::java::lang::String DateComponents::toString() const
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
    namespace time {
      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg);
      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args);
      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDay(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self);
      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self);
      static PyObject *t_DateComponents_getMJD(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonth(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self);
      static PyObject *t_DateComponents_getYear(t_DateComponents *self);
      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data);
      static PyGetSetDef t_DateComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateComponents, calendarWeek),
        DECLARE_GET_FIELD(t_DateComponents, day),
        DECLARE_GET_FIELD(t_DateComponents, dayOfWeek),
        DECLARE_GET_FIELD(t_DateComponents, dayOfYear),
        DECLARE_GET_FIELD(t_DateComponents, j2000Day),
        DECLARE_GET_FIELD(t_DateComponents, mJD),
        DECLARE_GET_FIELD(t_DateComponents, month),
        DECLARE_GET_FIELD(t_DateComponents, monthEnum),
        DECLARE_GET_FIELD(t_DateComponents, year),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateComponents__methods_[] = {
        DECLARE_METHOD(t_DateComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateComponents, createFromWeekComponents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, getCalendarWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDay, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getJ2000Day, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonth, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonthEnum, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, parseDate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateComponents)[] = {
        { Py_tp_methods, t_DateComponents__methods_ },
        { Py_tp_init, (void *) t_DateComponents_init_ },
        { Py_tp_getset, t_DateComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateComponents, t_DateComponents, DateComponents);

      void t_DateComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateComponents), &PY_TYPE_DEF(DateComponents), module, "DateComponents", 0);
      }

      void t_DateComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "class_", make_descriptor(DateComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "wrapfn_", make_descriptor(t_DateComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "BEIDOU_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "CCSDS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "FIFTIES_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GALILEO_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GLONASS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GPS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "IRNSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "J2000_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JAVA_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MAX_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MAX_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MIN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MIN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "QZSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::QZSS_EPOCH)));
      }

      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateComponents::initializeClass, 1)))
          return NULL;
        return t_DateComponents::wrap_Object(DateComponents(((t_DateComponents *) arg)->object.this$));
      }
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DateComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            DateComponents a0((jobject) NULL);
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "kI", DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
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

      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg)
      {
        DateComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        DateComponents result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::createFromWeekComponents(a0, a1, a2));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromWeekComponents", args);
        return NULL;
      }

      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCalendarWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDay(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDay());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getJ2000Day());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMJD(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonth(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMonth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self)
      {
        ::org::orekit::time::Month result((jobject) NULL);
        OBJ_CALL(result = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(result);
      }

      static PyObject *t_DateComponents_getYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::parseDate(a0));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDate", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCalendarWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDay());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfYear());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getJ2000Day());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMonth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data)
      {
        ::org::orekit::time::Month value((jobject) NULL);
        OBJ_CALL(value = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(value);
      }

      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *FieldShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool FieldShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass FieldShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_16271fdedb6d63b9] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_clearHistory_0fa09c18fee449d5] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_1d12c7a27955163b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldShortPeriodicsInterpolatedCoefficient::FieldShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            void FieldShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_16271fdedb6d63b9], a0.this$, a1.this$);
            }

            void FieldShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_0fa09c18fee449d5]);
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_1d12c7a27955163b], a0.this$));
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
          namespace utilities {
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data);
            static PyGetSetDef t_FieldShortPeriodicsInterpolatedCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodicsInterpolatedCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_FieldShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldShortPeriodicsInterpolatedCoefficient_init_ },
              { Py_tp_getset, t_FieldShortPeriodicsInterpolatedCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodicsInterpolatedCoefficient, t_FieldShortPeriodicsInterpolatedCoefficient, FieldShortPeriodicsInterpolatedCoefficient);
            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(const FieldShortPeriodicsInterpolatedCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(FieldShortPeriodicsInterpolatedCoefficient), module, "FieldShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(FieldShortPeriodicsInterpolatedCoefficient(((t_FieldShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FieldShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FieldShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data)
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
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *FieldOrdinaryDifferentialEquation::mids$ = NULL;
      bool FieldOrdinaryDifferentialEquation::live$ = false;

      jclass FieldOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_895918d31d24de7c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_e0045fcf0efd35be] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldOrdinaryDifferentialEquation::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_895918d31d24de7c], a0.this$, a1.this$));
      }

      jint FieldOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void FieldOrdinaryDifferentialEquation::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_e0045fcf0efd35be], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self);
      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_FieldOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, dimension),
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_FieldOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrdinaryDifferentialEquation, t_FieldOrdinaryDifferentialEquation, FieldOrdinaryDifferentialEquation);
      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_Object(const FieldOrdinaryDifferentialEquation& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrdinaryDifferentialEquation), &PY_TYPE_DEF(FieldOrdinaryDifferentialEquation), module, "FieldOrdinaryDifferentialEquation", 0);
      }

      void t_FieldOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "class_", make_descriptor(FieldOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_FieldOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_FieldOrdinaryDifferentialEquation::wrap_Object(FieldOrdinaryDifferentialEquation(((t_FieldOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Patera2005::class$ = NULL;
              jmethodID *Patera2005::mids$ = NULL;
              bool Patera2005::live$ = false;

              jclass Patera2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_4ee143e57030d3b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_194bff03a32ceae7] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_acd6f33dacb379ff] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Patera2005::Patera2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              Patera2005::Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_4ee143e57030d3b8, a0.this$, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Patera2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_194bff03a32ceae7], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Patera2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_acd6f33dacb379ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Patera2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
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
              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data);
              static PyGetSetDef t_Patera2005__fields_[] = {
                DECLARE_GET_FIELD(t_Patera2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Patera2005__methods_[] = {
                DECLARE_METHOD(t_Patera2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Patera2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Patera2005)[] = {
                { Py_tp_methods, t_Patera2005__methods_ },
                { Py_tp_init, (void *) t_Patera2005_init_ },
                { Py_tp_getset, t_Patera2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Patera2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Patera2005, t_Patera2005, Patera2005);

              void t_Patera2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Patera2005), &PY_TYPE_DEF(Patera2005), module, "Patera2005", 0);
              }

              void t_Patera2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "class_", make_descriptor(Patera2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "wrapfn_", make_descriptor(t_Patera2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Patera2005::initializeClass, 1)))
                  return NULL;
                return t_Patera2005::wrap_Object(Patera2005(((t_Patera2005 *) arg)->object.this$));
              }
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Patera2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Patera2005 object((jobject) NULL);

                    INT_CALL(object = Patera2005());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
                    jint a1;
                    Patera2005 object((jobject) NULL);

                    if (!parseArgs(args, "kI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1))
                    {
                      INT_CALL(object = Patera2005(a0, a1));
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

              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 7:
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data)
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
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventHandler::class$ = NULL;
        jmethodID *ODEEventHandler::mids$ = NULL;
        bool ODEEventHandler::live$ = false;

        jclass ODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_8eae28001ad776dd] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/events/ODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_8c7db74dc121e7b9] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;DLorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_resetState_0cb5f574380f6dc4] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action ODEEventHandler::eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::ODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_8eae28001ad776dd], a0.this$, a1.this$, a2));
        }

        void ODEEventHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1, const ::org::hipparchus::ode::events::ODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8c7db74dc121e7b9], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::ode::ODEState ODEEventHandler::resetState(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_0cb5f574380f6dc4], a0.this$, a1.this$));
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
        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args);

        static PyMethodDef t_ODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_ODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventHandler)[] = {
          { Py_tp_methods, t_ODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventHandler, t_ODEEventHandler, ODEEventHandler);

        void t_ODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventHandler), &PY_TYPE_DEF(ODEEventHandler), module, "ODEEventHandler", 0);
        }

        void t_ODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "class_", make_descriptor(ODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "wrapfn_", make_descriptor(t_ODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_ODEEventHandler::wrap_Object(ODEEventHandler(((t_ODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::ODEEventDetector a1((jobject) NULL);
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::ode::events::ODEEventDetector a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *InterSensorsOptimizationProblemBuilder::class$ = NULL;
        jmethodID *InterSensorsOptimizationProblemBuilder::mids$ = NULL;
        bool InterSensorsOptimizationProblemBuilder::live$ = false;

        jclass InterSensorsOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aaed6336397e154e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Ljava/util/Collection;)V");
            mids$[mid_build_fb782eefc76cd888] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_0fa09c18fee449d5] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_0fa09c18fee449d5] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_9751b2e3b68b45ea] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSensorsOptimizationProblemBuilder::InterSensorsOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::java::util::Collection & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_aaed6336397e154e, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem InterSensorsOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fb782eefc76cd888], a0, a1));
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
        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_InterSensorsOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSensorsOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_InterSensorsOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_InterSensorsOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSensorsOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(InterSensorsOptimizationProblemBuilder, t_InterSensorsOptimizationProblemBuilder, InterSensorsOptimizationProblemBuilder);

        void t_InterSensorsOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSensorsOptimizationProblemBuilder), &PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder), module, "InterSensorsOptimizationProblemBuilder", 0);
        }

        void t_InterSensorsOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "class_", make_descriptor(InterSensorsOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_InterSensorsOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_InterSensorsOptimizationProblemBuilder::wrap_Object(InterSensorsOptimizationProblemBuilder(((t_InterSensorsOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::java::util::Collection a2((jobject) NULL);
          PyTypeObject **p2;
          InterSensorsOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "KkK", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = InterSensorsOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterSensorsOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *PythonAdmParser::class$ = NULL;
            jmethodID *PythonAdmParser::mids$ = NULL;
            bool PythonAdmParser::live$ = false;

            jclass PythonAdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/PythonAdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_3204eef28de879bb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_58c0f76fc10a27f5] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAdmParser::pythonExtension(jlong a0) const
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
        namespace ndm {
          namespace adm {
            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args);
            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self);
            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args);
            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data);
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data);
            static PyGetSetDef t_PythonAdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAdmParser, self),
              DECLARE_GET_FIELD(t_PythonAdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonAdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAdmParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAdmParser)[] = {
              { Py_tp_methods, t_PythonAdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
              NULL
            };

            DEFINE_TYPE(PythonAdmParser, t_PythonAdmParser, PythonAdmParser);
            PyObject *t_PythonAdmParser::wrap_Object(const PythonAdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAdmParser), &PY_TYPE_DEF(PythonAdmParser), module, "PythonAdmParser", 1);
            }

            void t_PythonAdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "class_", make_descriptor(PythonAdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "wrapfn_", make_descriptor(t_PythonAdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;", (void *) t_PythonAdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonAdmParser::wrap_Object(PythonAdmParser(((t_PythonAdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data)
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
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data)
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
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator::mids$ = NULL;
      bool AbstractFieldTimeInterpolator::live$ = false;
      jdouble AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_7825dbda7c77ee33] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/FieldTimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_557eb4540302b61a] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_0b262a74531436b2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_e846d67ab348970f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_c6a8415fd6d0ffe5] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/FieldTimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_70f315842c002eb8] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldTimeInterpolator::AbstractFieldTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      void AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_7825dbda7c77ee33], a0.this$, a1);
      }

      jdouble AbstractFieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_dff5885c2c873297]);
      }

      jint AbstractFieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::List AbstractFieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_557eb4540302b61a], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_0b262a74531436b2], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator, t_AbstractFieldTimeInterpolator, AbstractFieldTimeInterpolator);
      PyObject *t_AbstractFieldTimeInterpolator::wrap_Object(const AbstractFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator), &PY_TYPE_DEF(AbstractFieldTimeInterpolator), module, "AbstractFieldTimeInterpolator", 0);
      }

      void t_AbstractFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "class_", make_descriptor(AbstractFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractFieldTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator::wrap_Object(AbstractFieldTimeInterpolator(((t_AbstractFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractFieldTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractFieldTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldTimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019Data::class$ = NULL;
              jmethodID *Rtcm1019Data::mids$ = NULL;
              bool Rtcm1019Data::live$ = false;

              jclass Rtcm1019Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGpsCodeOnL2_570ce0828f81a2c1] = env->getMethodID(cls, "getGpsCodeOnL2", "()I");
                  mids$[mid_getGpsFitInterval_570ce0828f81a2c1] = env->getMethodID(cls, "getGpsFitInterval", "()I");
                  mids$[mid_getGpsL2PDataFlag_b108b35ef48e27bd] = env->getMethodID(cls, "getGpsL2PDataFlag", "()Z");
                  mids$[mid_getGpsNavigationMessage_1dc0f2491ce745f8] = env->getMethodID(cls, "getGpsNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsNavigationMessage_4910099d75fee3ff] = env->getMethodID(cls, "getGpsNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsToc_dff5885c2c873297] = env->getMethodID(cls, "getGpsToc", "()D");
                  mids$[mid_setGpsCodeOnL2_99803b0791f320ff] = env->getMethodID(cls, "setGpsCodeOnL2", "(I)V");
                  mids$[mid_setGpsFitInterval_99803b0791f320ff] = env->getMethodID(cls, "setGpsFitInterval", "(I)V");
                  mids$[mid_setGpsL2PDataFlag_bd04c9335fb9e4cf] = env->getMethodID(cls, "setGpsL2PDataFlag", "(Z)V");
                  mids$[mid_setGpsNavigationMessage_16aa3ee67a4aead2] = env->getMethodID(cls, "setGpsNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
                  mids$[mid_setGpsToc_17db3a65980d3441] = env->getMethodID(cls, "setGpsToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019Data::Rtcm1019Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint Rtcm1019Data::getGpsCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsCodeOnL2_570ce0828f81a2c1]);
              }

              jint Rtcm1019Data::getGpsFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsFitInterval_570ce0828f81a2c1]);
              }

              jboolean Rtcm1019Data::getGpsL2PDataFlag() const
              {
                return env->callBooleanMethod(this$, mids$[mid_getGpsL2PDataFlag_b108b35ef48e27bd]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_1dc0f2491ce745f8]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_4910099d75fee3ff], a0.this$));
              }

              jdouble Rtcm1019Data::getGpsToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGpsToc_dff5885c2c873297]);
              }

              void Rtcm1019Data::setGpsCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsCodeOnL2_99803b0791f320ff], a0);
              }

              void Rtcm1019Data::setGpsFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsFitInterval_99803b0791f320ff], a0);
              }

              void Rtcm1019Data::setGpsL2PDataFlag(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsL2PDataFlag_bd04c9335fb9e4cf], a0);
              }

              void Rtcm1019Data::setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsNavigationMessage_16aa3ee67a4aead2], a0.this$);
              }

              void Rtcm1019Data::setGpsToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsToc_17db3a65980d3441], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args);
              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1019Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsL2PDataFlag),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsL2PDataFlag, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsL2PDataFlag, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019Data)[] = {
                { Py_tp_methods, t_Rtcm1019Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019Data_init_ },
                { Py_tp_getset, t_Rtcm1019Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1019Data, t_Rtcm1019Data, Rtcm1019Data);

              void t_Rtcm1019Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019Data), &PY_TYPE_DEF(Rtcm1019Data), module, "Rtcm1019Data", 0);
              }

              void t_Rtcm1019Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "class_", make_descriptor(Rtcm1019Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "wrapfn_", make_descriptor(t_Rtcm1019Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019Data::wrap_Object(Rtcm1019Data(((t_Rtcm1019Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1019Data object((jobject) NULL);

                INT_CALL(object = Rtcm1019Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGpsNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGpsNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGpsNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGpsToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setGpsL2PDataFlag(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsL2PDataFlag", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGpsNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGpsToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(value);
              }
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setGpsL2PDataFlag(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsL2PDataFlag", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGpsNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGpsNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGpsToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGpsToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsToc", arg);
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
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DecompositionSolver::class$ = NULL;
      jmethodID *DecompositionSolver::mids$ = NULL;
      bool DecompositionSolver::live$ = false;

      jclass DecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_688b496048ff947b] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_b108b35ef48e27bd] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_613347e28dd909cd] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_e9b72403ad502221] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_688b496048ff947b]));
      }

      jint DecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      jboolean DecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::RealVector DecompositionSolver::solve(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::solve(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_solve_e9b72403ad502221], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args);
      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data);
      static PyGetSetDef t_DecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_DecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_DecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_DecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_DecompositionSolver, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_DecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DecompositionSolver)[] = {
        { Py_tp_methods, t_DecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DecompositionSolver, t_DecompositionSolver, DecompositionSolver);

      void t_DecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(DecompositionSolver), &PY_TYPE_DEF(DecompositionSolver), module, "DecompositionSolver", 0);
      }

      void t_DecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "class_", make_descriptor(DecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "wrapfn_", make_descriptor(t_DecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_DecompositionSolver::wrap_Object(DecompositionSolver(((t_DecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonManeuverTriggersResetter::mids$ = NULL;
          bool PythonManeuverTriggersResetter::live$ = false;

          jclass PythonManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_33f4696e4edaa03c] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_f43130c50e9fafeb] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggersResetter::PythonManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          void PythonManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_33f4696e4edaa03c], a0.this$, a1);
          }

          jlong PythonManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonManeuverTriggersResetter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self);
          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggersResetter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggersResetter, t_PythonManeuverTriggersResetter, PythonManeuverTriggersResetter);

          void t_PythonManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggersResetter), &PY_TYPE_DEF(PythonManeuverTriggersResetter), module, "PythonManeuverTriggersResetter", 1);
          }

          void t_PythonManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "class_", make_descriptor(PythonManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggersResetter_pythonDecRef0 },
              { "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonManeuverTriggersResetter_resetState1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggersResetter::wrap_Object(PythonManeuverTriggersResetter(((t_PythonManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data)
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
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileParser::class$ = NULL;
        jmethodID *PythonEphemerisFileParser::mids$ = NULL;
        bool PythonEphemerisFileParser::live$ = false;

        jclass PythonEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_71b778173c5a6704] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileParser::PythonEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEphemerisFileParser::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self);
        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileParser, t_PythonEphemerisFileParser, PythonEphemerisFileParser);

        void t_PythonEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileParser), &PY_TYPE_DEF(PythonEphemerisFileParser), module, "PythonEphemerisFileParser", 1);
        }

        void t_PythonEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "class_", make_descriptor(PythonEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;", (void *) t_PythonEphemerisFileParser_parse0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileParser_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileParser::wrap_Object(PythonEphemerisFileParser(((t_PythonEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::EphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::EphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
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

        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovariance::class$ = NULL;
            jmethodID *RTNCovariance::mids$ = NULL;
            bool RTNCovariance::live$ = false;

            jclass RTNCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCdrgdrg_dff5885c2c873297] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgn_dff5885c2c873297] = env->getMethodID(cls, "getCdrgn", "()D");
                mids$[mid_getCdrgndot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgndot", "()D");
                mids$[mid_getCdrgr_dff5885c2c873297] = env->getMethodID(cls, "getCdrgr", "()D");
                mids$[mid_getCdrgrdot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgrdot", "()D");
                mids$[mid_getCdrgt_dff5885c2c873297] = env->getMethodID(cls, "getCdrgt", "()D");
                mids$[mid_getCdrgtdot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgtdot", "()D");
                mids$[mid_getCndotn_dff5885c2c873297] = env->getMethodID(cls, "getCndotn", "()D");
                mids$[mid_getCndotndot_dff5885c2c873297] = env->getMethodID(cls, "getCndotndot", "()D");
                mids$[mid_getCndotr_dff5885c2c873297] = env->getMethodID(cls, "getCndotr", "()D");
                mids$[mid_getCndotrdot_dff5885c2c873297] = env->getMethodID(cls, "getCndotrdot", "()D");
                mids$[mid_getCndott_dff5885c2c873297] = env->getMethodID(cls, "getCndott", "()D");
                mids$[mid_getCndottdot_dff5885c2c873297] = env->getMethodID(cls, "getCndottdot", "()D");
                mids$[mid_getCnn_dff5885c2c873297] = env->getMethodID(cls, "getCnn", "()D");
                mids$[mid_getCnr_dff5885c2c873297] = env->getMethodID(cls, "getCnr", "()D");
                mids$[mid_getCnt_dff5885c2c873297] = env->getMethodID(cls, "getCnt", "()D");
                mids$[mid_getCrdotn_dff5885c2c873297] = env->getMethodID(cls, "getCrdotn", "()D");
                mids$[mid_getCrdotr_dff5885c2c873297] = env->getMethodID(cls, "getCrdotr", "()D");
                mids$[mid_getCrdotrdot_dff5885c2c873297] = env->getMethodID(cls, "getCrdotrdot", "()D");
                mids$[mid_getCrdott_dff5885c2c873297] = env->getMethodID(cls, "getCrdott", "()D");
                mids$[mid_getCrr_dff5885c2c873297] = env->getMethodID(cls, "getCrr", "()D");
                mids$[mid_getCsrpdrg_dff5885c2c873297] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpn_dff5885c2c873297] = env->getMethodID(cls, "getCsrpn", "()D");
                mids$[mid_getCsrpndot_dff5885c2c873297] = env->getMethodID(cls, "getCsrpndot", "()D");
                mids$[mid_getCsrpr_dff5885c2c873297] = env->getMethodID(cls, "getCsrpr", "()D");
                mids$[mid_getCsrprdot_dff5885c2c873297] = env->getMethodID(cls, "getCsrprdot", "()D");
                mids$[mid_getCsrpsrp_dff5885c2c873297] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpt_dff5885c2c873297] = env->getMethodID(cls, "getCsrpt", "()D");
                mids$[mid_getCsrptdot_dff5885c2c873297] = env->getMethodID(cls, "getCsrptdot", "()D");
                mids$[mid_getCtdotn_dff5885c2c873297] = env->getMethodID(cls, "getCtdotn", "()D");
                mids$[mid_getCtdotr_dff5885c2c873297] = env->getMethodID(cls, "getCtdotr", "()D");
                mids$[mid_getCtdotrdot_dff5885c2c873297] = env->getMethodID(cls, "getCtdotrdot", "()D");
                mids$[mid_getCtdott_dff5885c2c873297] = env->getMethodID(cls, "getCtdott", "()D");
                mids$[mid_getCtdottdot_dff5885c2c873297] = env->getMethodID(cls, "getCtdottdot", "()D");
                mids$[mid_getCthrdrg_dff5885c2c873297] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrn_dff5885c2c873297] = env->getMethodID(cls, "getCthrn", "()D");
                mids$[mid_getCthrndot_dff5885c2c873297] = env->getMethodID(cls, "getCthrndot", "()D");
                mids$[mid_getCthrr_dff5885c2c873297] = env->getMethodID(cls, "getCthrr", "()D");
                mids$[mid_getCthrrdot_dff5885c2c873297] = env->getMethodID(cls, "getCthrrdot", "()D");
                mids$[mid_getCthrsrp_dff5885c2c873297] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrt_dff5885c2c873297] = env->getMethodID(cls, "getCthrt", "()D");
                mids$[mid_getCthrtdot_dff5885c2c873297] = env->getMethodID(cls, "getCthrtdot", "()D");
                mids$[mid_getCthrthr_dff5885c2c873297] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCtr_dff5885c2c873297] = env->getMethodID(cls, "getCtr", "()D");
                mids$[mid_getCtt_dff5885c2c873297] = env->getMethodID(cls, "getCtt", "()D");
                mids$[mid_getRTNCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getRTNCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_setCdrgdrg_17db3a65980d3441] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgn_17db3a65980d3441] = env->getMethodID(cls, "setCdrgn", "(D)V");
                mids$[mid_setCdrgndot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgndot", "(D)V");
                mids$[mid_setCdrgr_17db3a65980d3441] = env->getMethodID(cls, "setCdrgr", "(D)V");
                mids$[mid_setCdrgrdot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgrdot", "(D)V");
                mids$[mid_setCdrgt_17db3a65980d3441] = env->getMethodID(cls, "setCdrgt", "(D)V");
                mids$[mid_setCdrgtdot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgtdot", "(D)V");
                mids$[mid_setCndotn_17db3a65980d3441] = env->getMethodID(cls, "setCndotn", "(D)V");
                mids$[mid_setCndotndot_17db3a65980d3441] = env->getMethodID(cls, "setCndotndot", "(D)V");
                mids$[mid_setCndotr_17db3a65980d3441] = env->getMethodID(cls, "setCndotr", "(D)V");
                mids$[mid_setCndotrdot_17db3a65980d3441] = env->getMethodID(cls, "setCndotrdot", "(D)V");
                mids$[mid_setCndott_17db3a65980d3441] = env->getMethodID(cls, "setCndott", "(D)V");
                mids$[mid_setCndottdot_17db3a65980d3441] = env->getMethodID(cls, "setCndottdot", "(D)V");
                mids$[mid_setCnn_17db3a65980d3441] = env->getMethodID(cls, "setCnn", "(D)V");
                mids$[mid_setCnr_17db3a65980d3441] = env->getMethodID(cls, "setCnr", "(D)V");
                mids$[mid_setCnt_17db3a65980d3441] = env->getMethodID(cls, "setCnt", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCrdotn_17db3a65980d3441] = env->getMethodID(cls, "setCrdotn", "(D)V");
                mids$[mid_setCrdotr_17db3a65980d3441] = env->getMethodID(cls, "setCrdotr", "(D)V");
                mids$[mid_setCrdotrdot_17db3a65980d3441] = env->getMethodID(cls, "setCrdotrdot", "(D)V");
                mids$[mid_setCrdott_17db3a65980d3441] = env->getMethodID(cls, "setCrdott", "(D)V");
                mids$[mid_setCrr_17db3a65980d3441] = env->getMethodID(cls, "setCrr", "(D)V");
                mids$[mid_setCsrpdrg_17db3a65980d3441] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpn_17db3a65980d3441] = env->getMethodID(cls, "setCsrpn", "(D)V");
                mids$[mid_setCsrpndot_17db3a65980d3441] = env->getMethodID(cls, "setCsrpndot", "(D)V");
                mids$[mid_setCsrpr_17db3a65980d3441] = env->getMethodID(cls, "setCsrpr", "(D)V");
                mids$[mid_setCsrprdot_17db3a65980d3441] = env->getMethodID(cls, "setCsrprdot", "(D)V");
                mids$[mid_setCsrpsrp_17db3a65980d3441] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpt_17db3a65980d3441] = env->getMethodID(cls, "setCsrpt", "(D)V");
                mids$[mid_setCsrptdot_17db3a65980d3441] = env->getMethodID(cls, "setCsrptdot", "(D)V");
                mids$[mid_setCtdotn_17db3a65980d3441] = env->getMethodID(cls, "setCtdotn", "(D)V");
                mids$[mid_setCtdotr_17db3a65980d3441] = env->getMethodID(cls, "setCtdotr", "(D)V");
                mids$[mid_setCtdotrdot_17db3a65980d3441] = env->getMethodID(cls, "setCtdotrdot", "(D)V");
                mids$[mid_setCtdott_17db3a65980d3441] = env->getMethodID(cls, "setCtdott", "(D)V");
                mids$[mid_setCtdottdot_17db3a65980d3441] = env->getMethodID(cls, "setCtdottdot", "(D)V");
                mids$[mid_setCthrdrg_17db3a65980d3441] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrn_17db3a65980d3441] = env->getMethodID(cls, "setCthrn", "(D)V");
                mids$[mid_setCthrndot_17db3a65980d3441] = env->getMethodID(cls, "setCthrndot", "(D)V");
                mids$[mid_setCthrr_17db3a65980d3441] = env->getMethodID(cls, "setCthrr", "(D)V");
                mids$[mid_setCthrrdot_17db3a65980d3441] = env->getMethodID(cls, "setCthrrdot", "(D)V");
                mids$[mid_setCthrsrp_17db3a65980d3441] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrt_17db3a65980d3441] = env->getMethodID(cls, "setCthrt", "(D)V");
                mids$[mid_setCthrtdot_17db3a65980d3441] = env->getMethodID(cls, "setCthrtdot", "(D)V");
                mids$[mid_setCthrthr_17db3a65980d3441] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCtr_17db3a65980d3441] = env->getMethodID(cls, "setCtr", "(D)V");
                mids$[mid_setCtt_17db3a65980d3441] = env->getMethodID(cls, "setCtt", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RTNCovariance::RTNCovariance() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble RTNCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgndot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgrdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgt_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCdrgtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgtdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndotndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotndot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotrdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndott_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCndottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndottdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCnn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCnr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCnt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnt_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCrdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCrdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCrdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotrdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCrdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdott_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpndot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrprdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrprdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrpt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpt_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCsrptdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrptdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotrdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdott_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtdottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdottdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrn_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrndot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrrdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrt_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrtdot_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr_dff5885c2c873297]);
            }

            jdouble RTNCovariance::getCtt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtt_dff5885c2c873297]);
            }

            ::org::hipparchus::linear::RealMatrix RTNCovariance::getRTNCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceMatrix_688b496048ff947b]));
            }

            void RTNCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgndot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgrdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgt_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCdrgtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgtdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndotndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotndot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotrdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndott_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCndottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndottdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCnn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCnr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCnt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnt_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_1506189166690b5e], a0, a1, a2);
            }

            void RTNCovariance::setCrdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCrdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCrdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotrdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCrdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdott_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpndot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrprdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrprdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrpt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpt_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCsrptdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrptdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotrdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdott_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtdottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdottdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrn_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrndot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrrdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrt_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrtdot_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtr_17db3a65980d3441], a0);
            }

            void RTNCovariance::setCtt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtt_17db3a65980d3441], a0);
            }

            void RTNCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data);
            static PyGetSetDef t_RTNCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrprdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrptdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctt),
              DECLARE_GET_FIELD(t_RTNCovariance, rTNCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovariance__methods_[] = {
              DECLARE_METHOD(t_RTNCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrprdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrptdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getRTNCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovariance, setCrdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrprdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrptdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovariance)[] = {
              { Py_tp_methods, t_RTNCovariance__methods_ },
              { Py_tp_init, (void *) t_RTNCovariance_init_ },
              { Py_tp_getset, t_RTNCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(RTNCovariance, t_RTNCovariance, RTNCovariance);

            void t_RTNCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovariance), &PY_TYPE_DEF(RTNCovariance), module, "RTNCovariance", 0);
            }

            void t_RTNCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "class_", make_descriptor(RTNCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "wrapfn_", make_descriptor(t_RTNCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovariance::initializeClass, 1)))
                return NULL;
              return t_RTNCovariance::wrap_Object(RTNCovariance(((t_RTNCovariance *) arg)->object.this$));
            }
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds)
            {
              RTNCovariance object((jobject) NULL);

              INT_CALL(object = RTNCovariance());
              self->object = object;

              return 0;
            }

            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrprdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrprdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrptdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrptdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(RTNCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrprdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrprdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrptdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrptdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseSecantSolver::class$ = NULL;
        jmethodID *BaseSecantSolver::mids$ = NULL;
        bool BaseSecantSolver::live$ = false;

        jclass BaseSecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseSecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_ba3e208e0ba870dd] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_136fe8df860928b8] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_solve_89bba4a49543a54f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_fff76e1052c58572] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_6f179d7662d75715] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_ba3e208e0ba870dd], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_136fe8df860928b8], a0, a1.this$, a2, a3, a4);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_89bba4a49543a54f], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BaseSecantSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_fff76e1052c58572], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data);
        static PyGetSetDef t_BaseSecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseSecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseSecantSolver__methods_[] = {
          DECLARE_METHOD(t_BaseSecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseSecantSolver)[] = {
          { Py_tp_methods, t_BaseSecantSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseSecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseSecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BaseSecantSolver, t_BaseSecantSolver, BaseSecantSolver);
        PyObject *t_BaseSecantSolver::wrap_Object(const BaseSecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseSecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseSecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseSecantSolver), &PY_TYPE_DEF(BaseSecantSolver), module, "BaseSecantSolver", 0);
        }

        void t_BaseSecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "class_", make_descriptor(BaseSecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "wrapfn_", make_descriptor(t_BaseSecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseSecantSolver::initializeClass, 1)))
            return NULL;
          return t_BaseSecantSolver::wrap_Object(BaseSecantSolver(((t_BaseSecantSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseSecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
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
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BaseSecantSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSPhaseModifier::RelativisticClockOneWayGNSSPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSPhaseModifier, t_RelativisticClockOneWayGNSSPhaseModifier, RelativisticClockOneWayGNSSPhaseModifier);

          void t_RelativisticClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSPhaseModifier), module, "RelativisticClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticClockOneWayGNSSPhaseModifier(((t_RelativisticClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator::class$ = NULL;
        jmethodID *AdapterPropagator::mids$ = NULL;
        bool AdapterPropagator::live$ = false;

        jclass AdapterPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a4d05ab8d79173b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_addEffect_61deea2f3d73b301] = env->getMethodID(cls, "addEffect", "(Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;)V");
            mids$[mid_getEffects_2afa36052df4765d] = env->getMethodID(cls, "getEffects", "()Ljava/util/List;");
            mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPropagator_8afbda2d6a487743] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_basicPropagate_fbff2ff5554d95e1] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterPropagator::AdapterPropagator(const ::org::orekit::propagation::Propagator & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a4d05ab8d79173b5, a0.this$)) {}

        void AdapterPropagator::addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEffect_61deea2f3d73b301], a0.this$);
        }

        ::java::util::List AdapterPropagator::getEffects() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEffects_2afa36052df4765d]));
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
        }

        ::org::orekit::propagation::Propagator AdapterPropagator::getPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_8afbda2d6a487743]));
        }

        void AdapterPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
      namespace analytical {
        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg);
        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data);
        static PyGetSetDef t_AdapterPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterPropagator, effects),
          DECLARE_GET_FIELD(t_AdapterPropagator, initialState),
          DECLARE_GET_FIELD(t_AdapterPropagator, propagator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterPropagator__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, addEffect, METH_O),
          DECLARE_METHOD(t_AdapterPropagator, getEffects, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AdapterPropagator, getPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator)[] = {
          { Py_tp_methods, t_AdapterPropagator__methods_ },
          { Py_tp_init, (void *) t_AdapterPropagator_init_ },
          { Py_tp_getset, t_AdapterPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator, t_AdapterPropagator, AdapterPropagator);

        void t_AdapterPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator), &PY_TYPE_DEF(AdapterPropagator), module, "AdapterPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "DifferentialEffect", make_descriptor(&PY_TYPE_DEF(AdapterPropagator$DifferentialEffect)));
        }

        void t_AdapterPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "class_", make_descriptor(AdapterPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "wrapfn_", make_descriptor(t_AdapterPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator::wrap_Object(AdapterPropagator(((t_AdapterPropagator *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::Propagator a0((jobject) NULL);
          AdapterPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            INT_CALL(object = AdapterPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEffect(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEffect", arg);
          return NULL;
        }

        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::PY_TYPE(AdapterPropagator$DifferentialEffect));
        }

        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *InterpolationMethod::class$ = NULL;
              jmethodID *InterpolationMethod::mids$ = NULL;
              bool InterpolationMethod::live$ = false;
              InterpolationMethod *InterpolationMethod::HERMITE = NULL;
              InterpolationMethod *InterpolationMethod::LAGRANGE = NULL;
              InterpolationMethod *InterpolationMethod::LINEAR = NULL;
              InterpolationMethod *InterpolationMethod::PROPAGATE = NULL;

              jclass InterpolationMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_9f3ce3293cdfa652] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_values_2c2536ef79b00355] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  HERMITE = new InterpolationMethod(env->getStaticObjectField(cls, "HERMITE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LAGRANGE = new InterpolationMethod(env->getStaticObjectField(cls, "LAGRANGE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LINEAR = new InterpolationMethod(env->getStaticObjectField(cls, "LINEAR", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  PROPAGATE = new InterpolationMethod(env->getStaticObjectField(cls, "PROPAGATE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              InterpolationMethod InterpolationMethod::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InterpolationMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f3ce3293cdfa652], a0.this$));
              }

              JArray< InterpolationMethod > InterpolationMethod::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InterpolationMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_2c2536ef79b00355]));
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
              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args);
              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InterpolationMethod_values(PyTypeObject *type);
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data);
              static PyGetSetDef t_InterpolationMethod__fields_[] = {
                DECLARE_GET_FIELD(t_InterpolationMethod, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InterpolationMethod__methods_[] = {
                DECLARE_METHOD(t_InterpolationMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, of_, METH_VARARGS),
                DECLARE_METHOD(t_InterpolationMethod, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InterpolationMethod)[] = {
                { Py_tp_methods, t_InterpolationMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InterpolationMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InterpolationMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InterpolationMethod, t_InterpolationMethod, InterpolationMethod);
              PyObject *t_InterpolationMethod::wrap_Object(const InterpolationMethod& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InterpolationMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InterpolationMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(InterpolationMethod), &PY_TYPE_DEF(InterpolationMethod), module, "InterpolationMethod", 0);
              }

              void t_InterpolationMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "class_", make_descriptor(InterpolationMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "wrapfn_", make_descriptor(t_InterpolationMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(InterpolationMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "HERMITE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::HERMITE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LAGRANGE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LAGRANGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LINEAR", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LINEAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "PROPAGATE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::PROPAGATE)));
              }

              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InterpolationMethod::initializeClass, 1)))
                  return NULL;
                return t_InterpolationMethod::wrap_Object(InterpolationMethod(((t_InterpolationMethod *) arg)->object.this$));
              }
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InterpolationMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InterpolationMethod result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::valueOf(a0));
                  return t_InterpolationMethod::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InterpolationMethod_values(PyTypeObject *type)
              {
                JArray< InterpolationMethod > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::values());
                return JArray<jobject>(result.this$).wrap(t_InterpolationMethod::wrap_jobject);
              }
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data)
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
#include "org/orekit/python/PythonFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFunction::class$ = NULL;
      jmethodID *PythonFunction::mids$ = NULL;
      bool PythonFunction::live$ = false;

      jclass PythonFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_apply_9facd1449e0950d3] = env->getMethodID(cls, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFunction::PythonFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args);
      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self);
      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args);
      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data);
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data);
      static PyGetSetDef t_PythonFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFunction, self),
        DECLARE_GET_FIELD(t_PythonFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFunction)[] = {
        { Py_tp_methods, t_PythonFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFunction_init_ },
        { Py_tp_getset, t_PythonFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFunction, t_PythonFunction, PythonFunction);
      PyObject *t_PythonFunction::wrap_Object(const PythonFunction& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFunction::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFunction), &PY_TYPE_DEF(PythonFunction), module, "PythonFunction", 1);
      }

      void t_PythonFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "class_", make_descriptor(PythonFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "wrapfn_", make_descriptor(t_PythonFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "apply", "(Ljava/lang/Object;)Ljava/lang/Object;", (void *) t_PythonFunction_apply0 },
          { "pythonDecRef", "()V", (void *) t_PythonFunction_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFunction::wrap_Object(PythonFunction(((t_PythonFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFunction object((jobject) NULL);

        INT_CALL(object = PythonFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args)
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

      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "apply", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("apply", result);
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

      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data)
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
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TTScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TTScale::class$ = NULL;
      jmethodID *TTScale::mids$ = NULL;
      bool TTScale::live$ = false;

      jclass TTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble TTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble TTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String TTScale::toString() const
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
    namespace time {
      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_getName(t_TTScale *self);
      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data);
      static PyGetSetDef t_TTScale__fields_[] = {
        DECLARE_GET_FIELD(t_TTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TTScale__methods_[] = {
        DECLARE_METHOD(t_TTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TTScale)[] = {
        { Py_tp_methods, t_TTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TTScale, t_TTScale, TTScale);

      void t_TTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TTScale), &PY_TYPE_DEF(TTScale), module, "TTScale", 0);
      }

      void t_TTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "class_", make_descriptor(TTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "wrapfn_", make_descriptor(t_TTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TTScale::initializeClass, 1)))
          return NULL;
        return t_TTScale::wrap_Object(TTScale(((t_TTScale *) arg)->object.this$));
      }
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TTScale_getName(t_TTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadataKey::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadataKey::mids$ = NULL;
            bool AdditionalCovarianceMetadataKey::live$ = false;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::COMMENT = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE = NULL;

            jclass AdditionalCovarianceMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_7b1045fc7401b1a9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)Z");
                mids$[mid_valueOf_baf4b765ae43c544] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");
                mids$[mid_values_a077849e82e8a19a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MAX = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MIN = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_POSITION = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_VELOCITY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_VELOCITY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DENSITY_FORECAST_UNCERTAINTY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DENSITY_FORECAST_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                SCREENING_DATA_SOURCE = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "SCREENING_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalCovarianceMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_7b1045fc7401b1a9], a0.this$, a1.this$, a2.this$);
            }

            AdditionalCovarianceMetadataKey AdditionalCovarianceMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalCovarianceMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_baf4b765ae43c544], a0.this$));
            }

            JArray< AdditionalCovarianceMetadataKey > AdditionalCovarianceMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalCovarianceMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a077849e82e8a19a]));
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
            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalCovarianceMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadataKey)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalCovarianceMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadataKey, t_AdditionalCovarianceMetadataKey, AdditionalCovarianceMetadataKey);
            PyObject *t_AdditionalCovarianceMetadataKey::wrap_Object(const AdditionalCovarianceMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalCovarianceMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalCovarianceMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadataKey), &PY_TYPE_DEF(AdditionalCovarianceMetadataKey), module, "AdditionalCovarianceMetadataKey", 0);
            }

            void t_AdditionalCovarianceMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "class_", make_descriptor(AdditionalCovarianceMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalCovarianceMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "COMMENT", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MAX", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MIN", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_POSITION", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_VELOCITY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DENSITY_FORECAST_UNCERTAINTY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "SCREENING_DATA_SOURCE", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE)));
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadataKey::wrap_Object(AdditionalCovarianceMetadataKey(((t_AdditionalCovarianceMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalCovarianceMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::valueOf(a0));
                return t_AdditionalCovarianceMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdditionalCovarianceMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalCovarianceMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data)
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
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Coordinate::class$ = NULL;
        jmethodID *SP3Coordinate::mids$ = NULL;
        bool SP3Coordinate::live$ = false;
        SP3Coordinate *SP3Coordinate::DUMMY = NULL;

        jclass SP3Coordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Coordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f3a5cccf3b4d044] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDZZZZ)V");
            mids$[mid_getClockAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getClockAccuracy", "()D");
            mids$[mid_getClockCorrection_dff5885c2c873297] = env->getMethodID(cls, "getClockCorrection", "()D");
            mids$[mid_getClockRateAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getClockRateAccuracy", "()D");
            mids$[mid_getClockRateChange_dff5885c2c873297] = env->getMethodID(cls, "getClockRateChange", "()D");
            mids$[mid_getPositionAccuracy_d52645e0d4c07563] = env->getMethodID(cls, "getPositionAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocityAccuracy_d52645e0d4c07563] = env->getMethodID(cls, "getVelocityAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_hasClockEvent_b108b35ef48e27bd] = env->getMethodID(cls, "hasClockEvent", "()Z");
            mids$[mid_hasClockPrediction_b108b35ef48e27bd] = env->getMethodID(cls, "hasClockPrediction", "()Z");
            mids$[mid_hasOrbitManeuverEvent_b108b35ef48e27bd] = env->getMethodID(cls, "hasOrbitManeuverEvent", "()Z");
            mids$[mid_hasOrbitPrediction_b108b35ef48e27bd] = env->getMethodID(cls, "hasOrbitPrediction", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DUMMY = new SP3Coordinate(env->getStaticObjectField(cls, "DUMMY", "Lorg/orekit/files/sp3/SP3Coordinate;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Coordinate::SP3Coordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jboolean a9, jboolean a10, jboolean a11, jboolean a12) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3f3a5cccf3b4d044, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble SP3Coordinate::getClockAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockAccuracy_dff5885c2c873297]);
        }

        jdouble SP3Coordinate::getClockCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockCorrection_dff5885c2c873297]);
        }

        jdouble SP3Coordinate::getClockRateAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateAccuracy_dff5885c2c873297]);
        }

        jdouble SP3Coordinate::getClockRateChange() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateChange_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getPositionAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionAccuracy_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getVelocityAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityAccuracy_d52645e0d4c07563]));
        }

        jboolean SP3Coordinate::hasClockEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockEvent_b108b35ef48e27bd]);
        }

        jboolean SP3Coordinate::hasClockPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockPrediction_b108b35ef48e27bd]);
        }

        jboolean SP3Coordinate::hasOrbitManeuverEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitManeuverEvent_b108b35ef48e27bd]);
        }

        jboolean SP3Coordinate::hasOrbitPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitPrediction_b108b35ef48e27bd]);
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
      namespace sp3 {
        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data);
        static PyGetSetDef t_SP3Coordinate__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Coordinate, clockAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockCorrection),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateChange),
          DECLARE_GET_FIELD(t_SP3Coordinate, positionAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, velocityAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Coordinate__methods_[] = {
          DECLARE_METHOD(t_SP3Coordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, getClockAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockCorrection, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateChange, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getPositionAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getVelocityAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockPrediction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitManeuverEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitPrediction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Coordinate)[] = {
          { Py_tp_methods, t_SP3Coordinate__methods_ },
          { Py_tp_init, (void *) t_SP3Coordinate_init_ },
          { Py_tp_getset, t_SP3Coordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Coordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(SP3Coordinate, t_SP3Coordinate, SP3Coordinate);

        void t_SP3Coordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Coordinate), &PY_TYPE_DEF(SP3Coordinate), module, "SP3Coordinate", 0);
        }

        void t_SP3Coordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "class_", make_descriptor(SP3Coordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "wrapfn_", make_descriptor(t_SP3Coordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Coordinate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "DUMMY", make_descriptor(t_SP3Coordinate::wrap_Object(*SP3Coordinate::DUMMY)));
        }

        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Coordinate::initializeClass, 1)))
            return NULL;
          return t_SP3Coordinate::wrap_Object(SP3Coordinate(((t_SP3Coordinate *) arg)->object.this$));
        }
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Coordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jboolean a9;
          jboolean a10;
          jboolean a11;
          jboolean a12;
          SP3Coordinate object((jobject) NULL);

          if (!parseArgs(args, "kkkkkDDDDZZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
          {
            INT_CALL(object = SP3Coordinate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitManeuverEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateOptimizer::class$ = NULL;
          jmethodID *MultivariateOptimizer::mids$ = NULL;
          bool MultivariateOptimizer::live$ = false;

          jclass MultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeObjectiveValue_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "computeObjectiveValue", "([D)D");
              mids$[mid_getGoalType_5759ced222da2ae0] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble MultivariateOptimizer::computeObjectiveValue(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_computeObjectiveValue_9dc1ec0bcc0a9a29], a0.this$);
          }

          ::org::hipparchus::optim::nonlinear::scalar::GoalType MultivariateOptimizer::getGoalType() const
          {
            return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_5759ced222da2ae0]));
          }

          ::org::hipparchus::optim::PointValuePair MultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self);
          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data);
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultivariateOptimizer, goalType),
            DECLARE_GET_FIELD(t_MultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, computeObjectiveValue, METH_O),
            DECLARE_METHOD(t_MultivariateOptimizer, getGoalType, METH_NOARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultivariateOptimizer, t_MultivariateOptimizer, MultivariateOptimizer);
          PyObject *t_MultivariateOptimizer::wrap_Object(const MultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateOptimizer), &PY_TYPE_DEF(MultivariateOptimizer), module, "MultivariateOptimizer", 0);
          }

          void t_MultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "class_", make_descriptor(MultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "wrapfn_", make_descriptor(t_MultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultivariateOptimizer::wrap_Object(MultivariateOptimizer(((t_MultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.computeObjectiveValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeObjectiveValue", arg);
            return NULL;
          }

          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
            OBJ_CALL(result = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
          }

          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(MultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
            OBJ_CALL(value = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *OrientedPoint::class$ = NULL;
          jmethodID *OrientedPoint::mids$ = NULL;
          bool OrientedPoint::live$ = false;

          jclass OrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/OrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a0148f2b1e7b1fe0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;ZD)V");
              mids$[mid_copySelf_1e8b5c1f5bf2f0dc] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/oned/OrientedPoint;");
              mids$[mid_emptyHyperplane_26f436423bdf9c0a] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_getLocation_90d24faee21188ef] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b4822d5266bca26e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_b108b35ef48e27bd] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_revertSelf_0fa09c18fee449d5] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_26f436423bdf9c0a] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_wholeSpace_c5f122d639184cd2] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OrientedPoint::OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0148f2b1e7b1fe0, a0.this$, a1, a2)) {}

          OrientedPoint OrientedPoint::copySelf() const
          {
            return OrientedPoint(env->callObjectMethod(this$, mids$[mid_copySelf_1e8b5c1f5bf2f0dc]));
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_26f436423bdf9c0a]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D OrientedPoint::getLocation() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_getLocation_90d24faee21188ef]));
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b4822d5266bca26e], a0.this$);
          }

          jdouble OrientedPoint::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          jboolean OrientedPoint::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_b108b35ef48e27bd]);
          }

          ::org::hipparchus::geometry::Point OrientedPoint::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
          }

          void OrientedPoint::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0fa09c18fee449d5]);
          }

          jboolean OrientedPoint::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_26f436423bdf9c0a]));
          }

          ::org::hipparchus::geometry::euclidean::oned::IntervalsSet OrientedPoint::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::IntervalsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_c5f122d639184cd2]));
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
        namespace oned {
          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args);
          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data);
          static PyGetSetDef t_OrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_OrientedPoint, direct),
            DECLARE_GET_FIELD(t_OrientedPoint, location),
            DECLARE_GET_FIELD(t_OrientedPoint, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrientedPoint__methods_[] = {
            DECLARE_METHOD(t_OrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_OrientedPoint, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, project, METH_O),
            DECLARE_METHOD(t_OrientedPoint, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_OrientedPoint, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrientedPoint)[] = {
            { Py_tp_methods, t_OrientedPoint__methods_ },
            { Py_tp_init, (void *) t_OrientedPoint_init_ },
            { Py_tp_getset, t_OrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrientedPoint)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OrientedPoint, t_OrientedPoint, OrientedPoint);

          void t_OrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(OrientedPoint), &PY_TYPE_DEF(OrientedPoint), module, "OrientedPoint", 0);
          }

          void t_OrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "class_", make_descriptor(OrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "wrapfn_", make_descriptor(t_OrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrientedPoint::initializeClass, 1)))
              return NULL;
            return t_OrientedPoint::wrap_Object(OrientedPoint(((t_OrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            OrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrientedPoint(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self)
          {
            OrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_OrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(value);
          }

          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointIntegratorBuilder::mids$ = NULL;
        bool MidpointIntegratorBuilder::live$ = false;

        jclass MidpointIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegratorBuilder::MidpointIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator MidpointIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_MidpointIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MidpointIntegratorBuilder, t_MidpointIntegratorBuilder, MidpointIntegratorBuilder);

        void t_MidpointIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegratorBuilder), &PY_TYPE_DEF(MidpointIntegratorBuilder), module, "MidpointIntegratorBuilder", 0);
        }

        void t_MidpointIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "class_", make_descriptor(MidpointIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegratorBuilder::wrap_Object(MidpointIntegratorBuilder(((t_MidpointIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadataKey::class$ = NULL;
            jmethodID *AdmMetadataKey::mids$ = NULL;
            bool AdmMetadataKey::live$ = false;
            AdmMetadataKey *AdmMetadataKey::CENTER_NAME = NULL;
            AdmMetadataKey *AdmMetadataKey::OBJECT_NAME = NULL;

            jclass AdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_3f621e0676a56eac] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_5690d2025eaadfc2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");
                mids$[mid_values_64501ad286e575d6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                OBJECT_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3f621e0676a56eac], a0.this$, a1.this$, a2.this$);
            }

            AdmMetadataKey AdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5690d2025eaadfc2], a0.this$));
            }

            JArray< AdmMetadataKey > AdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_64501ad286e575d6]));
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
            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data);
            static PyGetSetDef t_AdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadataKey)[] = {
              { Py_tp_methods, t_AdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmMetadataKey, t_AdmMetadataKey, AdmMetadataKey);
            PyObject *t_AdmMetadataKey::wrap_Object(const AdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadataKey), &PY_TYPE_DEF(AdmMetadataKey), module, "AdmMetadataKey", 0);
            }

            void t_AdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "class_", make_descriptor(AdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "wrapfn_", make_descriptor(t_AdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "CENTER_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "OBJECT_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmMetadataKey::wrap_Object(AdmMetadataKey(((t_AdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::valueOf(a0));
                return t_AdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmData::class$ = NULL;
              jmethodID *OmmData::mids$ = NULL;
              bool OmmData::live$ = false;

              jclass OmmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0a0bd3ea612b410b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_cf101600575330c7] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_c379fe2f6979132e] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getSpacecraftParametersBlock_60188820d73f1019] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getTLEBlock_e5c2ae68d23414ce] = env->getMethodID(cls, "getTLEBlock", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;");
                  mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmData::OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a0, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a0bd3ea612b410b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OmmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_cf101600575330c7]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OmmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_c379fe2f6979132e]));
              }

              jdouble OmmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OmmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_60188820d73f1019]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle OmmData::getTLEBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle(env->callObjectMethod(this$, mids$[mid_getTLEBlock_e5c2ae68d23414ce]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OmmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483]));
              }

              void OmmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            namespace omm {
              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self);
              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self);
              static PyObject *t_OmmData_getMass(t_OmmData *self);
              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self);
              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self);
              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self);
              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg);
              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data);
              static PyGetSetDef t_OmmData__fields_[] = {
                DECLARE_GET_FIELD(t_OmmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OmmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OmmData, mass),
                DECLARE_GET_FIELD(t_OmmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OmmData, tLEBlock),
                DECLARE_GET_FIELD(t_OmmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmData__methods_[] = {
                DECLARE_METHOD(t_OmmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getTLEBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmData)[] = {
                { Py_tp_methods, t_OmmData__methods_ },
                { Py_tp_init, (void *) t_OmmData_init_ },
                { Py_tp_getset, t_OmmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OmmData, t_OmmData, OmmData);

              void t_OmmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmData), &PY_TYPE_DEF(OmmData), module, "OmmData", 0);
              }

              void t_OmmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "class_", make_descriptor(OmmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "wrapfn_", make_descriptor(t_OmmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmData::initializeClass, 1)))
                  return NULL;
                return t_OmmData::wrap_Object(OmmData(((t_OmmData *) arg)->object.this$));
              }
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a4((jobject) NULL);
                jdouble a5;
                OmmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkD", ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = OmmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OmmData_getMass(t_OmmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle result((jobject) NULL);
                OBJ_CALL(result = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(result);
              }

              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle value((jobject) NULL);
                OBJ_CALL(value = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
