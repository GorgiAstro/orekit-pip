#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *EnumeratedDistribution::class$ = NULL;
      jmethodID *EnumeratedDistribution::mids$ = NULL;
      bool EnumeratedDistribution::live$ = false;

      jclass EnumeratedDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/EnumeratedDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_checkAndNormalize_51f624c89851da7e] = env->getStaticMethodID(cls, "checkAndNormalize", "([D)[D");
          mids$[mid_getPmf_d751c1a57012b438] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
          mids$[mid_probability_03e5a5b48763527d] = env->getMethodID(cls, "probability", "(Ljava/lang/Object;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EnumeratedDistribution::EnumeratedDistribution(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

      JArray< jdouble > EnumeratedDistribution::checkAndNormalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_checkAndNormalize_51f624c89851da7e], a0.this$));
      }

      ::java::util::List EnumeratedDistribution::getPmf() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_d751c1a57012b438]));
      }

      jdouble EnumeratedDistribution::probability(const ::java::lang::Object & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_03e5a5b48763527d], a0.this$);
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
      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args);
      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self);
      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data);
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data);
      static PyGetSetDef t_EnumeratedDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_EnumeratedDistribution, pmf),
        DECLARE_GET_FIELD(t_EnumeratedDistribution, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EnumeratedDistribution__methods_[] = {
        DECLARE_METHOD(t_EnumeratedDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, of_, METH_VARARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, checkAndNormalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, getPmf, METH_NOARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, probability, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EnumeratedDistribution)[] = {
        { Py_tp_methods, t_EnumeratedDistribution__methods_ },
        { Py_tp_init, (void *) t_EnumeratedDistribution_init_ },
        { Py_tp_getset, t_EnumeratedDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EnumeratedDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EnumeratedDistribution, t_EnumeratedDistribution, EnumeratedDistribution);
      PyObject *t_EnumeratedDistribution::wrap_Object(const EnumeratedDistribution& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_EnumeratedDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_EnumeratedDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(EnumeratedDistribution), &PY_TYPE_DEF(EnumeratedDistribution), module, "EnumeratedDistribution", 0);
      }

      void t_EnumeratedDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "class_", make_descriptor(EnumeratedDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "wrapfn_", make_descriptor(t_EnumeratedDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EnumeratedDistribution::initializeClass, 1)))
          return NULL;
        return t_EnumeratedDistribution::wrap_Object(EnumeratedDistribution(((t_EnumeratedDistribution *) arg)->object.this$));
      }
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EnumeratedDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        EnumeratedDistribution object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = EnumeratedDistribution(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::distribution::EnumeratedDistribution::checkAndNormalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "checkAndNormalize", arg);
        return NULL;
      }

      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(result = self->object.probability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", arg);
        return NULL;
      }
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5d8be0538a03d97] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_doEvent_92392b21662535dc] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/events/EventState$EventOccurrence;");
            mids$[mid_evaluateStep_cf0615f6b6c30b8a] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_80e11148db499dda] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_ebd847a60689999d] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_reinitializeBegin_9db9d9fe85cac7f9] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_22e96c41589acd28] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventState::EventState(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5d8be0538a03d97, a0.this$)) {}

        ::org::orekit::propagation::events::EventState$EventOccurrence EventState::doEvent(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::EventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_92392b21662535dc], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_cf0615f6b6c30b8a], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate EventState::getEventDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_80e11148db499dda]));
        }

        ::org::orekit::propagation::events::EventDetector EventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_ebd847a60689999d]));
        }

        void EventState::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        void EventState::reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_9db9d9fe85cac7f9], a0.this$);
        }

        jboolean EventState::tryAdvance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_22e96c41589acd28], a0.this$, a1.this$);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args);
        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventDate(t_EventState *self);
        static PyObject *t_EventState_getEventDetector(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data);
        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data);
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventDate),
          DECLARE_GET_FIELD(t_EventState, eventDetector),
          DECLARE_GET_FIELD(t_EventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_EventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          DECLARE_METHOD(t_EventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_EventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) t_EventState_init_ },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);
        PyObject *t_EventState::wrap_Object(const EventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(EventState$EventOccurrence)));
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          EventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = EventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_EventState$EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventDate(t_EventState *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventState_getEventDetector(t_EventState *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
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

        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixDecomposer::class$ = NULL;
      jmethodID *FieldMatrixDecomposer::mids$ = NULL;
      bool FieldMatrixDecomposer::live$ = false;

      jclass FieldMatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_eea5b130cde95d83] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldMatrixDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_eea5b130cde95d83], a0.this$));
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
      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args);
      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data);
      static PyGetSetDef t_FieldMatrixDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixDecomposer)[] = {
        { Py_tp_methods, t_FieldMatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixDecomposer, t_FieldMatrixDecomposer, FieldMatrixDecomposer);
      PyObject *t_FieldMatrixDecomposer::wrap_Object(const FieldMatrixDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixDecomposer), &PY_TYPE_DEF(FieldMatrixDecomposer), module, "FieldMatrixDecomposer", 0);
      }

      void t_FieldMatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "class_", make_descriptor(FieldMatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "wrapfn_", make_descriptor(t_FieldMatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixDecomposer::wrap_Object(FieldMatrixDecomposer(((t_FieldMatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessageType::class$ = NULL;
          jmethodID *IgsSsrMessageType::mids$ = NULL;
          bool IgsSsrMessageType::live$ = false;
          IgsSsrMessageType *IgsSsrMessageType::IGM_01 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_02 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_03 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_04 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_05 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_06 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_07 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IM_201 = NULL;

          jclass IgsSsrMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_0e14eec34b1b402d] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_getSatelliteId_1b1b871ed68c6a92] = env->getStaticMethodID(cls, "getSatelliteId", "(Lorg/orekit/gnss/SatelliteSystem;I)I");
              mids$[mid_messageNumberToSatelliteSystem_1ae0ce8664c78ae1] = env->getStaticMethodID(cls, "messageNumberToSatelliteSystem", "(I)Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_valueOf_0e14eec34b1b402d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_values_ea30d0c8c54fb9de] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGM_01 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_01", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_02 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_02", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_03 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_03", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_04 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_04", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_05 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_05", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_06 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_06", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_07 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_07", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IM_201 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IM_201", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessageType IgsSsrMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_0e14eec34b1b402d], a0.this$));
          }

          jint IgsSsrMessageType::getSatelliteId(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticIntMethod(cls, mids$[mid_getSatelliteId_1b1b871ed68c6a92], a0.this$, a1);
          }

          ::org::orekit::gnss::SatelliteSystem IgsSsrMessageType::messageNumberToSatelliteSystem(jint a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::gnss::SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_messageNumberToSatelliteSystem_1ae0ce8664c78ae1], a0));
          }

          IgsSsrMessageType IgsSsrMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0e14eec34b1b402d], a0.this$));
          }

          JArray< IgsSsrMessageType > IgsSsrMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_ea30d0c8c54fb9de]));
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
        namespace parser {
          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args);
          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type);
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data);
          static PyGetSetDef t_IgsSsrMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrMessageType__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, getSatelliteId, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, messageNumberToSatelliteSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessageType)[] = {
            { Py_tp_methods, t_IgsSsrMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessageType, t_IgsSsrMessageType, IgsSsrMessageType);
          PyObject *t_IgsSsrMessageType::wrap_Object(const IgsSsrMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessageType), &PY_TYPE_DEF(IgsSsrMessageType), module, "IgsSsrMessageType", 0);
          }

          void t_IgsSsrMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "class_", make_descriptor(IgsSsrMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "wrapfn_", make_descriptor(t_IgsSsrMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_01", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_01)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_02", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_02)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_03", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_03)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_04", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_04)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_05", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_05)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_06", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_06)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_07", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_07)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IM_201", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IM_201)));
          }

          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessageType::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessageType::wrap_Object(IgsSsrMessageType(((t_IgsSsrMessageType *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getMessageType(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint result;

            if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getSatelliteId(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError(type, "getSatelliteId", args);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::messageNumberToSatelliteSystem(a0));
              return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "messageNumberToSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::valueOf(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type)
          {
            JArray< IgsSsrMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrMessageType::wrap_jobject);
          }
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmParser::class$ = NULL;
              jmethodID *OpmParser::mids$ = NULL;
              bool OpmParser::live$ = false;

              jclass OpmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_345001f3179e1657] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/opm/Opm;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_662984e7008bcc88] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Opm OpmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Opm(env->callObjectMethod(this$, mids$[mid_build_345001f3179e1657]));
              }

              jboolean OpmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean OpmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean OpmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OpmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_662984e7008bcc88]));
              }

              ::java::util::Map OpmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
              }

              jboolean OpmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean OpmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean OpmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              jboolean OpmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean OpmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean OpmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void OpmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
            namespace opm {
              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data);
              static PyGetSetDef t_OpmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OpmParser, header),
                DECLARE_GET_FIELD(t_OpmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OpmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmParser__methods_[] = {
                DECLARE_METHOD(t_OpmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmParser)[] = {
                { Py_tp_methods, t_OpmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OpmParser, t_OpmParser, OpmParser);
              PyObject *t_OpmParser::wrap_Object(const OpmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OpmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OpmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmParser), &PY_TYPE_DEF(OpmParser), module, "OpmParser", 0);
              }

              void t_OpmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "class_", make_descriptor(OpmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "wrapfn_", make_descriptor(t_OpmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmParser::initializeClass, 1)))
                  return NULL;
                return t_OpmParser::wrap_Object(OpmParser(((t_OpmParser *) arg)->object.this$));
              }
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::Opm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Opm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_4bd0c73f0d7f7dff] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_400f2c523278a7df] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator;");
            mids$[mid_decomposer_87734d07ecd23cc1] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_c482870df7060608] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_1f51e89a0a81d5f8] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder::SemiAnalyticalUnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_4bd0c73f0d7f7dff], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator SemiAnalyticalUnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_400f2c523278a7df]));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_87734d07ecd23cc1], a0.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_c482870df7060608], a0.this$, a1.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_1f51e89a0a81d5f8], a0.this$));
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder), module, "SemiAnalyticalUnscentedKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalUnscentedKalmanEstimatorBuilder(((t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalUnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray$ExpansionMode::class$ = NULL;
      jmethodID *ResizableDoubleArray$ExpansionMode::mids$ = NULL;
      bool ResizableDoubleArray$ExpansionMode::live$ = false;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::ADDITIVE = NULL;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE = NULL;

      jclass ResizableDoubleArray$ExpansionMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray$ExpansionMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_1529ad4334b226bb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_values_5c421eac791538f4] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "ADDITIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          MULTIPLICATIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "MULTIPLICATIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray$ExpansionMode ResizableDoubleArray$ExpansionMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ResizableDoubleArray$ExpansionMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1529ad4334b226bb], a0.this$));
      }

      JArray< ResizableDoubleArray$ExpansionMode > ResizableDoubleArray$ExpansionMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ResizableDoubleArray$ExpansionMode >(env->callStaticObjectMethod(cls, mids$[mid_values_5c421eac791538f4]));
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
      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data);
      static PyGetSetDef t_ResizableDoubleArray$ExpansionMode__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray$ExpansionMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray$ExpansionMode__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray$ExpansionMode)[] = {
        { Py_tp_methods, t_ResizableDoubleArray$ExpansionMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ResizableDoubleArray$ExpansionMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray$ExpansionMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray$ExpansionMode, t_ResizableDoubleArray$ExpansionMode, ResizableDoubleArray$ExpansionMode);
      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_Object(const ResizableDoubleArray$ExpansionMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ResizableDoubleArray$ExpansionMode::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray$ExpansionMode), &PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode), module, "ResizableDoubleArray$ExpansionMode", 0);
      }

      void t_ResizableDoubleArray$ExpansionMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "class_", make_descriptor(ResizableDoubleArray$ExpansionMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "wrapfn_", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(ResizableDoubleArray$ExpansionMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "ADDITIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::ADDITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "MULTIPLICATIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE)));
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray$ExpansionMode::wrap_Object(ResizableDoubleArray$ExpansionMode(((t_ResizableDoubleArray$ExpansionMode *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ResizableDoubleArray$ExpansionMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::valueOf(a0));
          return t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type)
      {
        JArray< ResizableDoubleArray$ExpansionMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::values());
        return JArray<jobject>(result.this$).wrap(t_ResizableDoubleArray$ExpansionMode::wrap_jobject);
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterDriversProvider::class$ = NULL;
      jmethodID *PythonParameterDriversProvider::mids$ = NULL;
      bool PythonParameterDriversProvider::live$ = false;

      jclass PythonParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterDriversProvider::PythonParameterDriversProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonParameterDriversProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonParameterDriversProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonParameterDriversProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self);
      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args);
      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data);
      static PyGetSetDef t_PythonParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterDriversProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_PythonParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterDriversProvider)[] = {
        { Py_tp_methods, t_PythonParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) t_PythonParameterDriversProvider_init_ },
        { Py_tp_getset, t_PythonParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterDriversProvider, t_PythonParameterDriversProvider, PythonParameterDriversProvider);

      void t_PythonParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterDriversProvider), &PY_TYPE_DEF(PythonParameterDriversProvider), module, "PythonParameterDriversProvider", 1);
      }

      void t_PythonParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "class_", make_descriptor(PythonParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "wrapfn_", make_descriptor(t_PythonParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterDriversProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonParameterDriversProvider_getParametersDrivers0 },
          { "pythonDecRef", "()V", (void *) t_PythonParameterDriversProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_PythonParameterDriversProvider::wrap_Object(PythonParameterDriversProvider(((t_PythonParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterDriversProvider object((jobject) NULL);

        INT_CALL(object = PythonParameterDriversProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getParametersDrivers", result);
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

      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data)
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
#include "org/hipparchus/special/Erf.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Erf::class$ = NULL;
      jmethodID *Erf::mids$ = NULL;
      bool Erf::live$ = false;

      jclass Erf::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Erf");

          mids$ = new jmethodID[max_mid];
          mids$[mid_erf_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "erf", "(D)D");
          mids$[mid_erf_a3b854adede8eaaa] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erf_82f92590f4247da1] = env->getStaticMethodID(cls, "erf", "(DD)D");
          mids$[mid_erf_b5ecd7df9e053968] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfInv_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "erfInv", "(D)D");
          mids$[mid_erfInv_a3b854adede8eaaa] = env->getStaticMethodID(cls, "erfInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfc_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "erfc", "(D)D");
          mids$[mid_erfc_a3b854adede8eaaa] = env->getStaticMethodID(cls, "erfc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfcInv_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "erfcInv", "(D)D");
          mids$[mid_erfcInv_a3b854adede8eaaa] = env->getStaticMethodID(cls, "erfcInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Erf::erf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_a3b854adede8eaaa], a0.this$));
      }

      jdouble Erf::erf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble Erf::erfInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfInv_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfInv_a3b854adede8eaaa], a0.this$));
      }

      jdouble Erf::erfc(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfc_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfc(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfc_a3b854adede8eaaa], a0.this$));
      }

      jdouble Erf::erfcInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfcInv_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfcInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfcInv_a3b854adede8eaaa], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Erf__methods_[] = {
        DECLARE_METHOD(t_Erf, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, erf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfInv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfc, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfcInv, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Erf)[] = {
        { Py_tp_methods, t_Erf__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Erf)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Erf, t_Erf, Erf);

      void t_Erf::install(PyObject *module)
      {
        installType(&PY_TYPE(Erf), &PY_TYPE_DEF(Erf), module, "Erf", 0);
      }

      void t_Erf::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "class_", make_descriptor(Erf::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "wrapfn_", make_descriptor(t_Erf::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Erf::initializeClass, 1)))
          return NULL;
        return t_Erf::wrap_Object(Erf(((t_Erf *) arg)->object.this$));
      }
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Erf::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erf", args);
        return NULL;
      }

      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfInv", args);
        return NULL;
      }

      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfc", args);
        return NULL;
      }

      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfcInv", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList$DelegatingDriver::class$ = NULL;
      jmethodID *ParameterDriversList$DelegatingDriver::mids$ = NULL;
      bool ParameterDriversList$DelegatingDriver::live$ = false;

      jclass ParameterDriversList$DelegatingDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList$DelegatingDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRawDrivers", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List ParameterDriversList$DelegatingDriver::getRawDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRawDrivers_d751c1a57012b438]));
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
      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self);
      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data);
      static PyGetSetDef t_ParameterDriversList$DelegatingDriver__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList$DelegatingDriver, rawDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList$DelegatingDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, getRawDrivers, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList$DelegatingDriver)[] = {
        { Py_tp_methods, t_ParameterDriversList$DelegatingDriver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversList$DelegatingDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList$DelegatingDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList$DelegatingDriver, t_ParameterDriversList$DelegatingDriver, ParameterDriversList$DelegatingDriver);

      void t_ParameterDriversList$DelegatingDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList$DelegatingDriver), &PY_TYPE_DEF(ParameterDriversList$DelegatingDriver), module, "ParameterDriversList$DelegatingDriver", 0);
      }

      void t_ParameterDriversList$DelegatingDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "class_", make_descriptor(ParameterDriversList$DelegatingDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "wrapfn_", make_descriptor(t_ParameterDriversList$DelegatingDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList$DelegatingDriver::wrap_Object(ParameterDriversList$DelegatingDriver(((t_ParameterDriversList$DelegatingDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationDetector::class$ = NULL;
        jmethodID *AngularSeparationDetector::mids$ = NULL;
        bool AngularSeparationDetector::live$ = false;

        jclass AngularSeparationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7b82b8f25db8b260] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBeacon_781ab98286dad7d5] = env->getMethodID(cls, "getBeacon", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getObserver_781ab98286dad7d5] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_9981f74b2d109da6] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_create_5bb85a5919736449] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationDetector::AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7b82b8f25db8b260, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getBeacon() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getBeacon_781ab98286dad7d5]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getObserver() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getObserver_781ab98286dad7d5]));
        }

        jdouble AngularSeparationDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_9981f74b2d109da6]);
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
        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args);
        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationDetector, beacon),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, observer),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getBeacon, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getProximityAngle, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationDetector)[] = {
          { Py_tp_methods, t_AngularSeparationDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationDetector_init_ },
          { Py_tp_getset, t_AngularSeparationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationDetector, t_AngularSeparationDetector, AngularSeparationDetector);
        PyObject *t_AngularSeparationDetector::wrap_Object(const AngularSeparationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationDetector), &PY_TYPE_DEF(AngularSeparationDetector), module, "AngularSeparationDetector", 0);
        }

        void t_AngularSeparationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "class_", make_descriptor(AngularSeparationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "wrapfn_", make_descriptor(t_AngularSeparationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationDetector::wrap_Object(AngularSeparationDetector(((t_AngularSeparationDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonEphemerisGenerator::class$ = NULL;
      jmethodID *PythonEphemerisGenerator::mids$ = NULL;
      bool PythonEphemerisGenerator::live$ = false;

      jclass PythonEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_6c7bb9da59d24b03] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEphemerisGenerator::PythonEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonEphemerisGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self);
      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEphemerisGenerator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEphemerisGenerator, t_PythonEphemerisGenerator, PythonEphemerisGenerator);

      void t_PythonEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEphemerisGenerator), &PY_TYPE_DEF(PythonEphemerisGenerator), module, "PythonEphemerisGenerator", 1);
      }

      void t_PythonEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "class_", make_descriptor(PythonEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;", (void *) t_PythonEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonEphemerisGenerator::wrap_Object(PythonEphemerisGenerator(((t_PythonEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::BoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data)
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
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LyapunovOrbit::class$ = NULL;
      jmethodID *LyapunovOrbit::mids$ = NULL;
      bool LyapunovOrbit::live$ = false;

      jclass LyapunovOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LyapunovOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82a9a5ef43dffc29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;D)V");
          mids$[mid_init$_2ace0c1a76c4c810] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_6705c201ee6823b5] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_82a9a5ef43dffc29, a0.this$, a1)) {}

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_2ace0c1a76c4c810, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LyapunovOrbit__methods_[] = {
        DECLARE_METHOD(t_LyapunovOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LyapunovOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LyapunovOrbit)[] = {
        { Py_tp_methods, t_LyapunovOrbit__methods_ },
        { Py_tp_init, (void *) t_LyapunovOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LyapunovOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(LyapunovOrbit, t_LyapunovOrbit, LyapunovOrbit);

      void t_LyapunovOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LyapunovOrbit), &PY_TYPE_DEF(LyapunovOrbit), module, "LyapunovOrbit", 0);
      }

      void t_LyapunovOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "class_", make_descriptor(LyapunovOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "wrapfn_", make_descriptor(t_LyapunovOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LyapunovOrbit::initializeClass, 1)))
          return NULL;
        return t_LyapunovOrbit::wrap_Object(LyapunovOrbit(((t_LyapunovOrbit *) arg)->object.this$));
      }
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LyapunovOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::RichardsonExpansion::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *Preconditioner::class$ = NULL;
            jmethodID *Preconditioner::mids$ = NULL;
            bool Preconditioner::live$ = false;

            jclass Preconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_precondition_8238c1ebef563b00] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > Preconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_8238c1ebef563b00], a0.this$, a1.this$));
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
          namespace gradient {
            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args);

            static PyMethodDef t_Preconditioner__methods_[] = {
              DECLARE_METHOD(t_Preconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Preconditioner)[] = {
              { Py_tp_methods, t_Preconditioner__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Preconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Preconditioner, t_Preconditioner, Preconditioner);

            void t_Preconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(Preconditioner), &PY_TYPE_DEF(Preconditioner), module, "Preconditioner", 0);
            }

            void t_Preconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "class_", make_descriptor(Preconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "wrapfn_", make_descriptor(t_Preconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Preconditioner::initializeClass, 1)))
                return NULL;
              return t_Preconditioner::wrap_Object(Preconditioner(((t_Preconditioner *) arg)->object.this$));
            }
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Preconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
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
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PVBuilder::class$ = NULL;
          jmethodID *PVBuilder::mids$ = NULL;
          bool PVBuilder::live$ = false;

          jclass PVBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PVBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d4b82a73816aea8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_e30ffd3613cfb61c] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/PV;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PVBuilder::PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_d4b82a73816aea8c, a0.this$, a1, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::PV PVBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::PV(env->callObjectMethod(this$, mids$[mid_build_e30ffd3613cfb61c], a0.this$, a1.this$));
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
          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args);
          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args);
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data);
          static PyGetSetDef t_PVBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PVBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PVBuilder__methods_[] = {
            DECLARE_METHOD(t_PVBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PVBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PVBuilder)[] = {
            { Py_tp_methods, t_PVBuilder__methods_ },
            { Py_tp_init, (void *) t_PVBuilder_init_ },
            { Py_tp_getset, t_PVBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PVBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PVBuilder, t_PVBuilder, PVBuilder);
          PyObject *t_PVBuilder::wrap_Object(const PVBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PVBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PVBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PVBuilder), &PY_TYPE_DEF(PVBuilder), module, "PVBuilder", 0);
          }

          void t_PVBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "class_", make_descriptor(PVBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "wrapfn_", make_descriptor(t_PVBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PVBuilder::initializeClass, 1)))
              return NULL;
            return t_PVBuilder::wrap_Object(PVBuilder(((t_PVBuilder *) arg)->object.this$));
          }
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PVBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            PVBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = PVBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::PV result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_PV::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PVBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data)
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
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
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
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearEvolution::class$ = NULL;
          jmethodID *LinearEvolution::mids$ = NULL;
          bool LinearEvolution::live$ = false;

          jclass LinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d66bc4b134aec93e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCommand_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getCommand", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getControlMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getControlMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearEvolution::LinearEvolution(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d66bc4b134aec93e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector LinearEvolution::getCommand() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCommand_92d7e8d8d3f1dfcf]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getControlMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getControlMatrix_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b2eebabce70526d8]));
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
          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data);
          static PyGetSetDef t_LinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_LinearEvolution, command),
            DECLARE_GET_FIELD(t_LinearEvolution, controlMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_LinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearEvolution__methods_[] = {
            DECLARE_METHOD(t_LinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, getCommand, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getControlMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearEvolution)[] = {
            { Py_tp_methods, t_LinearEvolution__methods_ },
            { Py_tp_init, (void *) t_LinearEvolution_init_ },
            { Py_tp_getset, t_LinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearEvolution, t_LinearEvolution, LinearEvolution);

          void t_LinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearEvolution), &PY_TYPE_DEF(LinearEvolution), module, "LinearEvolution", 0);
          }

          void t_LinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "class_", make_descriptor(LinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "wrapfn_", make_descriptor(t_LinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearEvolution::initializeClass, 1)))
              return NULL;
            return t_LinearEvolution::wrap_Object(LinearEvolution(((t_LinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            LinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = LinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldMultivariateMatrixFunction::mids$ = NULL;
      bool FieldMultivariateMatrixFunction::live$ = false;

      jclass FieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateMatrixFunction_012ff5b04861d1c4] = env->getMethodID(cls, "toCalculusFieldMultivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction;");
          mids$[mid_value_62d646651711e99a] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction FieldMultivariateMatrixFunction::toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateMatrixFunction_012ff5b04861d1c4], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_62d646651711e99a], a0.this$));
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
      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, toCalculusFieldMultivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateMatrixFunction, t_FieldMultivariateMatrixFunction, FieldMultivariateMatrixFunction);

      void t_FieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateMatrixFunction), &PY_TYPE_DEF(FieldMultivariateMatrixFunction), module, "FieldMultivariateMatrixFunction", 0);
      }

      void t_FieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "class_", make_descriptor(FieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateMatrixFunction::wrap_Object(FieldMultivariateMatrixFunction(((t_FieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c0716fba6564ddf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_3146cd1129cf853c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_7517652b59d59b0e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3c0716fba6564ddf, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_3146cd1129cf853c]));
        }

        void FieldEventSlopeFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary::class$ = NULL;
      jmethodID *DoubleArrayDictionary::mids$ = NULL;
      bool DoubleArrayDictionary::live$ = false;

      jclass DoubleArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_df2bb61624910c2a] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_4bbf10387b1a6128] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[D");
          mids$[mid_getData_d751c1a57012b438] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_aec9d34316f710de] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/DoubleArrayDictionary$Entry;");
          mids$[mid_put_550be97e760e0f22] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_putAll_54f7443473e3aa44] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_df4c65b2aede5c41] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_c1165b139cc27553] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/DoubleArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DoubleArrayDictionary::DoubleArrayDictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(const ::java::util::Map & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df2bb61624910c2a, a0.this$)) {}

      void DoubleArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
      }

      JArray< jdouble > DoubleArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_get_4bbf10387b1a6128], a0.this$));
      }

      ::java::util::List DoubleArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_d751c1a57012b438]));
      }

      ::org::orekit::utils::DoubleArrayDictionary$Entry DoubleArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::DoubleArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_aec9d34316f710de], a0.this$));
      }

      void DoubleArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_550be97e760e0f22], a0.this$, a1.this$);
      }

      void DoubleArrayDictionary::putAll(const DoubleArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_54f7443473e3aa44], a0.this$);
      }

      void DoubleArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
      }

      jboolean DoubleArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_df4c65b2aede5c41], a0.this$);
      }

      jint DoubleArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
      }

      ::java::util::Map DoubleArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_dbcb8bbac6b35e0d]));
      }

      ::java::lang::String DoubleArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      DoubleArrayDictionary DoubleArrayDictionary::unmodifiableView() const
      {
        return DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_c1165b139cc27553]));
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
      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary, data),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_DoubleArrayDictionary_init_ },
        { Py_tp_getset, t_DoubleArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary, t_DoubleArrayDictionary, DoubleArrayDictionary);

      void t_DoubleArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary), &PY_TYPE_DEF(DoubleArrayDictionary), module, "DoubleArrayDictionary", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "Entry", make_descriptor(&PY_TYPE_DEF(DoubleArrayDictionary$Entry)));
      }

      void t_DoubleArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "class_", make_descriptor(DoubleArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "wrapfn_", make_descriptor(t_DoubleArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary::wrap_Object(DoubleArrayDictionary(((t_DoubleArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DoubleArrayDictionary object((jobject) NULL);

            INT_CALL(object = DoubleArrayDictionary());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
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

      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(DoubleArrayDictionary$Entry));
      }

      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_DoubleArrayDictionary$Entry::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.put(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DoubleArrayDictionary a0((jobject) NULL);

            if (!parseArgs(args, "k", DoubleArrayDictionary::initializeClass, &a0))
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

      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg)
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

      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DoubleArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self)
      {
        DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *AbstractCovarianceMatrixProvider::mids$ = NULL;
        bool AbstractCovarianceMatrixProvider::live$ = false;

        jclass AbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix AbstractCovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_011bf64ebaa4e018], a0.this$));
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
        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg);

        static PyMethodDef t_AbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_AbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractCovarianceMatrixProvider, t_AbstractCovarianceMatrixProvider, AbstractCovarianceMatrixProvider);

        void t_AbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractCovarianceMatrixProvider), &PY_TYPE_DEF(AbstractCovarianceMatrixProvider), module, "AbstractCovarianceMatrixProvider", 0);
        }

        void t_AbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "class_", make_descriptor(AbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_AbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractCovarianceMatrixProvider::wrap_Object(AbstractCovarianceMatrixProvider(((t_AbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldCjSjCoefficient::class$ = NULL;
            jmethodID *FieldCjSjCoefficient::mids$ = NULL;
            bool FieldCjSjCoefficient::live$ = false;

            jclass FieldCjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_127e43313dfa0b55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getCj_dfcf702144fd7bc1] = env->getMethodID(cls, "getCj", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDh_dfcf702144fd7bc1] = env->getMethodID(cls, "getDcjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDk_dfcf702144fd7bc1] = env->getMethodID(cls, "getDcjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDh_dfcf702144fd7bc1] = env->getMethodID(cls, "getDsjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDk_dfcf702144fd7bc1] = env->getMethodID(cls, "getDsjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getSj_dfcf702144fd7bc1] = env->getMethodID(cls, "getSj", "(I)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldCjSjCoefficient::FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_127e43313dfa0b55, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getCj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCj_dfcf702144fd7bc1], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDh_dfcf702144fd7bc1], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDk_dfcf702144fd7bc1], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDh_dfcf702144fd7bc1], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDk_dfcf702144fd7bc1], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getSj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSj_dfcf702144fd7bc1], a0));
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
            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args);
            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data);
            static PyGetSetDef t_FieldCjSjCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldCjSjCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldCjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldCjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldCjSjCoefficient)[] = {
              { Py_tp_methods, t_FieldCjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldCjSjCoefficient_init_ },
              { Py_tp_getset, t_FieldCjSjCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldCjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldCjSjCoefficient, t_FieldCjSjCoefficient, FieldCjSjCoefficient);
            PyObject *t_FieldCjSjCoefficient::wrap_Object(const FieldCjSjCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldCjSjCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldCjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldCjSjCoefficient), &PY_TYPE_DEF(FieldCjSjCoefficient), module, "FieldCjSjCoefficient", 0);
            }

            void t_FieldCjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "class_", make_descriptor(FieldCjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "wrapfn_", make_descriptor(t_FieldCjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldCjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldCjSjCoefficient::wrap_Object(FieldCjSjCoefficient(((t_FieldCjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldCjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::Field a2((jobject) NULL);
              PyTypeObject **p2;
              FieldCjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldCjSjCoefficient(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
              return NULL;
            }
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer::class$ = NULL;
            jmethodID *LeastSquaresOptimizer::mids$ = NULL;
            bool LeastSquaresOptimizer::live$ = false;

            jclass LeastSquaresOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_optimize_45e9e6e9254f21c4] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquaresOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_45e9e6e9254f21c4], a0.this$));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresOptimizer__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, optimize, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer, t_LeastSquaresOptimizer, LeastSquaresOptimizer);

            void t_LeastSquaresOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer), &PY_TYPE_DEF(LeastSquaresOptimizer), module, "LeastSquaresOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "Optimum", make_descriptor(&PY_TYPE_DEF(LeastSquaresOptimizer$Optimum)));
            }

            void t_LeastSquaresOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "class_", make_descriptor(LeastSquaresOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer::wrap_Object(LeastSquaresOptimizer(((t_LeastSquaresOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_832491c80c3ebc6f] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_9f757583fee38862] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldShortPeriodTerms::PythonFieldShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonFieldShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonFieldShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonFieldShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *TriggerDate::class$ = NULL;
          jmethodID *TriggerDate::mids$ = NULL;
          bool TriggerDate::live$ = false;

          jclass TriggerDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/TriggerDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e6d2ec59887c22e7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;D)V");
              mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getMassDepletionDelay_bb641ba3c743507a] = env->getMethodID(cls, "getMassDepletionDelay", "()Lorg/orekit/forces/maneuvers/jacobians/MassDepletionDelay;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_b69b5541e48d21c0] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_ed3fe207e6fde26f] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TriggerDate::TriggerDate(const ::java::lang::String & a0, const ::java::lang::String & a1, jboolean a2, const ::org::orekit::forces::maneuvers::Maneuver & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6d2ec59887c22e7, a0.this$, a1.this$, a2, a3.this$, a4)) {}

          JArray< jdouble > TriggerDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
          }

          ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay TriggerDate::getMassDepletionDelay() const
          {
            return ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay(env->callObjectMethod(this$, mids$[mid_getMassDepletionDelay_bb641ba3c743507a]));
          }

          ::java::lang::String TriggerDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          void TriggerDate::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
          }

          void TriggerDate::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_b69b5541e48d21c0], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState TriggerDate::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ed3fe207e6fde26f], a0.this$));
          }

          jboolean TriggerDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self);
          static PyObject *t_TriggerDate_getName(t_TriggerDate *self);
          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data);
          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data);
          static PyGetSetDef t_TriggerDate__fields_[] = {
            DECLARE_GET_FIELD(t_TriggerDate, massDepletionDelay),
            DECLARE_GET_FIELD(t_TriggerDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TriggerDate__methods_[] = {
            DECLARE_METHOD(t_TriggerDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_TriggerDate, getMassDepletionDelay, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, init, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, resetState, METH_O),
            DECLARE_METHOD(t_TriggerDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TriggerDate)[] = {
            { Py_tp_methods, t_TriggerDate__methods_ },
            { Py_tp_init, (void *) t_TriggerDate_init_ },
            { Py_tp_getset, t_TriggerDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TriggerDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TriggerDate, t_TriggerDate, TriggerDate);

          void t_TriggerDate::install(PyObject *module)
          {
            installType(&PY_TYPE(TriggerDate), &PY_TYPE_DEF(TriggerDate), module, "TriggerDate", 0);
          }

          void t_TriggerDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "class_", make_descriptor(TriggerDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "wrapfn_", make_descriptor(t_TriggerDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TriggerDate::initializeClass, 1)))
              return NULL;
            return t_TriggerDate::wrap_Object(TriggerDate(((t_TriggerDate *) arg)->object.this$));
          }
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TriggerDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean a2;
            ::org::orekit::forces::maneuvers::Maneuver a3((jobject) NULL);
            jdouble a4;
            TriggerDate object((jobject) NULL);

            if (!parseArgs(args, "ssZkD", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TriggerDate(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay result((jobject) NULL);
            OBJ_CALL(result = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(result);
          }

          static PyObject *t_TriggerDate_getName(t_TriggerDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args)
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

          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args)
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

          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(value);
          }

          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *ContinuousScheduler::class$ = NULL;
          jmethodID *ContinuousScheduler::mids$ = NULL;
          bool ContinuousScheduler::live$ = false;

          jclass ContinuousScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/ContinuousScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3ea802fb076b80a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_measurementIsFeasible_b16e79ba1b2830a1] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinuousScheduler::ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_3ea802fb076b80a8, a0.this$, a1.this$)) {}

          jboolean ContinuousScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_b16e79ba1b2830a1], a0.this$);
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
          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args);
          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg);
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data);
          static PyGetSetDef t_ContinuousScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_ContinuousScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContinuousScheduler__methods_[] = {
            DECLARE_METHOD(t_ContinuousScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_ContinuousScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinuousScheduler)[] = {
            { Py_tp_methods, t_ContinuousScheduler__methods_ },
            { Py_tp_init, (void *) t_ContinuousScheduler_init_ },
            { Py_tp_getset, t_ContinuousScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinuousScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(ContinuousScheduler, t_ContinuousScheduler, ContinuousScheduler);
          PyObject *t_ContinuousScheduler::wrap_Object(const ContinuousScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ContinuousScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ContinuousScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinuousScheduler), &PY_TYPE_DEF(ContinuousScheduler), module, "ContinuousScheduler", 0);
          }

          void t_ContinuousScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "class_", make_descriptor(ContinuousScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "wrapfn_", make_descriptor(t_ContinuousScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinuousScheduler::initializeClass, 1)))
              return NULL;
            return t_ContinuousScheduler::wrap_Object(ContinuousScheduler(((t_ContinuousScheduler *) arg)->object.this$));
          }
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinuousScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ContinuousScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = ContinuousScheduler(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data)
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
#include "java/util/HashMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashMap::class$ = NULL;
    jmethodID *HashMap::mids$ = NULL;
    bool HashMap::live$ = false;

    jclass HashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_df2bb61624910c2a] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_3c81d70650b38107] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_72faff9b05f5ed5e] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_72faff9b05f5ed5e] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_ca14a13ec9c67cd5] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_ca14a13ec9c67cd5] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_3bf9f05b3327e056] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_ca14a13ec9c67cd5] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9bb49a94d944b361] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashMap::HashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    HashMap::HashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    HashMap::HashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_df2bb61624910c2a, a0.this$)) {}

    HashMap::HashMap(jint a0, jfloat a1) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_3c81d70650b38107, a0, a1)) {}

    void HashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object HashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean HashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_72faff9b05f5ed5e], a0.this$);
    }

    jboolean HashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Set HashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    ::java::lang::Object HashMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object HashMap::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jboolean HashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Set HashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    ::java::lang::Object HashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    void HashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
    }

    ::java::lang::Object HashMap::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::Object HashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jboolean HashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_3bf9f05b3327e056], a0.this$, a1.this$);
    }

    ::java::lang::Object HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jboolean HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9bb49a94d944b361], a0.this$, a1.this$, a2.this$);
    }

    jint HashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Collection HashMap::values() const
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
    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args);
    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_clone(t_HashMap *self);
    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data);
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data);
    static PyGetSetDef t_HashMap__fields_[] = {
      DECLARE_GET_FIELD(t_HashMap, empty),
      DECLARE_GET_FIELD(t_HashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashMap__methods_[] = {
      DECLARE_METHOD(t_HashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashMap)[] = {
      { Py_tp_methods, t_HashMap__methods_ },
      { Py_tp_init, (void *) t_HashMap_init_ },
      { Py_tp_getset, t_HashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(HashMap, t_HashMap, HashMap);
    PyObject *t_HashMap::wrap_Object(const HashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_HashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_HashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(HashMap), &PY_TYPE_DEF(HashMap), module, "HashMap", 0);
    }

    void t_HashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "class_", make_descriptor(HashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "wrapfn_", make_descriptor(t_HashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashMap::initializeClass, 1)))
        return NULL;
      return t_HashMap::wrap_Object(HashMap(((t_HashMap *) arg)->object.this$));
    }
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashMap object((jobject) NULL);

          INT_CALL(object = HashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashMap(a0, a1));
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

    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashMap_clone(t_HashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args)
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

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args)
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

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *ConstantRefractionLayer::class$ = NULL;
        jmethodID *ConstantRefractionLayer::mids$ = NULL;
        bool ConstantRefractionLayer::live$ = false;

        jclass ConstantRefractionLayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/ConstantRefractionLayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLowestAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getLowestAltitude", "()D");
            mids$[mid_getRefractiveIndex_9981f74b2d109da6] = env->getMethodID(cls, "getRefractiveIndex", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRefractionLayer::ConstantRefractionLayer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble ConstantRefractionLayer::getLowestAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowestAltitude_9981f74b2d109da6]);
        }

        jdouble ConstantRefractionLayer::getRefractiveIndex() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefractiveIndex_9981f74b2d109da6]);
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
      namespace refraction {
        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data);
        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data);
        static PyGetSetDef t_ConstantRefractionLayer__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, lowestAltitude),
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, refractiveIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRefractionLayer__methods_[] = {
          DECLARE_METHOD(t_ConstantRefractionLayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getLowestAltitude, METH_NOARGS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getRefractiveIndex, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRefractionLayer)[] = {
          { Py_tp_methods, t_ConstantRefractionLayer__methods_ },
          { Py_tp_init, (void *) t_ConstantRefractionLayer_init_ },
          { Py_tp_getset, t_ConstantRefractionLayer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRefractionLayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantRefractionLayer, t_ConstantRefractionLayer, ConstantRefractionLayer);

        void t_ConstantRefractionLayer::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRefractionLayer), &PY_TYPE_DEF(ConstantRefractionLayer), module, "ConstantRefractionLayer", 0);
        }

        void t_ConstantRefractionLayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "class_", make_descriptor(ConstantRefractionLayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "wrapfn_", make_descriptor(t_ConstantRefractionLayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRefractionLayer::initializeClass, 1)))
            return NULL;
          return t_ConstantRefractionLayer::wrap_Object(ConstantRefractionLayer(((t_ConstantRefractionLayer *) arg)->object.this$));
        }
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRefractionLayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ConstantRefractionLayer object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = ConstantRefractionLayer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NegateDetector::class$ = NULL;
        jmethodID *NegateDetector::mids$ = NULL;
        bool NegateDetector::live$ = false;

        jclass NegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5d8be0538a03d97] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getOriginal_ebd847a60689999d] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_a0b81df0c32e8394] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NegateDetector::NegateDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d5d8be0538a03d97, a0.this$)) {}

        jdouble NegateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector NegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_ebd847a60689999d]));
        }

        void NegateDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args);
        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self);
        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data);
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data);
        static PyGetSetDef t_NegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NegateDetector, original),
          DECLARE_GET_FIELD(t_NegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NegateDetector__methods_[] = {
          DECLARE_METHOD(t_NegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_NegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NegateDetector)[] = {
          { Py_tp_methods, t_NegateDetector__methods_ },
          { Py_tp_init, (void *) t_NegateDetector_init_ },
          { Py_tp_getset, t_NegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NegateDetector, t_NegateDetector, NegateDetector);
        PyObject *t_NegateDetector::wrap_Object(const NegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NegateDetector), &PY_TYPE_DEF(NegateDetector), module, "NegateDetector", 0);
        }

        void t_NegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "class_", make_descriptor(NegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "wrapfn_", make_descriptor(t_NegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NegateDetector::initializeClass, 1)))
            return NULL;
          return t_NegateDetector::wrap_Object(NegateDetector(((t_NegateDetector *) arg)->object.this$));
        }
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          NegateDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = NegateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NegateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *IntegratedEphemeris::class$ = NULL;
        jmethodID *IntegratedEphemeris::mids$ = NULL;
        bool IntegratedEphemeris::live$ = false;

        jclass IntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/IntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_81c57bba41e79152] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/integration/StateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/DenseOutputModel;Lorg/orekit/utils/DoubleArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_updateAdditionalStates_ed3fe207e6fde26f] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_1e982279849c3b65] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IntegratedEphemeris::IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::propagation::integration::StateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::DenseOutputModel & a5, const ::org::orekit::utils::DoubleArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_81c57bba41e79152, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame IntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::propagation::SpacecraftState IntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates IntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
        }

        void IntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
        }

        void IntegratedEphemeris::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
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
        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args);
        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data);
        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data);
        static PyGetSetDef t_IntegratedEphemeris__fields_[] = {
          DECLARE_SET_FIELD(t_IntegratedEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, minDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_IntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, setAttitudeProvider, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntegratedEphemeris)[] = {
          { Py_tp_methods, t_IntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_IntegratedEphemeris_init_ },
          { Py_tp_getset, t_IntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(IntegratedEphemeris, t_IntegratedEphemeris, IntegratedEphemeris);

        void t_IntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(IntegratedEphemeris), &PY_TYPE_DEF(IntegratedEphemeris), module, "IntegratedEphemeris", 0);
        }

        void t_IntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "class_", make_descriptor(IntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "wrapfn_", make_descriptor(t_IntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_IntegratedEphemeris::wrap_Object(IntegratedEphemeris(((t_IntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::propagation::integration::StateMapper a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::DenseOutputModel a5((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a6((jobject) NULL);
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          IntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "kkkkKkkK[s[I", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::integration::StateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::DenseOutputModel::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &a6, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = IntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data)
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

        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldRombergIntegrator::class$ = NULL;
        jmethodID *FieldRombergIntegrator::mids$ = NULL;
        bool FieldRombergIntegrator::live$ = false;
        jint FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldRombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldRombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_119028fb2475d87b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_119028fb2475d87b, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args);
        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data);
        static PyGetSetDef t_FieldRombergIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldRombergIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldRombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldRombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldRombergIntegrator)[] = {
          { Py_tp_methods, t_FieldRombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldRombergIntegrator_init_ },
          { Py_tp_getset, t_FieldRombergIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldRombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldRombergIntegrator, t_FieldRombergIntegrator, FieldRombergIntegrator);
        PyObject *t_FieldRombergIntegrator::wrap_Object(const FieldRombergIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldRombergIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldRombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldRombergIntegrator), &PY_TYPE_DEF(FieldRombergIntegrator), module, "FieldRombergIntegrator", 0);
        }

        void t_FieldRombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "class_", make_descriptor(FieldRombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "wrapfn_", make_descriptor(t_FieldRombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldRombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldRombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldRombergIntegrator::wrap_Object(FieldRombergIntegrator(((t_FieldRombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldRombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldRombergIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASOrbitalElements::class$ = NULL;
            jmethodID *SBASOrbitalElements::mids$ = NULL;
            bool SBASOrbitalElements::live$ = false;

            jclass SBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAGf0_9981f74b2d109da6] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_9981f74b2d109da6] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_d6ab429752e7c267] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_9981f74b2d109da6] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_d6ab429752e7c267] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble SBASOrbitalElements::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_9981f74b2d109da6]);
            }

            jint SBASOrbitalElements::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_d6ab429752e7c267]);
            }

            jint SBASOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
            }

            jdouble SBASOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_9981f74b2d109da6]);
            }

            jint SBASOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_d6ab429752e7c267]);
            }

            jdouble SBASOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_9981f74b2d109da6]);
            }

            jdouble SBASOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_9981f74b2d109da6]);
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
        namespace gnss {
          namespace data {
            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data);
            static PyGetSetDef t_SBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf0),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf1),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, iODN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, time),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, toc),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, week),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, x),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, y),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, z),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_SBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getToc, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASOrbitalElements)[] = {
              { Py_tp_methods, t_SBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(SBASOrbitalElements, t_SBASOrbitalElements, SBASOrbitalElements);

            void t_SBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASOrbitalElements), &PY_TYPE_DEF(SBASOrbitalElements), module, "SBASOrbitalElements", 0);
            }

            void t_SBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "class_", make_descriptor(SBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "wrapfn_", make_descriptor(t_SBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_SBASOrbitalElements::wrap_Object(SBASOrbitalElements(((t_SBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
