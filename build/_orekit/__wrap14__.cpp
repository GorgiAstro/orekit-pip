#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorPreservingVisitor::class$ = NULL;
      jmethodID *RealVectorPreservingVisitor::mids$ = NULL;
      bool RealVectorPreservingVisitor::live$ = false;

      jclass RealVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_c80ec2f7d8b5fe87] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_987a5fb872043b12] = env->getMethodID(cls, "visit", "(ID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void RealVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_c80ec2f7d8b5fe87], a0, a1, a2);
      }

      void RealVectorPreservingVisitor::visit(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_987a5fb872043b12], a0, a1);
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
      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self);
      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_RealVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorPreservingVisitor, t_RealVectorPreservingVisitor, RealVectorPreservingVisitor);

      void t_RealVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorPreservingVisitor), &PY_TYPE_DEF(RealVectorPreservingVisitor), module, "RealVectorPreservingVisitor", 0);
      }

      void t_RealVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "class_", make_descriptor(RealVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "wrapfn_", make_descriptor(t_RealVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorPreservingVisitor::wrap_Object(RealVectorPreservingVisitor(((t_RealVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_dd74b9f18094eb16] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_clearHistory_7ae3461a92a43152] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_263b2fd0cf81fe4d] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldShortPeriodicsInterpolatedCoefficient::FieldShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            void FieldShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_dd74b9f18094eb16], a0.this$, a1.this$);
            }

            void FieldShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_7ae3461a92a43152]);
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_263b2fd0cf81fe4d], a0.this$));
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
#include "org/hipparchus/ode/events/StepEndEventState.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
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
            mids$[mid_init$_d6f7dd010125fe2a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
            mids$[mid_doEvent_786b2ff82ce4b0ff] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_31e05790c4db57cc] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_getHandler_5cce4fefa39d3881] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEStepEndHandler;");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_setStepEnd_77e0f9a1f260e2e5] = env->getMethodID(cls, "setStepEnd", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepEndEventState::StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6f7dd010125fe2a, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence StepEndEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_786b2ff82ce4b0ff], a0.this$));
        }

        jboolean StepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_31e05790c4db57cc], a0.this$);
        }

        jdouble StepEndEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::ode::events::ODEStepEndHandler StepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_5cce4fefa39d3881]));
        }

        void StepEndEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
        }

        void StepEndEventState::setStepEnd(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PolynomialAccelerationModel::class$ = NULL;
        jmethodID *PolynomialAccelerationModel::mids$ = NULL;
        bool PolynomialAccelerationModel::live$ = false;

        jclass PolynomialAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PolynomialAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_da0696ca02234263] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;I)V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_79518d097c897d26] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4368a5d862927c08] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialAccelerationModel::PolynomialAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da0696ca02234263, a0.this$, a1.this$, a2)) {}

        ::java::util::List PolynomialAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void PolynomialAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_79518d097c897d26], a0.this$, a1.this$));
        }

        jdouble PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4368a5d862927c08], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self);
        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data);
        static PyGetSetDef t_PolynomialAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PolynomialAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialAccelerationModel)[] = {
          { Py_tp_methods, t_PolynomialAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PolynomialAccelerationModel_init_ },
          { Py_tp_getset, t_PolynomialAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialAccelerationModel, t_PolynomialAccelerationModel, PolynomialAccelerationModel);

        void t_PolynomialAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialAccelerationModel), &PY_TYPE_DEF(PolynomialAccelerationModel), module, "PolynomialAccelerationModel", 0);
        }

        void t_PolynomialAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "class_", make_descriptor(PolynomialAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "wrapfn_", make_descriptor(t_PolynomialAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PolynomialAccelerationModel::wrap_Object(PolynomialAccelerationModel(((t_PolynomialAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          PolynomialAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PolynomialAccelerationModel(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args)
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

        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian$Parametric::class$ = NULL;
        jmethodID *Gaussian$Parametric::mids$ = NULL;
        bool Gaussian$Parametric::live$ = false;

        jclass Gaussian$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian$Parametric::Gaussian$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > Gaussian$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble Gaussian$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args);
        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args);

        static PyMethodDef t_Gaussian$Parametric__methods_[] = {
          DECLARE_METHOD(t_Gaussian$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Gaussian$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian$Parametric)[] = {
          { Py_tp_methods, t_Gaussian$Parametric__methods_ },
          { Py_tp_init, (void *) t_Gaussian$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian$Parametric, t_Gaussian$Parametric, Gaussian$Parametric);

        void t_Gaussian$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian$Parametric), &PY_TYPE_DEF(Gaussian$Parametric), module, "Gaussian$Parametric", 0);
        }

        void t_Gaussian$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "class_", make_descriptor(Gaussian$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "wrapfn_", make_descriptor(t_Gaussian$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian$Parametric::initializeClass, 1)))
            return NULL;
          return t_Gaussian$Parametric::wrap_Object(Gaussian$Parametric(((t_Gaussian$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Gaussian$Parametric object((jobject) NULL);

          INT_CALL(object = Gaussian$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceBlender::class$ = NULL;
      jmethodID *StateCovarianceBlender::mids$ = NULL;
      bool StateCovarianceBlender::live$ = false;

      jclass StateCovarianceBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4903eb457e30521a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_8b6823ff71cba4c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_9c0671e111b7adfc] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4903eb457e30521a, a0.this$, a1.this$, a2.this$)) {}

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8b6823ff71cba4c9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args);
      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data);
      static PyGetSetDef t_StateCovarianceBlender__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceBlender__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceBlender)[] = {
        { Py_tp_methods, t_StateCovarianceBlender__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceBlender_init_ },
        { Py_tp_getset, t_StateCovarianceBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceBlender, t_StateCovarianceBlender, StateCovarianceBlender);
      PyObject *t_StateCovarianceBlender::wrap_Object(const StateCovarianceBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceBlender), &PY_TYPE_DEF(StateCovarianceBlender), module, "StateCovarianceBlender", 0);
      }

      void t_StateCovarianceBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "class_", make_descriptor(StateCovarianceBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "wrapfn_", make_descriptor(t_StateCovarianceBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceBlender::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceBlender::wrap_Object(StateCovarianceBlender(((t_StateCovarianceBlender *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKkKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2, a3, a4));
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
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *NelderMeadSimplex::class$ = NULL;
            jmethodID *NelderMeadSimplex::mids$ = NULL;
            bool NelderMeadSimplex::live$ = false;

            jclass NelderMeadSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_cf3af9f78157f32b] = env->getMethodID(cls, "<init>", "([DDDDD)V");
                mids$[mid_init$_db09204907d49615] = env->getMethodID(cls, "<init>", "([[DDDDD)V");
                mids$[mid_init$_cc4784be32cd9c15] = env->getMethodID(cls, "<init>", "(IDDDD)V");
                mids$[mid_init$_159fc5189923452d] = env->getMethodID(cls, "<init>", "(IDDDDD)V");
                mids$[mid_iterate_cd2534a55381d07e] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_cf3af9f78157f32b, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_db09204907d49615, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_cc4784be32cd9c15, a0, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_159fc5189923452d, a0, a1, a2, a3, a4, a5)) {}

            void NelderMeadSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_cd2534a55381d07e], a0.this$, a1.this$);
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args);

            static PyMethodDef t_NelderMeadSimplex__methods_[] = {
              DECLARE_METHOD(t_NelderMeadSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NelderMeadSimplex)[] = {
              { Py_tp_methods, t_NelderMeadSimplex__methods_ },
              { Py_tp_init, (void *) t_NelderMeadSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NelderMeadSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(NelderMeadSimplex, t_NelderMeadSimplex, NelderMeadSimplex);

            void t_NelderMeadSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(NelderMeadSimplex), &PY_TYPE_DEF(NelderMeadSimplex), module, "NelderMeadSimplex", 0);
            }

            void t_NelderMeadSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "class_", make_descriptor(NelderMeadSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "wrapfn_", make_descriptor(t_NelderMeadSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NelderMeadSimplex::initializeClass, 1)))
                return NULL;
              return t_NelderMeadSimplex::wrap_Object(NelderMeadSimplex(((t_NelderMeadSimplex *) arg)->object.this$));
            }
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NelderMeadSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4, a5));
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

            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(NelderMeadSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AggregateBoundedAttitudeProvider::class$ = NULL;
      jmethodID *AggregateBoundedAttitudeProvider::mids$ = NULL;
      bool AggregateBoundedAttitudeProvider::live$ = false;

      jclass AggregateBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AggregateBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregateBoundedAttitudeProvider::AggregateBoundedAttitudeProvider(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
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
      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_AggregateBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregateBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_AggregateBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_AggregateBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_AggregateBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregateBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregateBoundedAttitudeProvider, t_AggregateBoundedAttitudeProvider, AggregateBoundedAttitudeProvider);

      void t_AggregateBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregateBoundedAttitudeProvider), &PY_TYPE_DEF(AggregateBoundedAttitudeProvider), module, "AggregateBoundedAttitudeProvider", 0);
      }

      void t_AggregateBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "class_", make_descriptor(AggregateBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_AggregateBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AggregateBoundedAttitudeProvider::wrap_Object(AggregateBoundedAttitudeProvider(((t_AggregateBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        AggregateBoundedAttitudeProvider object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = AggregateBoundedAttitudeProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
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

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEStateAndDerivative::class$ = NULL;
      jmethodID *ComplexODEStateAndDerivative::mids$ = NULL;
      bool ComplexODEStateAndDerivative::live$ = false;

      jclass ComplexODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a183ca66a2fdae88] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_b96837c39aa5ebf8] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteDerivative_a42e219c62839d3d] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryDerivative_a42e219c62839d3d] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryDerivative_2169290c4dd2441c] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_a183ca66a2fdae88, a0, a1.this$, a2.this$)) {}

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a3, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a4) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_b96837c39aa5ebf8, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_a42e219c62839d3d]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_a42e219c62839d3d]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_2169290c4dd2441c], a0));
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
      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ComplexODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ComplexODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ComplexODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ComplexODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ComplexODEState),
        NULL
      };

      DEFINE_TYPE(ComplexODEStateAndDerivative, t_ComplexODEStateAndDerivative, ComplexODEStateAndDerivative);

      void t_ComplexODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEStateAndDerivative), &PY_TYPE_DEF(ComplexODEStateAndDerivative), module, "ComplexODEStateAndDerivative", 0);
      }

      void t_ComplexODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "class_", make_descriptor(ComplexODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "wrapfn_", make_descriptor(t_ComplexODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ComplexODEStateAndDerivative::wrap_Object(ComplexODEStateAndDerivative(((t_ComplexODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a3((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a4((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k[[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3c8fa06686c50418] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Segment;)V");
              mids$[mid_init$_ece3b6638d417579] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_init$_972c17f71377e474] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_edbb4dcc1cb2f08e] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/SubLine;Z)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment & a0) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_3c8fa06686c50418, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_ece3b6638d417579, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_972c17f71377e474, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_edbb4dcc1cb2f08e], a0.this$, a1));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLine::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
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
        namespace twod {
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            DECLARE_GET_FIELD(t_SubLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);
          PyObject *t_SubLine::wrap_Object(const SubLine& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLine::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::twod::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "KZ", SubLine::initializeClass, &a0, &p0, t_SubLine::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            return callSuper(PY_TYPE(SubLine), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractParameterizable::class$ = NULL;
      jmethodID *AbstractParameterizable::mids$ = NULL;
      bool AbstractParameterizable::live$ = false;

      jclass AbstractParameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractParameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_complainIfNotSupported_e939c6558ae8d313] = env->getMethodID(cls, "complainIfNotSupported", "(Ljava/lang/String;)V");
          mids$[mid_getParametersNames_a6156df500549a58] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_6b161f495ea569b8] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractParameterizable::complainIfNotSupported(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_complainIfNotSupported_e939c6558ae8d313], a0.this$);
      }

      ::java::util::List AbstractParameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_a6156df500549a58]));
      }

      jboolean AbstractParameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_6b161f495ea569b8], a0.this$);
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
      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self);
      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data);
      static PyGetSetDef t_AbstractParameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractParameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractParameterizable__methods_[] = {
        DECLARE_METHOD(t_AbstractParameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, complainIfNotSupported, METH_O),
        DECLARE_METHOD(t_AbstractParameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractParameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractParameterizable)[] = {
        { Py_tp_methods, t_AbstractParameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractParameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractParameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractParameterizable, t_AbstractParameterizable, AbstractParameterizable);

      void t_AbstractParameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractParameterizable), &PY_TYPE_DEF(AbstractParameterizable), module, "AbstractParameterizable", 0);
      }

      void t_AbstractParameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "class_", make_descriptor(AbstractParameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "wrapfn_", make_descriptor(t_AbstractParameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractParameterizable::initializeClass, 1)))
          return NULL;
        return t_AbstractParameterizable::wrap_Object(AbstractParameterizable(((t_AbstractParameterizable *) arg)->object.this$));
      }
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractParameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.complainIfNotSupported(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "complainIfNotSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
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

            ::java::lang::Class *RegularXmlTokenBuilder::class$ = NULL;
            jmethodID *RegularXmlTokenBuilder::mids$ = NULL;
            bool RegularXmlTokenBuilder::live$ = false;

            jclass RegularXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RegularXmlTokenBuilder::RegularXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::java::util::List RegularXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_9b67b2bd574b1d70], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RegularXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RegularXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RegularXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RegularXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RegularXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RegularXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RegularXmlTokenBuilder, t_RegularXmlTokenBuilder, RegularXmlTokenBuilder);

            void t_RegularXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RegularXmlTokenBuilder), &PY_TYPE_DEF(RegularXmlTokenBuilder), module, "RegularXmlTokenBuilder", 0);
            }

            void t_RegularXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "class_", make_descriptor(RegularXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "wrapfn_", make_descriptor(t_RegularXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RegularXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RegularXmlTokenBuilder::wrap_Object(RegularXmlTokenBuilder(((t_RegularXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RegularXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RegularXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RegularXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args)
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
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolatingFunction::class$ = NULL;
        jmethodID *BicubicInterpolatingFunction::mids$ = NULL;
        bool BicubicInterpolatingFunction::live$ = false;

        jclass BicubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d9d4e74ba9990dba] = env->getMethodID(cls, "<init>", "([D[D[[D[[D[[D[[D)V");
            mids$[mid_isValidPoint_a836bdf37f582c99] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolatingFunction::BicubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9d4e74ba9990dba, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jboolean BicubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_a836bdf37f582c99], a0, a1);
        }

        jdouble BicubicInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_BicubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolatingFunction, t_BicubicInterpolatingFunction, BicubicInterpolatingFunction);

        void t_BicubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolatingFunction), &PY_TYPE_DEF(BicubicInterpolatingFunction), module, "BicubicInterpolatingFunction", 0);
        }

        void t_BicubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "class_", make_descriptor(BicubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "wrapfn_", make_descriptor(t_BicubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolatingFunction::wrap_Object(BicubicInterpolatingFunction(((t_BicubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          JArray< JArray< jdouble > > a4((jobject) NULL);
          JArray< JArray< jdouble > > a5((jobject) NULL);
          BicubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D[[D[[D[[D", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = BicubicInterpolatingFunction(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args)
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool PythonAbstractAnalyticalMatricesHarvester::live$ = false;

        jclass PythonAbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b9debeff808dacbc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getGradientConverter_5e2b3cffafaa419c] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalMatricesHarvester::PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, const ::java::lang::String & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_b9debeff808dacbc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractAnalyticalMatricesHarvester::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractAnalyticalMatricesHarvester::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractAnalyticalMatricesHarvester::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalMatricesHarvester, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalMatricesHarvester_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalMatricesHarvester, t_PythonAbstractAnalyticalMatricesHarvester, PythonAbstractAnalyticalMatricesHarvester);

        void t_PythonAbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(PythonAbstractAnalyticalMatricesHarvester), module, "PythonAbstractAnalyticalMatricesHarvester", 1);
        }

        void t_PythonAbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "class_", make_descriptor(PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalMatricesHarvester::initializeClass);
          JNINativeMethod methods[] = {
            { "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;", (void *) t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalMatricesHarvester::wrap_Object(PythonAbstractAnalyticalMatricesHarvester(((t_PythonAbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
          PythonAbstractAnalyticalMatricesHarvester object((jobject) NULL);

          if (!parseArgs(args, "kskk", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractAnalyticalMatricesHarvester(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getGradientConverter", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter::initializeClass, &value))
          {
            throwTypeError("getGradientConverter", result);
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

        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data)
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
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedPVCoordinates::mids$ = NULL;
      bool TimeStampedPVCoordinates::live$ = false;

      jclass TimeStampedPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e9df8c391b63f025] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_941d8dc495969cee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_1f308a96dce4eb31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_35ede516ab2a5b7c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_0ab6ea6a7f063b84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_fcb73ff3ac48befe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_7a95e2f0247d033a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_121df25c9d51d7e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_3f2c926a9dd0cc8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_a09436a76601e5ee] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_44577b71ebe5fefb] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTaylorProvider_4ac4b31376cfcd98] = env->getMethodID(cls, "toTaylorProvider", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e9df8c391b63f025, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_941d8dc495969cee, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1f308a96dce4eb31, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_35ede516ab2a5b7c, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0ab6ea6a7f063b84, a0.this$, a1, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fcb73ff3ac48befe, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7a95e2f0247d033a, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_121df25c9d51d7e4, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6, jdouble a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3f2c926a9dd0cc8e, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedPVCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      TimeStampedPVCoordinates TimeStampedPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_a09436a76601e5ee], a0));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_44577b71ebe5fefb], a0.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider TimeStampedPVCoordinates::toTaylorProvider(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_4ac4b31376cfcd98], a0.this$));
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
      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self);
      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toTaylorProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinates, t_TimeStampedPVCoordinates, TimeStampedPVCoordinates);

      void t_TimeStampedPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinates), &PY_TYPE_DEF(TimeStampedPVCoordinates), module, "TimeStampedPVCoordinates", 0);
      }

      void t_TimeStampedPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "class_", make_descriptor(TimeStampedPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinates::wrap_Object(TimeStampedPVCoordinates(((t_TimeStampedPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            jdouble a7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toTaylorProvider(a0));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toTaylorProvider", arg);
        return NULL;
      }

      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingOemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingOemWriter$SegmentWriter::live$ = false;

              jclass StreamingOemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b202a0277e89b237] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter;)V");
                  mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_703918df646bd2ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter$SegmentWriter::StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b202a0277e89b237, a0.this$)) {}

              void StreamingOemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_2b88003f931f70a7], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_703918df646bd2ae], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter$SegmentWriter, t_StreamingOemWriter$SegmentWriter, StreamingOemWriter$SegmentWriter);

              void t_StreamingOemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingOemWriter$SegmentWriter), module, "StreamingOemWriter$SegmentWriter", 0);
              }

              void t_StreamingOemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "class_", make_descriptor(StreamingOemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter$SegmentWriter::wrap_Object(StreamingOemWriter$SegmentWriter(((t_StreamingOemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter a0((jobject) NULL);
                StreamingOemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonSmoothFieldOfView::class$ = NULL;
        jmethodID *PythonSmoothFieldOfView::mids$ = NULL;
        bool PythonSmoothFieldOfView::live$ = false;

        jclass PythonSmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonSmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7b3ba1964c11031c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_directionAt_5f993a721a1d8c59] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSmoothFieldOfView::PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_7b3ba1964c11031c, a0.this$, a1.this$, a2)) {}

        void PythonSmoothFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonSmoothFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonSmoothFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self);
        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data);
        static PyGetSetDef t_PythonSmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSmoothFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonSmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSmoothFieldOfView)[] = {
          { Py_tp_methods, t_PythonSmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonSmoothFieldOfView_init_ },
          { Py_tp_getset, t_PythonSmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonSmoothFieldOfView, t_PythonSmoothFieldOfView, PythonSmoothFieldOfView);

        void t_PythonSmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSmoothFieldOfView), &PY_TYPE_DEF(PythonSmoothFieldOfView), module, "PythonSmoothFieldOfView", 1);
        }

        void t_PythonSmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "class_", make_descriptor(PythonSmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "wrapfn_", make_descriptor(t_PythonSmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSmoothFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_directionAt0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonSmoothFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonSmoothFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonSmoothFieldOfView::wrap_Object(PythonSmoothFieldOfView(((t_PythonSmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          PythonSmoothFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonSmoothFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "directionAt", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("directionAt", result);
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

        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesPhaseModifier::RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier, t_RelativisticJ2ClockInterSatellitesPhaseModifier, RelativisticJ2ClockInterSatellitesPhaseModifier);

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier), module, "RelativisticJ2ClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_Object(RelativisticJ2ClockInterSatellitesPhaseModifier(((t_RelativisticJ2ClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter::class$ = NULL;
      jmethodID *MultidimensionalCounter::mids$ = NULL;
      bool MultidimensionalCounter::live$ = false;

      jclass MultidimensionalCounter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_getCount_5c5c9df37b0af581] = env->getMethodID(cls, "getCount", "([I)I");
          mids$[mid_getCounts_d7f52bcc4a12ae58] = env->getMethodID(cls, "getCounts", "(I)[I");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");
          mids$[mid_getSizes_d8ead0d90ce828b0] = env->getMethodID(cls, "getSizes", "()[I");
          mids$[mid_iterator_2fe36aa334da25e7] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/MultidimensionalCounter$Iterator;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultidimensionalCounter::MultidimensionalCounter(const JArray< jint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      jint MultidimensionalCounter::getCount(const JArray< jint > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_5c5c9df37b0af581], a0.this$);
      }

      JArray< jint > MultidimensionalCounter::getCounts(jint a0) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_d7f52bcc4a12ae58], a0));
      }

      jint MultidimensionalCounter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      jint MultidimensionalCounter::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_f2f64475e4580546]);
      }

      JArray< jint > MultidimensionalCounter::getSizes() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getSizes_d8ead0d90ce828b0]));
      }

      ::org::hipparchus::util::MultidimensionalCounter$Iterator MultidimensionalCounter::iterator() const
      {
        return ::org::hipparchus::util::MultidimensionalCounter$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_2fe36aa334da25e7]));
      }

      ::java::lang::String MultidimensionalCounter::toString() const
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
  namespace hipparchus {
    namespace util {
      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter, dimension),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, size),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, sizes),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, getCount, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getCounts, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSize, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSizes, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, iterator, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter)[] = {
        { Py_tp_methods, t_MultidimensionalCounter__methods_ },
        { Py_tp_init, (void *) t_MultidimensionalCounter_init_ },
        { Py_tp_getset, t_MultidimensionalCounter__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_MultidimensionalCounter *)) get_iterator< t_MultidimensionalCounter >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter, t_MultidimensionalCounter, MultidimensionalCounter);

      void t_MultidimensionalCounter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter), &PY_TYPE_DEF(MultidimensionalCounter), module, "MultidimensionalCounter", 0);
      }

      void t_MultidimensionalCounter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "class_", make_descriptor(MultidimensionalCounter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "wrapfn_", make_descriptor(t_MultidimensionalCounter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter::wrap_Object(MultidimensionalCounter(((t_MultidimensionalCounter *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds)
      {
        JArray< jint > a0((jobject) NULL);
        MultidimensionalCounter object((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          INT_CALL(object = MultidimensionalCounter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg)
      {
        JArray< jint > a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "[I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCounts(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getCounts", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSizes());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self)
      {
        ::org::hipparchus::util::MultidimensionalCounter$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_MultidimensionalCounter$Iterator::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MultidimensionalCounter), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSizes());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEConverter::class$ = NULL;
      jmethodID *ComplexODEConverter::mids$ = NULL;
      bool ComplexODEConverter::live$ = false;

      jclass ComplexODEConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_convertEquations_692f4b856bdf35c9] = env->getMethodID(cls, "convertEquations", "(Lorg/hipparchus/ode/ComplexOrdinaryDifferentialEquation;)Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_convertSecondaryEquations_12bba565b84add90] = env->getMethodID(cls, "convertSecondaryEquations", "(Lorg/hipparchus/ode/ComplexSecondaryODE;)Lorg/hipparchus/ode/SecondaryODE;");
          mids$[mid_convertState_9d4ec89646c80951] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ComplexODEStateAndDerivative;");
          mids$[mid_convertState_2ab9f12639004418] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ComplexODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEConverter::ComplexODEConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ComplexODEConverter::convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation & a0) const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_convertEquations_692f4b856bdf35c9], a0.this$));
      }

      ::org::hipparchus::ode::SecondaryODE ComplexODEConverter::convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE & a0) const
      {
        return ::org::hipparchus::ode::SecondaryODE(env->callObjectMethod(this$, mids$[mid_convertSecondaryEquations_12bba565b84add90], a0.this$));
      }

      ::org::hipparchus::ode::ComplexODEStateAndDerivative ComplexODEConverter::convertState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        return ::org::hipparchus::ode::ComplexODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_convertState_9d4ec89646c80951], a0.this$));
      }

      ::org::hipparchus::ode::ODEState ComplexODEConverter::convertState(const ::org::hipparchus::ode::ComplexODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_convertState_2ab9f12639004418], a0.this$));
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
      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args);

      static PyMethodDef t_ComplexODEConverter__methods_[] = {
        DECLARE_METHOD(t_ComplexODEConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, convertEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertState, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEConverter)[] = {
        { Py_tp_methods, t_ComplexODEConverter__methods_ },
        { Py_tp_init, (void *) t_ComplexODEConverter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEConverter, t_ComplexODEConverter, ComplexODEConverter);

      void t_ComplexODEConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEConverter), &PY_TYPE_DEF(ComplexODEConverter), module, "ComplexODEConverter", 0);
      }

      void t_ComplexODEConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "class_", make_descriptor(ComplexODEConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "wrapfn_", make_descriptor(t_ComplexODEConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEConverter::initializeClass, 1)))
          return NULL;
        return t_ComplexODEConverter::wrap_Object(ComplexODEConverter(((t_ComplexODEConverter *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds)
      {
        ComplexODEConverter object((jobject) NULL);

        INT_CALL(object = ComplexODEConverter());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation a0((jobject) NULL);
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertEquations(a0));
          return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexSecondaryODE a0((jobject) NULL);
        ::org::hipparchus::ode::SecondaryODE result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexSecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertSecondaryEquations(a0));
          return ::org::hipparchus::ode::t_SecondaryODE::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
            ::org::hipparchus::ode::ComplexODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ComplexODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::ComplexODEState a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ComplexODEState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertState", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeader::class$ = NULL;
            jmethodID *CdmHeader::mids$ = NULL;
            bool CdmHeader::live$ = false;

            jclass CdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getMessageFor_0090f7797e403f43] = env->getMethodID(cls, "getMessageFor", "()Ljava/lang/String;");
                mids$[mid_setMessageFor_e939c6558ae8d313] = env->getMethodID(cls, "setMessageFor", "(Ljava/lang/String;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeader::CdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::java::lang::String CdmHeader::getMessageFor() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageFor_0090f7797e403f43]));
            }

            void CdmHeader::setMessageFor(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMessageFor_e939c6558ae8d313], a0.this$);
            }

            void CdmHeader::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self);
            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg);
            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args);
            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data);
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmHeader, messageFor),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeader__methods_[] = {
              DECLARE_METHOD(t_CdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, getMessageFor, METH_NOARGS),
              DECLARE_METHOD(t_CdmHeader, setMessageFor, METH_O),
              DECLARE_METHOD(t_CdmHeader, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeader)[] = {
              { Py_tp_methods, t_CdmHeader__methods_ },
              { Py_tp_init, (void *) t_CdmHeader_init_ },
              { Py_tp_getset, t_CdmHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(CdmHeader, t_CdmHeader, CdmHeader);

            void t_CdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeader), &PY_TYPE_DEF(CdmHeader), module, "CdmHeader", 0);
            }

            void t_CdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "class_", make_descriptor(CdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "wrapfn_", make_descriptor(t_CdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeader::initializeClass, 1)))
                return NULL;
              return t_CdmHeader::wrap_Object(CdmHeader(((t_CdmHeader *) arg)->object.this$));
            }
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds)
            {
              CdmHeader object((jobject) NULL);

              INT_CALL(object = CdmHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessageFor());
              return j2p(result);
            }

            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setMessageFor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMessageFor", arg);
              return NULL;
            }

            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmHeader), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getMessageFor());
              return j2p(value);
            }
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setMessageFor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "messageFor", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationUtil::class$ = NULL;
            jmethodID *TleGenerationUtil::mids$ = NULL;
            bool TleGenerationUtil::live$ = false;

            jclass TleGenerationUtil::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationUtil");

                mids$ = new jmethodID[max_mid];
                mids$[mid_newTLE_efffe98dfe350fd0] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/FieldKeplerianOrbit;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_newTLE_57dd416391ffbe15] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/KeplerianOrbit;Lorg/orekit/propagation/analytical/tle/TLE;DLorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_efffe98dfe350fd0], a0.this$, a1.this$, a2.this$, a3.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::KeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1, jdouble a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::TLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_57dd416391ffbe15], a0.this$, a1.this$, a2, a3.this$));
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
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_TleGenerationUtil__methods_[] = {
              DECLARE_METHOD(t_TleGenerationUtil, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, newTLE, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationUtil)[] = {
              { Py_tp_methods, t_TleGenerationUtil__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationUtil)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationUtil, t_TleGenerationUtil, TleGenerationUtil);

            void t_TleGenerationUtil::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationUtil), &PY_TYPE_DEF(TleGenerationUtil), module, "TleGenerationUtil", 0);
            }

            void t_TleGenerationUtil::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "class_", make_descriptor(TleGenerationUtil::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "wrapfn_", make_descriptor(t_TleGenerationUtil::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationUtil::initializeClass, 1)))
                return NULL;
              return t_TleGenerationUtil::wrap_Object(TleGenerationUtil(((t_TleGenerationUtil *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationUtil::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::orbits::KeplerianOrbit a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kkDk", ::org::orekit::orbits::KeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::orbits::FieldKeplerianOrbit a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KKKk", ::org::orekit::orbits::FieldKeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldKeplerianOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "newTLE", args);
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
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *OffsetModel::class$ = NULL;
      jmethodID *OffsetModel::mids$ = NULL;
      bool OffsetModel::live$ = false;

      jclass OffsetModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/OffsetModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f258113202d4c30d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_275d7822ecae0775] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;IDD)V");
          mids$[mid_getMJDRef_f2f64475e4580546] = env->getMethodID(cls, "getMJDRef", "()I");
          mids$[mid_getOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getOffset", "()D");
          mids$[mid_getSlope_456d9a2f64d6b28d] = env->getMethodID(cls, "getSlope", "()D");
          mids$[mid_getStart_d592c1a2c355eb35] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/DateComponents;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f258113202d4c30d, a0.this$, a1)) {}

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_275d7822ecae0775, a0.this$, a1, a2, a3)) {}

      jint OffsetModel::getMJDRef() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJDRef_f2f64475e4580546]);
      }

      jdouble OffsetModel::getOffset() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_456d9a2f64d6b28d]);
      }

      jdouble OffsetModel::getSlope() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSlope_456d9a2f64d6b28d]);
      }

      ::org::orekit::time::DateComponents OffsetModel::getStart() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getStart_d592c1a2c355eb35]));
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
      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self);
      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data);
      static PyGetSetDef t_OffsetModel__fields_[] = {
        DECLARE_GET_FIELD(t_OffsetModel, mJDRef),
        DECLARE_GET_FIELD(t_OffsetModel, offset),
        DECLARE_GET_FIELD(t_OffsetModel, slope),
        DECLARE_GET_FIELD(t_OffsetModel, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OffsetModel__methods_[] = {
        DECLARE_METHOD(t_OffsetModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, getMJDRef, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getOffset, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getSlope, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OffsetModel)[] = {
        { Py_tp_methods, t_OffsetModel__methods_ },
        { Py_tp_init, (void *) t_OffsetModel_init_ },
        { Py_tp_getset, t_OffsetModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OffsetModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OffsetModel, t_OffsetModel, OffsetModel);

      void t_OffsetModel::install(PyObject *module)
      {
        installType(&PY_TYPE(OffsetModel), &PY_TYPE_DEF(OffsetModel), module, "OffsetModel", 0);
      }

      void t_OffsetModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "class_", make_descriptor(OffsetModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "wrapfn_", make_descriptor(t_OffsetModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OffsetModel::initializeClass, 1)))
          return NULL;
        return t_OffsetModel::wrap_Object(OffsetModel(((t_OffsetModel *) arg)->object.this$));
      }
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OffsetModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OffsetModel(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            jdouble a2;
            jdouble a3;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kIDD", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OffsetModel(a0, a1, a2, a3));
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

      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJDRef());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOffset());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSlope());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJDRef());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOffset());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSlope());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *StateTransitionMatrixGenerator$PartialsObserver::class$ = NULL;
        jmethodID *StateTransitionMatrixGenerator$PartialsObserver::mids$ = NULL;
        bool StateTransitionMatrixGenerator$PartialsObserver::live$ = false;

        jclass StateTransitionMatrixGenerator$PartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_partialsComputed_32d762d958cb6960] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StateTransitionMatrixGenerator$PartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_partialsComputed_32d762d958cb6960], a0.this$, a1.this$, a2.this$);
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
      namespace numerical {
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args);

        static PyMethodDef t_StateTransitionMatrixGenerator$PartialsObserver__methods_[] = {
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, partialsComputed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          { Py_tp_methods, t_StateTransitionMatrixGenerator$PartialsObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateTransitionMatrixGenerator$PartialsObserver, t_StateTransitionMatrixGenerator$PartialsObserver, StateTransitionMatrixGenerator$PartialsObserver);

        void t_StateTransitionMatrixGenerator$PartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), &PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver), module, "StateTransitionMatrixGenerator$PartialsObserver", 0);
        }

        void t_StateTransitionMatrixGenerator$PartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "class_", make_descriptor(StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "wrapfn_", make_descriptor(t_StateTransitionMatrixGenerator$PartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1)))
            return NULL;
          return t_StateTransitionMatrixGenerator$PartialsObserver::wrap_Object(StateTransitionMatrixGenerator$PartialsObserver(((t_StateTransitionMatrixGenerator$PartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          ::java::lang::Class *ParsedMessage::class$ = NULL;
          jmethodID *ParsedMessage::mids$ = NULL;
          bool ParsedMessage::live$ = false;

          jclass ParsedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ParsedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTypeCode_f2f64475e4580546] = env->getMethodID(cls, "getTypeCode", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint ParsedMessage::getTypeCode() const
          {
            return env->callIntMethod(this$, mids$[mid_getTypeCode_f2f64475e4580546]);
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
          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self);
          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data);
          static PyGetSetDef t_ParsedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedMessage, typeCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedMessage__methods_[] = {
            DECLARE_METHOD(t_ParsedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, getTypeCode, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedMessage)[] = {
            { Py_tp_methods, t_ParsedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ParsedMessage, t_ParsedMessage, ParsedMessage);

          void t_ParsedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedMessage), &PY_TYPE_DEF(ParsedMessage), module, "ParsedMessage", 0);
          }

          void t_ParsedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "class_", make_descriptor(ParsedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "wrapfn_", make_descriptor(t_ParsedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedMessage::initializeClass, 1)))
              return NULL;
            return t_ParsedMessage::wrap_Object(ParsedMessage(((t_ParsedMessage *) arg)->object.this$));
          }
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTypeCode());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTypeCode());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedFieldHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedFieldHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_8488ed656e90df7c] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedField;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldHermiteInterpolator, t_TimeStampedFieldHermiteInterpolator, TimeStampedFieldHermiteInterpolator);
      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_Object(const TimeStampedFieldHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator), module, "TimeStampedFieldHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldHermiteInterpolator::wrap_Object(TimeStampedFieldHermiteInterpolator(((t_TimeStampedFieldHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0, a1));
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
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonFieldIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegrator::mids$ = NULL;
        bool AdamsMoultonFieldIntegrator::live$ = false;

        jclass AdamsMoultonFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a9398ed2a13d6b42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b90e9d65ac061479] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_e2c124c0ae6f0f15] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_2e4197dad990b4d5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9398ed2a13d6b42, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b90e9d65ac061479, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegrator, t_AdamsMoultonFieldIntegrator, AdamsMoultonFieldIntegrator);
        PyObject *t_AdamsMoultonFieldIntegrator::wrap_Object(const AdamsMoultonFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegrator), &PY_TYPE_DEF(AdamsMoultonFieldIntegrator), module, "AdamsMoultonFieldIntegrator", 0);
        }

        void t_AdamsMoultonFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "class_", make_descriptor(AdamsMoultonFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegrator::wrap_Object(AdamsMoultonFieldIntegrator(((t_AdamsMoultonFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Max::class$ = NULL;
        jmethodID *Max::mids$ = NULL;
        bool Max::live$ = false;

        jclass Max::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Max");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Max::Max() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Max::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Max_value(t_Max *self, PyObject *args);

        static PyMethodDef t_Max__methods_[] = {
          DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
          { Py_tp_methods, t_Max__methods_ },
          { Py_tp_init, (void *) t_Max_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Max)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Max, t_Max, Max);

        void t_Max::install(PyObject *module)
        {
          installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
        }

        void t_Max::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Max::initializeClass, 1)))
            return NULL;
          return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
        }
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Max::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
        {
          Max object((jobject) NULL);

          INT_CALL(object = Max());
          self->object = object;

          return 0;
        }

        static PyObject *t_Max_value(t_Max *self, PyObject *args)
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
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEclipseDetector::class$ = NULL;
        jmethodID *FieldEclipseDetector::mids$ = NULL;
        bool FieldEclipseDetector::live$ = false;

        jclass FieldEclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3efd530a0f52f364] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_f5f8b7afd5a04314] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMargin_e6d4d3215c30992a] = env->getMethodID(cls, "getMargin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOccultationEngine_46087fa4fdbd04d6] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_e470b6d9e0d979db] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_d5dbbb4d93239f46] = env->getMethodID(cls, "withMargin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withPenumbra_6ba4340e79e92d45] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withUmbra_6ba4340e79e92d45] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_create_6e92307659afced2] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::OccultationEngine & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3efd530a0f52f364, a0.this$, a1.this$)) {}

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f5f8b7afd5a04314, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::getMargin() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMargin_e6d4d3215c30992a]));
        }

        ::org::orekit::utils::OccultationEngine FieldEclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_46087fa4fdbd04d6]));
        }

        jboolean FieldEclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_e470b6d9e0d979db]);
        }

        FieldEclipseDetector FieldEclipseDetector::withMargin(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_d5dbbb4d93239f46], a0.this$));
        }

        FieldEclipseDetector FieldEclipseDetector::withPenumbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_6ba4340e79e92d45]));
        }

        FieldEclipseDetector FieldEclipseDetector::withUmbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_6ba4340e79e92d45]));
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
        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args);
        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args);
        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data);
        static PyGetSetDef t_FieldEclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEclipseDetector, margin),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEclipseDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_FieldEclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEclipseDetector)[] = {
          { Py_tp_methods, t_FieldEclipseDetector__methods_ },
          { Py_tp_init, (void *) t_FieldEclipseDetector_init_ },
          { Py_tp_getset, t_FieldEclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEclipseDetector, t_FieldEclipseDetector, FieldEclipseDetector);
        PyObject *t_FieldEclipseDetector::wrap_Object(const FieldEclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEclipseDetector), &PY_TYPE_DEF(FieldEclipseDetector), module, "FieldEclipseDetector", 0);
        }

        void t_FieldEclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "class_", make_descriptor(FieldEclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "wrapfn_", make_descriptor(t_FieldEclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEclipseDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEclipseDetector::wrap_Object(FieldEclipseDetector(((t_FieldEclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::OccultationEngine a1((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::OccultationEngine::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "KkDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMargin());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMargin());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
