#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventOccurrence::class$ = NULL;
        jmethodID *EventOccurrence::mids$ = NULL;
        bool EventOccurrence::live$ = false;

        jclass EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3874a706f1894a3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getAction_e01ac4830bcfb38f] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_1af6e9f0600af276] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/ODEState;");
            mids$[mid_getStopTime_9981f74b2d109da6] = env->getMethodID(cls, "getStopTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventOccurrence::EventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3874a706f1894a3, a0.this$, a1.this$, a2)) {}

        ::org::hipparchus::ode::events::Action EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_e01ac4830bcfb38f]));
        }

        ::org::hipparchus::ode::ODEState EventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_getNewState_1af6e9f0600af276]));
        }

        jdouble EventOccurrence::getStopTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStopTime_9981f74b2d109da6]);
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
        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data);
        static PyGetSetDef t_EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventOccurrence, stopTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventOccurrence)[] = {
          { Py_tp_methods, t_EventOccurrence__methods_ },
          { Py_tp_init, (void *) t_EventOccurrence_init_ },
          { Py_tp_getset, t_EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventOccurrence, t_EventOccurrence, EventOccurrence);

        void t_EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventOccurrence), &PY_TYPE_DEF(EventOccurrence), module, "EventOccurrence", 0);
        }

        void t_EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "class_", make_descriptor(EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "wrapfn_", make_descriptor(t_EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventOccurrence::wrap_Object(EventOccurrence(((t_EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          EventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KkD", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &a2))
          {
            INT_CALL(object = EventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::ODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStopTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStopTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *MetadataKey::class$ = NULL;
          jmethodID *MetadataKey::mids$ = NULL;
          bool MetadataKey::live$ = false;
          MetadataKey *MetadataKey::COMMENT = NULL;
          MetadataKey *MetadataKey::TIME_SYSTEM = NULL;

          jclass MetadataKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/MetadataKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_aa1e999a3edfa2e0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Metadata;)Z");
              mids$[mid_valueOf_a3731eccdc877013] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/MetadataKey;");
              mids$[mid_values_14925f84c377b64b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/MetadataKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              COMMENT = new MetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              TIME_SYSTEM = new MetadataKey(env->getStaticObjectField(cls, "TIME_SYSTEM", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean MetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Metadata & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_aa1e999a3edfa2e0], a0.this$, a1.this$, a2.this$);
          }

          MetadataKey MetadataKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a3731eccdc877013], a0.this$));
          }

          JArray< MetadataKey > MetadataKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< MetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_14925f84c377b64b]));
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
        namespace section {
          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_MetadataKey_values(PyTypeObject *type);
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data);
          static PyGetSetDef t_MetadataKey__fields_[] = {
            DECLARE_GET_FIELD(t_MetadataKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MetadataKey__methods_[] = {
            DECLARE_METHOD(t_MetadataKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, process, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MetadataKey)[] = {
            { Py_tp_methods, t_MetadataKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MetadataKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MetadataKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(MetadataKey, t_MetadataKey, MetadataKey);
          PyObject *t_MetadataKey::wrap_Object(const MetadataKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MetadataKey::install(PyObject *module)
          {
            installType(&PY_TYPE(MetadataKey), &PY_TYPE_DEF(MetadataKey), module, "MetadataKey", 0);
          }

          void t_MetadataKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "class_", make_descriptor(MetadataKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "wrapfn_", make_descriptor(t_MetadataKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(MetadataKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "COMMENT", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "TIME_SYSTEM", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::TIME_SYSTEM)));
          }

          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MetadataKey::initializeClass, 1)))
              return NULL;
            return t_MetadataKey::wrap_Object(MetadataKey(((t_MetadataKey *) arg)->object.this$));
          }
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MetadataKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Metadata a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            MetadataKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::valueOf(a0));
              return t_MetadataKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_MetadataKey_values(PyTypeObject *type)
          {
            JArray< MetadataKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::values());
            return JArray<jobject>(result.this$).wrap(t_MetadataKey::wrap_jobject);
          }
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acos::class$ = NULL;
        jmethodID *Acos::mids$ = NULL;
        bool Acos::live$ = false;

        jclass Acos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acos::Acos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Acos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acos_value(t_Acos *self, PyObject *args);

        static PyMethodDef t_Acos__methods_[] = {
          DECLARE_METHOD(t_Acos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acos)[] = {
          { Py_tp_methods, t_Acos__methods_ },
          { Py_tp_init, (void *) t_Acos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acos, t_Acos, Acos);

        void t_Acos::install(PyObject *module)
        {
          installType(&PY_TYPE(Acos), &PY_TYPE_DEF(Acos), module, "Acos", 0);
        }

        void t_Acos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "class_", make_descriptor(Acos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "wrapfn_", make_descriptor(t_Acos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acos::initializeClass, 1)))
            return NULL;
          return t_Acos::wrap_Object(Acos(((t_Acos *) arg)->object.this$));
        }
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds)
        {
          Acos object((jobject) NULL);

          INT_CALL(object = Acos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acos_value(t_Acos *self, PyObject *args)
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
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleBased::class$ = NULL;
      jmethodID *PositionAngleBased::mids$ = NULL;
      bool PositionAngleBased::live$ = false;

      jclass PositionAngleBased::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleBased");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_5d34fcf76408ac01] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/PositionAngleBased;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::PositionAngleType PositionAngleBased::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      jboolean PositionAngleBased::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      PositionAngleBased PositionAngleBased::removeRates() const
      {
        return PositionAngleBased(env->callObjectMethod(this$, mids$[mid_removeRates_5d34fcf76408ac01]));
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
      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data);
      static PyGetSetDef t_PositionAngleBased__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleBased, cachedPositionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleBased__methods_[] = {
        DECLARE_METHOD(t_PositionAngleBased, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, removeRates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleBased)[] = {
        { Py_tp_methods, t_PositionAngleBased__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleBased__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleBased)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PositionAngleBased, t_PositionAngleBased, PositionAngleBased);

      void t_PositionAngleBased::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleBased), &PY_TYPE_DEF(PositionAngleBased), module, "PositionAngleBased", 0);
      }

      void t_PositionAngleBased::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "class_", make_descriptor(PositionAngleBased::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "wrapfn_", make_descriptor(t_PositionAngleBased::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleBased::initializeClass, 1)))
          return NULL;
        return t_PositionAngleBased::wrap_Object(PositionAngleBased(((t_PositionAngleBased *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleBased::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self)
      {
        PositionAngleBased result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_PositionAngleBased::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$FieldSumAndResidual::class$ = NULL;
      jmethodID *MathUtils$FieldSumAndResidual::mids$ = NULL;
      bool MathUtils$FieldSumAndResidual::live$ = false;

      jclass MathUtils$FieldSumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$FieldSumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_f6328613456309a1] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getSum_f6328613456309a1] = env->getMethodID(cls, "getSum", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getResidual() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getResidual_f6328613456309a1]));
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getSum() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getSum_f6328613456309a1]));
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
      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args);
      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$FieldSumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, sum),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$FieldSumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$FieldSumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$FieldSumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$FieldSumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$FieldSumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$FieldSumAndResidual, t_MathUtils$FieldSumAndResidual, MathUtils$FieldSumAndResidual);
      PyObject *t_MathUtils$FieldSumAndResidual::wrap_Object(const MathUtils$FieldSumAndResidual& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathUtils$FieldSumAndResidual::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathUtils$FieldSumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$FieldSumAndResidual), &PY_TYPE_DEF(MathUtils$FieldSumAndResidual), module, "MathUtils$FieldSumAndResidual", 0);
      }

      void t_MathUtils$FieldSumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "class_", make_descriptor(MathUtils$FieldSumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$FieldSumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$FieldSumAndResidual::wrap_Object(MathUtils$FieldSumAndResidual(((t_MathUtils$FieldSumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSum());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSum());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Byte.h"
#include "java/lang/Byte.h"
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Byte::class$ = NULL;
    jmethodID *Byte::mids$ = NULL;
    bool Byte::live$ = false;
    jint Byte::BYTES = (jint) 0;
    jbyte Byte::MAX_VALUE = (jbyte) 0;
    jbyte Byte::MIN_VALUE = (jbyte) 0;
    jint Byte::SIZE = (jint) 0;
    ::java::lang::Class *Byte::TYPE = NULL;

    jclass Byte::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Byte");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5b50806960ababe] = env->getMethodID(cls, "<init>", "(B)V");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_99cc7ebd515197d5] = env->getStaticMethodID(cls, "compare", "(BB)I");
        mids$[mid_compareTo_c59155d7582bf081] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Byte;)I");
        mids$[mid_compareUnsigned_99cc7ebd515197d5] = env->getStaticMethodID(cls, "compareUnsigned", "(BB)I");
        mids$[mid_decode_ef5aec5cf3811a5d] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_f003b7d37d8f9843] = env->getStaticMethodID(cls, "hashCode", "(B)I");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseByte_715a8d0c0cb07484] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;)B");
        mids$[mid_parseByte_142d028f14d5b71c] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;I)B");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_c342f43960e2117c] = env->getStaticMethodID(cls, "toString", "(B)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_f003b7d37d8f9843] = env->getStaticMethodID(cls, "toUnsignedInt", "(B)I");
        mids$[mid_toUnsignedLong_25347891c3cc3af6] = env->getStaticMethodID(cls, "toUnsignedLong", "(B)J");
        mids$[mid_valueOf_ef5aec5cf3811a5d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_valueOf_94cdbfda5299f8d3] = env->getStaticMethodID(cls, "valueOf", "(B)Ljava/lang/Byte;");
        mids$[mid_valueOf_6c43b756d047c483] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticByteField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticByteField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Byte::Byte(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Byte::Byte(jbyte a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_c5b50806960ababe, a0)) {}

    jbyte Byte::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Byte::compare(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_99cc7ebd515197d5], a0, a1);
    }

    jint Byte::compareTo(const Byte & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_c59155d7582bf081], a0.this$);
    }

    jint Byte::compareUnsigned(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_99cc7ebd515197d5], a0, a1);
    }

    Byte Byte::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_decode_ef5aec5cf3811a5d], a0.this$));
    }

    jdouble Byte::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Byte::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jfloat Byte::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    jint Byte::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Byte::hashCode(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_f003b7d37d8f9843], a0);
    }

    jint Byte::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jlong Byte::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_715a8d0c0cb07484], a0.this$);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_142d028f14d5b71c], a0.this$, a1);
    }

    jshort Byte::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    ::java::lang::String Byte::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Byte::toString(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c342f43960e2117c], a0));
    }

    jint Byte::toUnsignedInt(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_f003b7d37d8f9843], a0);
    }

    jlong Byte::toUnsignedLong(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_25347891c3cc3af6], a0);
    }

    Byte Byte::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ef5aec5cf3811a5d], a0.this$));
    }

    Byte Byte::valueOf(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_94cdbfda5299f8d3], a0));
    }

    Byte Byte::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6c43b756d047c483], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg);
    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Byte__methods_[] = {
      DECLARE_METHOD(t_Byte, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, compareTo, METH_O),
      DECLARE_METHOD(t_Byte, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, equals, METH_VARARGS),
      DECLARE_METHOD(t_Byte, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, parseByte, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Byte)[] = {
      { Py_tp_methods, t_Byte__methods_ },
      { Py_tp_init, (void *) t_Byte_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Byte)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Byte, t_Byte, Byte);

    void t_Byte::install(PyObject *module)
    {
      installType(&PY_TYPE(Byte), &PY_TYPE_DEF(Byte), module, "Byte", 0);
    }

    void t_Byte::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "class_", make_descriptor(Byte::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "wrapfn_", make_descriptor(unboxByte));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "boxfn_", make_descriptor(boxByte));
      env->getClass(Byte::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "BYTES", make_descriptor(Byte::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MAX_VALUE", make_descriptor(Byte::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MIN_VALUE", make_descriptor(Byte::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "SIZE", make_descriptor(Byte::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Byte::TYPE)));
    }

    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Byte::initializeClass, 1)))
        return NULL;
      return t_Byte::wrap_Object(Byte(((t_Byte *) arg)->object.this$));
    }
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Byte::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Byte(a0));
            self->object = object;
            break;
          }
        }
        {
          jbyte a0;
          Byte object((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            INT_CALL(object = Byte(a0));
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

    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg)
    {
      Byte a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Byte), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Byte result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::decode(a0));
        return t_Byte::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jint result;

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jbyte result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseByte", args);
      return NULL;
    }

    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jint result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jlong result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        {
          jbyte a0;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0, a1));
            return t_Byte::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryProjection::class$ = NULL;
        jmethodID *BoundaryProjection::mids$ = NULL;
        bool BoundaryProjection::live$ = false;

        jclass BoundaryProjection::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryProjection");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b1f3dfec7c533479] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;Lorg/hipparchus/geometry/Point;D)V");
            mids$[mid_getOffset_9981f74b2d109da6] = env->getMethodID(cls, "getOffset", "()D");
            mids$[mid_getOriginal_e843ca29d3ae6a7a] = env->getMethodID(cls, "getOriginal", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getProjected_e843ca29d3ae6a7a] = env->getMethodID(cls, "getProjected", "()Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BoundaryProjection::BoundaryProjection(const ::org::hipparchus::geometry::Point & a0, const ::org::hipparchus::geometry::Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1f3dfec7c533479, a0.this$, a1.this$, a2)) {}

        jdouble BoundaryProjection::getOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getOriginal() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getOriginal_e843ca29d3ae6a7a]));
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getProjected() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getProjected_e843ca29d3ae6a7a]));
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
        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args);
        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data);
        static PyGetSetDef t_BoundaryProjection__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryProjection, offset),
          DECLARE_GET_FIELD(t_BoundaryProjection, original),
          DECLARE_GET_FIELD(t_BoundaryProjection, projected),
          DECLARE_GET_FIELD(t_BoundaryProjection, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryProjection__methods_[] = {
          DECLARE_METHOD(t_BoundaryProjection, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOffset, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getProjected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryProjection)[] = {
          { Py_tp_methods, t_BoundaryProjection__methods_ },
          { Py_tp_init, (void *) t_BoundaryProjection_init_ },
          { Py_tp_getset, t_BoundaryProjection__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryProjection)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryProjection, t_BoundaryProjection, BoundaryProjection);
        PyObject *t_BoundaryProjection::wrap_Object(const BoundaryProjection& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryProjection::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryProjection::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryProjection), &PY_TYPE_DEF(BoundaryProjection), module, "BoundaryProjection", 0);
        }

        void t_BoundaryProjection::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "class_", make_descriptor(BoundaryProjection::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "wrapfn_", make_descriptor(t_BoundaryProjection::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryProjection::initializeClass, 1)))
            return NULL;
          return t_BoundaryProjection::wrap_Object(BoundaryProjection(((t_BoundaryProjection *) arg)->object.this$));
        }
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryProjection::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          BoundaryProjection object((jobject) NULL);

          if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &p1, ::org::hipparchus::geometry::t_Point::parameters_, &a2))
          {
            INT_CALL(object = BoundaryProjection(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOffset());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadata::class$ = NULL;
              jmethodID *AcmMetadata::mids$ = NULL;
              bool AcmMetadata::live$ = false;

              jclass AcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAcmDataElements_d751c1a57012b438] = env->getMethodID(cls, "getAcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_80e11148db499dda] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_80e11148db499dda] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_9981f74b2d109da6] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getObjectDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getOdmMessageLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getOdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getStartTime_80e11148db499dda] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_80e11148db499dda] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_9981f74b2d109da6] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_setAcmDataElements_aa335fea495d60e0] = env->getMethodID(cls, "setAcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_105e1eadb709d9ac] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_8497861b879c83f7] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_105e1eadb709d9ac] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_8497861b879c83f7] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setObjectDesignator_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setOdmMessageLink_105e1eadb709d9ac] = env->getMethodID(cls, "setOdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorAddress_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setStartTime_8497861b879c83f7] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_8497861b879c83f7] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmMetadata::AcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

              ::java::util::List AcmMetadata::getAcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAcmDataElements_d751c1a57012b438]));
              }

              ::java::lang::String AcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_80e11148db499dda]));
              }

              ::java::lang::String AcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_80e11148db499dda]));
              }

              jdouble AcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_9981f74b2d109da6]);
              }

              ::java::lang::String AcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMessageLink_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_d2c8eb4129821f0e]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_80e11148db499dda]));
              }

              jdouble AcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_9981f74b2d109da6]);
              }

              void AcmMetadata::setAcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcmDataElements_aa335fea495d60e0], a0.this$);
              }

              void AcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_8497861b879c83f7], a0.this$);
              }

              void AcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_8497861b879c83f7], a0.this$);
              }

              void AcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_1ad26e8c8c0cd65b], a0);
              }

              void AcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOdmMessageLink_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_105e1eadb709d9ac], a0.this$);
              }

              void AcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_8497861b879c83f7], a0.this$);
              }

              void AcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_8497861b879c83f7], a0.this$);
              }

              void AcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_1ad26e8c8c0cd65b], a0);
              }

              void AcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            namespace acm {
              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args);
              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AcmMetadata, acmDataElements),
                DECLARE_GETSET_FIELD(t_AcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_AcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_AcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_AcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, odmMessageLink),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_AcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, taimutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadata__methods_[] = {
                DECLARE_METHOD(t_AcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, getAcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, setAcmDataElements, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOdmMessageLink, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadata)[] = {
                { Py_tp_methods, t_AcmMetadata__methods_ },
                { Py_tp_init, (void *) t_AcmMetadata_init_ },
                { Py_tp_getset, t_AcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AcmMetadata, t_AcmMetadata, AcmMetadata);

              void t_AcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadata), &PY_TYPE_DEF(AcmMetadata), module, "AcmMetadata", 0);
              }

              void t_AcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "class_", make_descriptor(AcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "wrapfn_", make_descriptor(t_AcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadata::wrap_Object(AcmMetadata(((t_AcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                AcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = AcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmElements));
              }

              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCatalogName(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInternationalDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInternationalDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextLeapEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapEpoch", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNextLeapTaimutc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapTaimutc", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setObjectDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorAddress", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorEmail", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPOC", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPhone", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPosition", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTaimutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTaimutcT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "acmDataElements", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCatalogName(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochT0", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInternationalDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "internationalDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextLeapEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapEpoch", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNextLeapTaimutc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapTaimutc", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setObjectDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOdmMessageLink());
                return j2p(value);
              }
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "odmMessageLink", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorAddress", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorEmail", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPOC", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPhone", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPosition", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTaimutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "taimutcT0", arg);
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
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNodeDetector::class$ = NULL;
        jmethodID *FieldNodeDetector::mids$ = NULL;
        bool FieldNodeDetector::live$ = false;

        jclass FieldNodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3aebf44bf40fb6c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_bf31c9574069ec34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_00687c75c1763127] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNodeDetector::FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3aebf44bf40fb6c1, a0.this$, a1.this$)) {}

        FieldNodeDetector::FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bf31c9574069ec34, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNodeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::frames::Frame FieldNodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args);
        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args);
        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self);
        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data);
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data);
        static PyGetSetDef t_FieldNodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNodeDetector, frame),
          DECLARE_GET_FIELD(t_FieldNodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNodeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNodeDetector)[] = {
          { Py_tp_methods, t_FieldNodeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNodeDetector_init_ },
          { Py_tp_getset, t_FieldNodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNodeDetector, t_FieldNodeDetector, FieldNodeDetector);
        PyObject *t_FieldNodeDetector::wrap_Object(const FieldNodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNodeDetector), &PY_TYPE_DEF(FieldNodeDetector), module, "FieldNodeDetector", 0);
        }

        void t_FieldNodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "class_", make_descriptor(FieldNodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "wrapfn_", make_descriptor(t_FieldNodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNodeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNodeDetector::wrap_Object(FieldNodeDetector(((t_FieldNodeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1, a2));
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

        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *UserDefinedXmlTokenBuilder::class$ = NULL;
            jmethodID *UserDefinedXmlTokenBuilder::mids$ = NULL;
            bool UserDefinedXmlTokenBuilder::live$ = false;

            jclass UserDefinedXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedXmlTokenBuilder::UserDefinedXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::java::util::List UserDefinedXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_bb6f0a25fbefd346], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_UserDefinedXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedXmlTokenBuilder)[] = {
              { Py_tp_methods, t_UserDefinedXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_UserDefinedXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserDefinedXmlTokenBuilder, t_UserDefinedXmlTokenBuilder, UserDefinedXmlTokenBuilder);

            void t_UserDefinedXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedXmlTokenBuilder), &PY_TYPE_DEF(UserDefinedXmlTokenBuilder), module, "UserDefinedXmlTokenBuilder", 0);
            }

            void t_UserDefinedXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "class_", make_descriptor(UserDefinedXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "wrapfn_", make_descriptor(t_UserDefinedXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_UserDefinedXmlTokenBuilder::wrap_Object(UserDefinedXmlTokenBuilder(((t_UserDefinedXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              UserDefinedXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = UserDefinedXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args)
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
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFieldStaticTransform::class$ = NULL;
      jmethodID *PythonFieldStaticTransform::mids$ = NULL;
      bool PythonFieldStaticTransform::live$ = false;

      jclass PythonFieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_bfbe5d9ed8a9e205] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_5c8e6f300713559c] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_d1b42a6748e907f9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldStaticTransform::PythonFieldStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldStaticTransform::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args);
      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self);
      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data);
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data);
      static PyGetSetDef t_PythonFieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, self),
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonFieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldStaticTransform)[] = {
        { Py_tp_methods, t_PythonFieldStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonFieldStaticTransform_init_ },
        { Py_tp_getset, t_PythonFieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldStaticTransform, t_PythonFieldStaticTransform, PythonFieldStaticTransform);
      PyObject *t_PythonFieldStaticTransform::wrap_Object(const PythonFieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldStaticTransform), &PY_TYPE_DEF(PythonFieldStaticTransform), module, "PythonFieldStaticTransform", 1);
      }

      void t_PythonFieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "class_", make_descriptor(PythonFieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "wrapfn_", make_descriptor(t_PythonFieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonFieldStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;", (void *) t_PythonFieldStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonFieldStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonFieldStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonFieldStaticTransform::wrap_Object(PythonFieldStaticTransform(((t_PythonFieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonFieldStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldStaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldStaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data)
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
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataKey::class$ = NULL;
            jmethodID *CdmMetadataKey::mids$ = NULL;
            bool CdmMetadataKey::live$ = false;
            CdmMetadataKey *CdmMetadataKey::ADM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::ATMOSPHERIC_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::CATALOG_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_METHOD = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_SOURCE = NULL;
            CdmMetadataKey *CdmMetadataKey::EARTH_TIDES = NULL;
            CdmMetadataKey *CdmMetadataKey::EPHEMERIS_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::GRAVITY_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::INTRACK_THRUST = NULL;
            CdmMetadataKey *CdmMetadataKey::MANEUVERABLE = NULL;
            CdmMetadataKey *CdmMetadataKey::N_BODY_PERTURBATIONS = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE = NULL;
            CdmMetadataKey *CdmMetadataKey::ODM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_CONTACT_POSITION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_EMAIL = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_ORGANIZATION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_PHONE = NULL;
            CdmMetadataKey *CdmMetadataKey::ORBIT_CENTER = NULL;
            CdmMetadataKey *CdmMetadataKey::REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::SOLAR_RAD_PRESSURE = NULL;

            jclass CdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_09ba153477c5d329] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)Z");
                mids$[mid_valueOf_ed35c0e5072acc3e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");
                mids$[mid_values_8eec49f122ddb7f6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ADM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ATMOSPHERIC_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                CATALOG_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_METHOD = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_SOURCE = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EARTH_TIDES = new CdmMetadataKey(env->getStaticObjectField(cls, "EARTH_TIDES", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EPHEMERIS_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                GRAVITY_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTERNATIONAL_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTRACK_THRUST = new CdmMetadataKey(env->getStaticObjectField(cls, "INTRACK_THRUST", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                MANEUVERABLE = new CdmMetadataKey(env->getStaticObjectField(cls, "MANEUVERABLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                N_BODY_PERTURBATIONS = new CdmMetadataKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBS_BEFORE_NEXT_MESSAGE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBS_BEFORE_NEXT_MESSAGE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ODM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_CONTACT_POSITION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_CONTACT_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_EMAIL = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_ORGANIZATION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_ORGANIZATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_PHONE = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ORBIT_CENTER = new CdmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CENTER", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                SOLAR_RAD_PRESSURE = new CdmMetadataKey(env->getStaticObjectField(cls, "SOLAR_RAD_PRESSURE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_09ba153477c5d329], a0.this$, a1.this$, a2.this$);
            }

            CdmMetadataKey CdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed35c0e5072acc3e], a0.this$));
            }

            JArray< CdmMetadataKey > CdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8eec49f122ddb7f6]));
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
            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data);
            static PyGetSetDef t_CdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataKey)[] = {
              { Py_tp_methods, t_CdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmMetadataKey, t_CdmMetadataKey, CdmMetadataKey);
            PyObject *t_CdmMetadataKey::wrap_Object(const CdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataKey), &PY_TYPE_DEF(CdmMetadataKey), module, "CdmMetadataKey", 0);
            }

            void t_CdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "class_", make_descriptor(CdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "wrapfn_", make_descriptor(t_CdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ADM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ATMOSPHERIC_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ATMOSPHERIC_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "CATALOG_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::CATALOG_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_METHOD", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_SOURCE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_SOURCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EARTH_TIDES", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EARTH_TIDES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EPHEMERIS_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EPHEMERIS_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "GRAVITY_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::GRAVITY_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTERNATIONAL_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTRACK_THRUST", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTRACK_THRUST)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "MANEUVERABLE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::MANEUVERABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "N_BODY_PERTURBATIONS", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::N_BODY_PERTURBATIONS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBS_BEFORE_NEXT_MESSAGE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ODM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_CONTACT_POSITION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_CONTACT_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_EMAIL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_EMAIL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_ORGANIZATION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_ORGANIZATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_PHONE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_PHONE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ORBIT_CENTER", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ORBIT_CENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "SOLAR_RAD_PRESSURE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::SOLAR_RAD_PRESSURE)));
            }

            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataKey::wrap_Object(CdmMetadataKey(((t_CdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::valueOf(a0));
                return t_CdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUp::class$ = NULL;
          jmethodID *WindUp::mids$ = NULL;
          bool WindUp::live$ = false;

          jclass WindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_f462106a6ca97aca] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_f462106a6ca97aca] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

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
          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args);
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data);
          static PyGetSetDef t_WindUp__fields_[] = {
            DECLARE_GET_FIELD(t_WindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WindUp__methods_[] = {
            DECLARE_METHOD(t_WindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUp)[] = {
            { Py_tp_methods, t_WindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_WindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(WindUp, t_WindUp, WindUp);
          PyObject *t_WindUp::wrap_Object(const WindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUp), &PY_TYPE_DEF(WindUp), module, "WindUp", 0);
          }

          void t_WindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "class_", make_descriptor(WindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "wrapfn_", make_descriptor(t_WindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUp::initializeClass, 1)))
              return NULL;
            return t_WindUp::wrap_Object(WindUp(((t_WindUp *) arg)->object.this$));
          }
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *Theta::class$ = NULL;
          jmethodID *Theta::mids$ = NULL;
          bool Theta::live$ = false;

          jclass Theta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/Theta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_847706ebd9444ecb] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta2_847706ebd9444ecb] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta3_847706ebd9444ecb] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta4_847706ebd9444ecb] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/complex/Complex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex Theta::theta1() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta1_847706ebd9444ecb]));
          }

          ::org::hipparchus::complex::Complex Theta::theta2() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta2_847706ebd9444ecb]));
          }

          ::org::hipparchus::complex::Complex Theta::theta3() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta3_847706ebd9444ecb]));
          }

          ::org::hipparchus::complex::Complex Theta::theta4() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta4_847706ebd9444ecb]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_theta1(t_Theta *self);
          static PyObject *t_Theta_theta2(t_Theta *self);
          static PyObject *t_Theta_theta3(t_Theta *self);
          static PyObject *t_Theta_theta4(t_Theta *self);

          static PyMethodDef t_Theta__methods_[] = {
            DECLARE_METHOD(t_Theta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Theta)[] = {
            { Py_tp_methods, t_Theta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Theta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Theta, t_Theta, Theta);

          void t_Theta::install(PyObject *module)
          {
            installType(&PY_TYPE(Theta), &PY_TYPE_DEF(Theta), module, "Theta", 0);
          }

          void t_Theta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "class_", make_descriptor(Theta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "wrapfn_", make_descriptor(t_Theta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Theta::initializeClass, 1)))
              return NULL;
            return t_Theta::wrap_Object(Theta(((t_Theta *) arg)->object.this$));
          }
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Theta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Theta_theta1(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta2(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta3(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta4(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *StaticTransform::class$ = NULL;
      jmethodID *StaticTransform::mids$ = NULL;
      bool StaticTransform::live$ = false;

      jclass StaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/StaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_6b0bfb2dd341a96e] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_compositeRotation_ecfeec6247167490] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_compositeTranslation_0790dea5478dfcd9] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getIdentity_4707295cf0323d2d] = env->getStaticMethodID(cls, "getIdentity", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getInverse_4707295cf0323d2d] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_032312bdeb3f2f93] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_of_393b3689e1280c7c] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_46ea5ea7380cdd86] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_8587fe0e07620421] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformLine_450cf7eaaaca6326] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
          mids$[mid_transformPosition_df37e4d755ff0467] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_53c542efd8574582] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transformVector_df37e4d755ff0467] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_53c542efd8574582] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StaticTransform StaticTransform::compose(const ::org::orekit::time::AbsoluteDate & a0, const StaticTransform & a1, const StaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_6b0bfb2dd341a96e], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::compositeRotation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_ecfeec6247167490], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::compositeTranslation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_0790dea5478dfcd9], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::getIdentity()
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_4707295cf0323d2d]));
      }

      StaticTransform StaticTransform::getInverse() const
      {
        return StaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_4707295cf0323d2d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_4d68cff5f6e4403a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_032312bdeb3f2f93]));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_393b3689e1280c7c], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_46ea5ea7380cdd86], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_8587fe0e07620421], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Line StaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_transformLine_450cf7eaaaca6326], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_df37e4d755ff0467], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_53c542efd8574582], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_df37e4d755ff0467], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformVector_53c542efd8574582], a0.this$));
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
      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type);
      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg);
      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data);
      static PyGetSetDef t_StaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_StaticTransform, identity),
        DECLARE_GET_FIELD(t_StaticTransform, inverse),
        DECLARE_GET_FIELD(t_StaticTransform, rotation),
        DECLARE_GET_FIELD(t_StaticTransform, translation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StaticTransform__methods_[] = {
        DECLARE_METHOD(t_StaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getIdentity, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, transformLine, METH_O),
        DECLARE_METHOD(t_StaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_StaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StaticTransform)[] = {
        { Py_tp_methods, t_StaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_StaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(StaticTransform, t_StaticTransform, StaticTransform);

      void t_StaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(StaticTransform), &PY_TYPE_DEF(StaticTransform), module, "StaticTransform", 0);
      }

      void t_StaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "class_", make_descriptor(StaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "wrapfn_", make_descriptor(t_StaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StaticTransform::initializeClass, 1)))
          return NULL;
        return t_StaticTransform::wrap_Object(StaticTransform(((t_StaticTransform *) arg)->object.this$));
      }
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        StaticTransform a2((jobject) NULL);
        StaticTransform result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compose(a0, a1, a2));
          return t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::StaticTransform::getIdentity());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1, a2));
              return t_StaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transformLine(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", arg);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getIdentity());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *DoubleDihedraFieldOfView::class$ = NULL;
        jmethodID *DoubleDihedraFieldOfView::mids$ = NULL;
        bool DoubleDihedraFieldOfView::live$ = false;

        jclass DoubleDihedraFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/DoubleDihedraFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d0e4d7ab8d8878b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DoubleDihedraFieldOfView::DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5) : ::org::orekit::geometry::fov::PolygonalFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_3d0e4d7ab8d8878b, a0.this$, a1.this$, a2, a3.this$, a4, a5)) {}
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
        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DoubleDihedraFieldOfView__methods_[] = {
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DoubleDihedraFieldOfView)[] = {
          { Py_tp_methods, t_DoubleDihedraFieldOfView__methods_ },
          { Py_tp_init, (void *) t_DoubleDihedraFieldOfView_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DoubleDihedraFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::PolygonalFieldOfView),
          NULL
        };

        DEFINE_TYPE(DoubleDihedraFieldOfView, t_DoubleDihedraFieldOfView, DoubleDihedraFieldOfView);

        void t_DoubleDihedraFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(DoubleDihedraFieldOfView), &PY_TYPE_DEF(DoubleDihedraFieldOfView), module, "DoubleDihedraFieldOfView", 0);
        }

        void t_DoubleDihedraFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "class_", make_descriptor(DoubleDihedraFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "wrapfn_", make_descriptor(t_DoubleDihedraFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 1)))
            return NULL;
          return t_DoubleDihedraFieldOfView::wrap_Object(DoubleDihedraFieldOfView(((t_DoubleDihedraFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          DoubleDihedraFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDkDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = DoubleDihedraFieldOfView(a0, a1, a2, a3, a4, a5));
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
#include "org/orekit/time/Month.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *Month::class$ = NULL;
      jmethodID *Month::mids$ = NULL;
      bool Month::live$ = false;
      Month *Month::APRIL = NULL;
      Month *Month::AUGUST = NULL;
      Month *Month::DECEMBER = NULL;
      Month *Month::FEBRUARY = NULL;
      Month *Month::JANUARY = NULL;
      Month *Month::JULY = NULL;
      Month *Month::JUNE = NULL;
      Month *Month::MARCH = NULL;
      Month *Month::MAY = NULL;
      Month *Month::NOVEMBER = NULL;
      Month *Month::OCTOBER = NULL;
      Month *Month::SEPTEMBER = NULL;

      jclass Month::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/Month");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCapitalizedAbbreviation_d2c8eb4129821f0e] = env->getMethodID(cls, "getCapitalizedAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getCapitalizedName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCapitalizedName", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseAbbreviation_d2c8eb4129821f0e] = env->getMethodID(cls, "getLowerCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseName_d2c8eb4129821f0e] = env->getMethodID(cls, "getLowerCaseName", "()Ljava/lang/String;");
          mids$[mid_getMonth_30e61ab36d9e0db0] = env->getStaticMethodID(cls, "getMonth", "(I)Lorg/orekit/time/Month;");
          mids$[mid_getNumber_d6ab429752e7c267] = env->getMethodID(cls, "getNumber", "()I");
          mids$[mid_getUpperCaseAbbreviation_d2c8eb4129821f0e] = env->getMethodID(cls, "getUpperCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getUpperCaseName_d2c8eb4129821f0e] = env->getMethodID(cls, "getUpperCaseName", "()Ljava/lang/String;");
          mids$[mid_parseMonth_3656902fd95cab6b] = env->getStaticMethodID(cls, "parseMonth", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_valueOf_3656902fd95cab6b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_values_0001050b6c96babc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/time/Month;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          APRIL = new Month(env->getStaticObjectField(cls, "APRIL", "Lorg/orekit/time/Month;"));
          AUGUST = new Month(env->getStaticObjectField(cls, "AUGUST", "Lorg/orekit/time/Month;"));
          DECEMBER = new Month(env->getStaticObjectField(cls, "DECEMBER", "Lorg/orekit/time/Month;"));
          FEBRUARY = new Month(env->getStaticObjectField(cls, "FEBRUARY", "Lorg/orekit/time/Month;"));
          JANUARY = new Month(env->getStaticObjectField(cls, "JANUARY", "Lorg/orekit/time/Month;"));
          JULY = new Month(env->getStaticObjectField(cls, "JULY", "Lorg/orekit/time/Month;"));
          JUNE = new Month(env->getStaticObjectField(cls, "JUNE", "Lorg/orekit/time/Month;"));
          MARCH = new Month(env->getStaticObjectField(cls, "MARCH", "Lorg/orekit/time/Month;"));
          MAY = new Month(env->getStaticObjectField(cls, "MAY", "Lorg/orekit/time/Month;"));
          NOVEMBER = new Month(env->getStaticObjectField(cls, "NOVEMBER", "Lorg/orekit/time/Month;"));
          OCTOBER = new Month(env->getStaticObjectField(cls, "OCTOBER", "Lorg/orekit/time/Month;"));
          SEPTEMBER = new Month(env->getStaticObjectField(cls, "SEPTEMBER", "Lorg/orekit/time/Month;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Month::getCapitalizedAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedAbbreviation_d2c8eb4129821f0e]));
      }

      ::java::lang::String Month::getCapitalizedName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedName_d2c8eb4129821f0e]));
      }

      ::java::lang::String Month::getLowerCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseAbbreviation_d2c8eb4129821f0e]));
      }

      ::java::lang::String Month::getLowerCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseName_d2c8eb4129821f0e]));
      }

      Month Month::getMonth(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_getMonth_30e61ab36d9e0db0], a0));
      }

      jint Month::getNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumber_d6ab429752e7c267]);
      }

      ::java::lang::String Month::getUpperCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseAbbreviation_d2c8eb4129821f0e]));
      }

      ::java::lang::String Month::getUpperCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseName_d2c8eb4129821f0e]));
      }

      Month Month::parseMonth(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_parseMonth_3656902fd95cab6b], a0.this$));
      }

      Month Month::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3656902fd95cab6b], a0.this$));
      }

      JArray< Month > Month::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Month >(env->callStaticObjectMethod(cls, mids$[mid_values_0001050b6c96babc]));
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
      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_of_(t_Month *self, PyObject *args);
      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self);
      static PyObject *t_Month_getCapitalizedName(t_Month *self);
      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getLowerCaseName(t_Month *self);
      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_getNumber(t_Month *self);
      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getUpperCaseName(t_Month *self);
      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Month_values(PyTypeObject *type);
      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__number(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data);
      static PyGetSetDef t_Month__fields_[] = {
        DECLARE_GET_FIELD(t_Month, capitalizedAbbreviation),
        DECLARE_GET_FIELD(t_Month, capitalizedName),
        DECLARE_GET_FIELD(t_Month, lowerCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, lowerCaseName),
        DECLARE_GET_FIELD(t_Month, number),
        DECLARE_GET_FIELD(t_Month, upperCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, upperCaseName),
        DECLARE_GET_FIELD(t_Month, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Month__methods_[] = {
        DECLARE_METHOD(t_Month, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, of_, METH_VARARGS),
        DECLARE_METHOD(t_Month, getCapitalizedAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getCapitalizedName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, getNumber, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, parseMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Month, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Month)[] = {
        { Py_tp_methods, t_Month__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Month__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Month)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Month, t_Month, Month);
      PyObject *t_Month::wrap_Object(const Month& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Month::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Month::install(PyObject *module)
      {
        installType(&PY_TYPE(Month), &PY_TYPE_DEF(Month), module, "Month", 0);
      }

      void t_Month::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "class_", make_descriptor(Month::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "wrapfn_", make_descriptor(t_Month::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "boxfn_", make_descriptor(boxObject));
        env->getClass(Month::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "APRIL", make_descriptor(t_Month::wrap_Object(*Month::APRIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "AUGUST", make_descriptor(t_Month::wrap_Object(*Month::AUGUST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "DECEMBER", make_descriptor(t_Month::wrap_Object(*Month::DECEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "FEBRUARY", make_descriptor(t_Month::wrap_Object(*Month::FEBRUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JANUARY", make_descriptor(t_Month::wrap_Object(*Month::JANUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JULY", make_descriptor(t_Month::wrap_Object(*Month::JULY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JUNE", make_descriptor(t_Month::wrap_Object(*Month::JUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MARCH", make_descriptor(t_Month::wrap_Object(*Month::MARCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MAY", make_descriptor(t_Month::wrap_Object(*Month::MAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "NOVEMBER", make_descriptor(t_Month::wrap_Object(*Month::NOVEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "OCTOBER", make_descriptor(t_Month::wrap_Object(*Month::OCTOBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "SEPTEMBER", make_descriptor(t_Month::wrap_Object(*Month::SEPTEMBER)));
      }

      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Month::initializeClass, 1)))
          return NULL;
        return t_Month::wrap_Object(Month(((t_Month *) arg)->object.this$));
      }
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Month::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Month_of_(t_Month *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getCapitalizedName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedName());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        Month result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::getMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_getNumber(t_Month *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getUpperCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::parseMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::valueOf(a0));
          return t_Month::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Month_values(PyTypeObject *type)
      {
        JArray< Month > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::Month::values());
        return JArray<jobject>(result.this$).wrap(t_Month::wrap_jobject);
      }
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedName());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseName());
        return j2p(value);
      }

      static PyObject *t_Month_get__number(t_Month *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Boolean.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction::class$ = NULL;
      jmethodID *BigFraction::mids$ = NULL;
      bool BigFraction::live$ = false;
      BigFraction *BigFraction::FOUR_FIFTHS = NULL;
      BigFraction *BigFraction::MINUS_ONE = NULL;
      BigFraction *BigFraction::ONE = NULL;
      BigFraction *BigFraction::ONE_FIFTH = NULL;
      BigFraction *BigFraction::ONE_HALF = NULL;
      BigFraction *BigFraction::ONE_QUARTER = NULL;
      BigFraction *BigFraction::ONE_THIRD = NULL;
      BigFraction *BigFraction::THREE_FIFTHS = NULL;
      BigFraction *BigFraction::THREE_QUARTERS = NULL;
      BigFraction *BigFraction::TWO = NULL;
      BigFraction *BigFraction::TWO_FIFTHS = NULL;
      BigFraction *BigFraction::TWO_QUARTERS = NULL;
      BigFraction *BigFraction::TWO_THIRDS = NULL;
      BigFraction *BigFraction::ZERO = NULL;

      jclass BigFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_242be705ced18dc0] = env->getMethodID(cls, "<init>", "(DJ)V");
          mids$[mid_init$_8d15eb7d155f3768] = env->getMethodID(cls, "<init>", "(JJ)V");
          mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_f9f39221bd88c021] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_80223138235de85f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_9c4d7540ae70f6e0] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_7074c12be2b48097] = env->getMethodID(cls, "add", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_compareTo_c11007b8674ea26b] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/BigFraction;)I");
          mids$[mid_convergent_8a9f3a38eb05d8ed] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/BigFraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_df90c0ab75ef97f0] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_80223138235de85f] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_9c4d7540ae70f6e0] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_7074c12be2b48097] = env->getMethodID(cls, "divide", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominatorAsInt_d6ab429752e7c267] = env->getMethodID(cls, "getDenominatorAsInt", "()I");
          mids$[mid_getDenominatorAsLong_42c72b98e3c2e08a] = env->getMethodID(cls, "getDenominatorAsLong", "()J");
          mids$[mid_getField_31dd0998fe2402b3] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getNumeratorAsInt_d6ab429752e7c267] = env->getMethodID(cls, "getNumeratorAsInt", "()I");
          mids$[mid_getNumeratorAsLong_42c72b98e3c2e08a] = env->getMethodID(cls, "getNumeratorAsLong", "()J");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_efa66996e67742d4] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_eee3de00fe971136] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_80223138235de85f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_9c4d7540ae70f6e0] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_7074c12be2b48097] = env->getMethodID(cls, "multiply", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_negate_f9f39221bd88c021] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_percentageValue_9981f74b2d109da6] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_pow_bf28ed64d6e8576b] = env->getMethodID(cls, "pow", "(D)D");
          mids$[mid_pow_9c4d7540ae70f6e0] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_pow_7074c12be2b48097] = env->getMethodID(cls, "pow", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reciprocal_f9f39221bd88c021] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reduce_f9f39221bd88c021] = env->getMethodID(cls, "reduce", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_signum_d6ab429752e7c267] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_80223138235de85f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_9c4d7540ae70f6e0] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_7074c12be2b48097] = env->getMethodID(cls, "subtract", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          MINUS_ONE = new BigFraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE = new BigFraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_FIFTH = new BigFraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_HALF = new BigFraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_QUARTER = new BigFraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_THIRD = new BigFraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO = new BigFraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_THIRDS = new BigFraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/BigFraction;"));
          ZERO = new BigFraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/BigFraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFraction::BigFraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      BigFraction::BigFraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      BigFraction::BigFraction(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      BigFraction::BigFraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_242be705ced18dc0, a0, a1)) {}

      BigFraction::BigFraction(jlong a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8d15eb7d155f3768, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

      BigFraction BigFraction::abs() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_abs_f9f39221bd88c021]));
      }

      BigFraction BigFraction::add(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_80223138235de85f], a0.this$));
      }

      BigFraction BigFraction::add(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_9c4d7540ae70f6e0], a0));
      }

      BigFraction BigFraction::add(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_7074c12be2b48097], a0));
      }

      jint BigFraction::compareTo(const BigFraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_c11007b8674ea26b], a0.this$);
      }

      ::org::hipparchus::util::Pair BigFraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_8a9f3a38eb05d8ed], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream BigFraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_df90c0ab75ef97f0], a0, a1));
      }

      BigFraction BigFraction::divide(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_80223138235de85f], a0.this$));
      }

      BigFraction BigFraction::divide(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_9c4d7540ae70f6e0], a0));
      }

      BigFraction BigFraction::divide(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_7074c12be2b48097], a0));
      }

      jdouble BigFraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
      }

      jboolean BigFraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jfloat BigFraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
      }

      jint BigFraction::getDenominatorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominatorAsInt_d6ab429752e7c267]);
      }

      jlong BigFraction::getDenominatorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getDenominatorAsLong_42c72b98e3c2e08a]);
      }

      ::org::hipparchus::fraction::BigFractionField BigFraction::getField() const
      {
        return ::org::hipparchus::fraction::BigFractionField(env->callObjectMethod(this$, mids$[mid_getField_31dd0998fe2402b3]));
      }

      jint BigFraction::getNumeratorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumeratorAsInt_d6ab429752e7c267]);
      }

      jlong BigFraction::getNumeratorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getNumeratorAsLong_42c72b98e3c2e08a]);
      }

      jdouble BigFraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      BigFraction BigFraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_efa66996e67742d4], a0, a1));
      }

      jint BigFraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jint BigFraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
      }

      jboolean BigFraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_eee3de00fe971136]);
      }

      jlong BigFraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
      }

      BigFraction BigFraction::multiply(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_80223138235de85f], a0.this$));
      }

      BigFraction BigFraction::multiply(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_9c4d7540ae70f6e0], a0));
      }

      BigFraction BigFraction::multiply(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_7074c12be2b48097], a0));
      }

      BigFraction BigFraction::negate() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_negate_f9f39221bd88c021]));
      }

      jdouble BigFraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_9981f74b2d109da6]);
      }

      jdouble BigFraction::pow(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_pow_bf28ed64d6e8576b], a0);
      }

      BigFraction BigFraction::pow(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_9c4d7540ae70f6e0], a0));
      }

      BigFraction BigFraction::pow(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_7074c12be2b48097], a0));
      }

      BigFraction BigFraction::reciprocal() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reciprocal_f9f39221bd88c021]));
      }

      BigFraction BigFraction::reduce() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reduce_f9f39221bd88c021]));
      }

      jint BigFraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_d6ab429752e7c267]);
      }

      BigFraction BigFraction::subtract(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_80223138235de85f], a0.this$));
      }

      BigFraction BigFraction::subtract(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_9c4d7540ae70f6e0], a0));
      }

      BigFraction BigFraction::subtract(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_7074c12be2b48097], a0));
      }

      ::java::lang::String BigFraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFraction_abs(t_BigFraction *self);
      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg);
      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getField(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getReal(t_BigFraction *self);
      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_isInteger(t_BigFraction *self);
      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_negate(t_BigFraction *self);
      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self);
      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self);
      static PyObject *t_BigFraction_reduce(t_BigFraction *self);
      static PyObject *t_BigFraction_signum(t_BigFraction *self);
      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data);
      static PyGetSetDef t_BigFraction__fields_[] = {
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, field),
        DECLARE_GET_FIELD(t_BigFraction, integer),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFraction__methods_[] = {
        DECLARE_METHOD(t_BigFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, add, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, compareTo, METH_O),
        DECLARE_METHOD(t_BigFraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, pow, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, reduce, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction)[] = {
        { Py_tp_methods, t_BigFraction__methods_ },
        { Py_tp_init, (void *) t_BigFraction_init_ },
        { Py_tp_getset, t_BigFraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(BigFraction, t_BigFraction, BigFraction);

      void t_BigFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction), &PY_TYPE_DEF(BigFraction), module, "BigFraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(BigFraction$ConvergenceTest)));
      }

      void t_BigFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "class_", make_descriptor(BigFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "wrapfn_", make_descriptor(t_BigFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigFraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "FOUR_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "MINUS_ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_FIFTH", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_HALF", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_QUARTER", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_THIRD", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_THIRDS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ZERO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ZERO)));
      }

      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction::initializeClass, 1)))
          return NULL;
        return t_BigFraction::wrap_Object(BigFraction(((t_BigFraction *) arg)->object.this$));
      }
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = BigFraction(a0, a1, a2));
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

      static PyObject *t_BigFraction_abs(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg)
      {
        BigFraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::BigFraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::BigFraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getField(t_BigFraction *self)
      {
        ::org::hipparchus::fraction::BigFractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getReal(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        BigFraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::getReducedFraction(a0, a1));
          return t_BigFraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_BigFraction_isInteger(t_BigFraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigFraction_negate(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_reduce(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reduce());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_signum(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data)
      {
        ::org::hipparchus::fraction::BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *NevilleInterpolator::class$ = NULL;
        jmethodID *NevilleInterpolator::mids$ = NULL;
        bool NevilleInterpolator::live$ = false;

        jclass NevilleInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/NevilleInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_7784d9983c5d3f27] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NevilleInterpolator::NevilleInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm NevilleInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm(env->callObjectMethod(this$, mids$[mid_interpolate_7784d9983c5d3f27], a0.this$, a1.this$));
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
        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args);

        static PyMethodDef t_NevilleInterpolator__methods_[] = {
          DECLARE_METHOD(t_NevilleInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NevilleInterpolator)[] = {
          { Py_tp_methods, t_NevilleInterpolator__methods_ },
          { Py_tp_init, (void *) t_NevilleInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NevilleInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NevilleInterpolator, t_NevilleInterpolator, NevilleInterpolator);

        void t_NevilleInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(NevilleInterpolator), &PY_TYPE_DEF(NevilleInterpolator), module, "NevilleInterpolator", 0);
        }

        void t_NevilleInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "class_", make_descriptor(NevilleInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "wrapfn_", make_descriptor(t_NevilleInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NevilleInterpolator::initializeClass, 1)))
            return NULL;
          return t_NevilleInterpolator::wrap_Object(NevilleInterpolator(((t_NevilleInterpolator *) arg)->object.this$));
        }
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NevilleInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds)
        {
          NevilleInterpolator object((jobject) NULL);

          INT_CALL(object = NevilleInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionLagrangeForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *HatanakaCompressFilter::class$ = NULL;
        jmethodID *HatanakaCompressFilter::mids$ = NULL;
        bool HatanakaCompressFilter::live$ = false;

        jclass HatanakaCompressFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/HatanakaCompressFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HatanakaCompressFilter::HatanakaCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::data::DataSource HatanakaCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_4edc3983a04dd819], a0.this$));
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
        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg);

        static PyMethodDef t_HatanakaCompressFilter__methods_[] = {
          DECLARE_METHOD(t_HatanakaCompressFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, filter, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HatanakaCompressFilter)[] = {
          { Py_tp_methods, t_HatanakaCompressFilter__methods_ },
          { Py_tp_init, (void *) t_HatanakaCompressFilter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HatanakaCompressFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HatanakaCompressFilter, t_HatanakaCompressFilter, HatanakaCompressFilter);

        void t_HatanakaCompressFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(HatanakaCompressFilter), &PY_TYPE_DEF(HatanakaCompressFilter), module, "HatanakaCompressFilter", 0);
        }

        void t_HatanakaCompressFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "class_", make_descriptor(HatanakaCompressFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "wrapfn_", make_descriptor(t_HatanakaCompressFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HatanakaCompressFilter::initializeClass, 1)))
            return NULL;
          return t_HatanakaCompressFilter::wrap_Object(HatanakaCompressFilter(((t_HatanakaCompressFilter *) arg)->object.this$));
        }
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HatanakaCompressFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds)
        {
          HatanakaCompressFilter object((jobject) NULL);

          INT_CALL(object = HatanakaCompressFilter());
          self->object = object;

          return 0;
        }

        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::data::DataSource result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.filter(a0));
            return ::org::orekit::data::t_DataSource::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProviderAdapter::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProviderAdapter::mids$ = NULL;
      bool ExtendedPVCoordinatesProviderAdapter::live$ = false;

      jclass ExtendedPVCoordinatesProviderAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProviderAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d6acaee40f40e579] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExtendedPVCoordinatesProviderAdapter::ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_d6acaee40f40e579, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ExtendedPVCoordinatesProviderAdapter__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProviderAdapter)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProviderAdapter__methods_ },
        { Py_tp_init, (void *) t_ExtendedPVCoordinatesProviderAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProviderAdapter)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProviderAdapter, t_ExtendedPVCoordinatesProviderAdapter, ExtendedPVCoordinatesProviderAdapter);

      void t_ExtendedPVCoordinatesProviderAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProviderAdapter), &PY_TYPE_DEF(ExtendedPVCoordinatesProviderAdapter), module, "ExtendedPVCoordinatesProviderAdapter", 0);
      }

      void t_ExtendedPVCoordinatesProviderAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "class_", make_descriptor(ExtendedPVCoordinatesProviderAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProviderAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProviderAdapter::wrap_Object(ExtendedPVCoordinatesProviderAdapter(((t_ExtendedPVCoordinatesProviderAdapter *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ExtendedPVCoordinatesProviderAdapter object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = ExtendedPVCoordinatesProviderAdapter(a0, a1, a2));
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
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap$Iterator::mids$ = NULL;
      bool OpenIntToDoubleHashMap$Iterator::live$ = false;

      jclass OpenIntToDoubleHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_ff7cb6c242604316] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_eee3de00fe971136] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_d6ab429752e7c267] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_9981f74b2d109da6] = env->getMethodID(cls, "value", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToDoubleHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_ff7cb6c242604316]);
      }

      jboolean OpenIntToDoubleHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_eee3de00fe971136]);
      }

      jint OpenIntToDoubleHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_d6ab429752e7c267]);
      }

      jdouble OpenIntToDoubleHashMap$Iterator::value() const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_9981f74b2d109da6]);
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
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self);

      static PyMethodDef t_OpenIntToDoubleHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap$Iterator, t_OpenIntToDoubleHashMap$Iterator, OpenIntToDoubleHashMap$Iterator);

      void t_OpenIntToDoubleHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap$Iterator), &PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator), module, "OpenIntToDoubleHashMap$Iterator", 0);
      }

      void t_OpenIntToDoubleHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "class_", make_descriptor(OpenIntToDoubleHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap$Iterator::wrap_Object(OpenIntToDoubleHashMap$Iterator(((t_OpenIntToDoubleHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.value());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver::live$ = false;

        jclass BracketedRealFieldUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getRelativeAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_6851f2838839ed9a] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_506031728277a68d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_04816f93c95078f7] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");
            mids$[mid_solveInterval_20e7140a9cf1e1c4] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_08d37e3f77b7239d]));
        }

        jint BracketedRealFieldUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_08d37e3f77b7239d]));
        }

        jint BracketedRealFieldUnivariateSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_6851f2838839ed9a], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_506031728277a68d], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_04816f93c95078f7], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_20e7140a9cf1e1c4], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver, t_BracketedRealFieldUnivariateSolver, BracketedRealFieldUnivariateSolver);
        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_Object(const BracketedRealFieldUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver), module, "BracketedRealFieldUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval)));
        }

        void t_BracketedRealFieldUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "class_", make_descriptor(BracketedRealFieldUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver::wrap_Object(BracketedRealFieldUnivariateSolver(((t_BracketedRealFieldUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereNequickGMessage::class$ = NULL;
          jmethodID *IonosphereNequickGMessage::mids$ = NULL;
          bool IonosphereNequickGMessage::live$ = false;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG2 = NULL;

          jclass IonosphereNequickGMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereNequickGMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAi0_9981f74b2d109da6] = env->getMethodID(cls, "getAi0", "()D");
              mids$[mid_getAi1_9981f74b2d109da6] = env->getMethodID(cls, "getAi1", "()D");
              mids$[mid_getAi2_9981f74b2d109da6] = env->getMethodID(cls, "getAi2", "()D");
              mids$[mid_getFlags_d6ab429752e7c267] = env->getMethodID(cls, "getFlags", "()I");
              mids$[mid_setAi0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAi0", "(D)V");
              mids$[mid_setAi1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAi1", "(D)V");
              mids$[mid_setAi2_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAi2", "(D)V");
              mids$[mid_setFlags_8fd427ab23829bf5] = env->getMethodID(cls, "setFlags", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SFU = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG2", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereNequickGMessage::IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          jdouble IonosphereNequickGMessage::getAi0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi0_9981f74b2d109da6]);
          }

          jdouble IonosphereNequickGMessage::getAi1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi1_9981f74b2d109da6]);
          }

          jdouble IonosphereNequickGMessage::getAi2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi2_9981f74b2d109da6]);
          }

          jint IonosphereNequickGMessage::getFlags() const
          {
            return env->callIntMethod(this$, mids$[mid_getFlags_d6ab429752e7c267]);
          }

          void IonosphereNequickGMessage::setAi0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi0_1ad26e8c8c0cd65b], a0);
          }

          void IonosphereNequickGMessage::setAi1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi1_1ad26e8c8c0cd65b], a0);
          }

          void IonosphereNequickGMessage::setAi2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi2_1ad26e8c8c0cd65b], a0);
          }

          void IonosphereNequickGMessage::setFlags(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFlags_8fd427ab23829bf5], a0);
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
          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereNequickGMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai0),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai1),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai2),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, flags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereNequickGMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereNequickGMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi0, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi1, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi2, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getFlags, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi0, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi1, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi2, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setFlags, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereNequickGMessage)[] = {
            { Py_tp_methods, t_IonosphereNequickGMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereNequickGMessage_init_ },
            { Py_tp_getset, t_IonosphereNequickGMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereNequickGMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereNequickGMessage, t_IonosphereNequickGMessage, IonosphereNequickGMessage);

          void t_IonosphereNequickGMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereNequickGMessage), &PY_TYPE_DEF(IonosphereNequickGMessage), module, "IonosphereNequickGMessage", 0);
          }

          void t_IonosphereNequickGMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "class_", make_descriptor(IonosphereNequickGMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "wrapfn_", make_descriptor(t_IonosphereNequickGMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereNequickGMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG2)));
          }

          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereNequickGMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereNequickGMessage::wrap_Object(IonosphereNequickGMessage(((t_IonosphereNequickGMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereNequickGMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereNequickGMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereNequickGMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFlags());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi0", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi1", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi2", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setFlags(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFlags", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai0", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai1", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai2", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFlags());
            return PyLong_FromLong((long) value);
          }
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setFlags(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "flags", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getEast_032312bdeb3f2f93] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getLatitude", "()D");
          mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
          mids$[mid_getNadir_032312bdeb3f2f93] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_032312bdeb3f2f93] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSouth_032312bdeb3f2f93] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getWest_032312bdeb3f2f93] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_032312bdeb3f2f93] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "NORTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          SOUTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "SOUTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GeodeticPoint::GeodeticPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

      jboolean GeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jdouble GeodeticPoint::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_9981f74b2d109da6]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_032312bdeb3f2f93]));
      }

      jdouble GeodeticPoint::getLatitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLatitude_9981f74b2d109da6]);
      }

      jdouble GeodeticPoint::getLongitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_032312bdeb3f2f93]));
      }

      jint GeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::java::lang::String GeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *SpacecraftToObservedBody::class$ = NULL;
        jmethodID *SpacecraftToObservedBody::mids$ = NULL;
        bool SpacecraftToObservedBody::live$ = false;

        jclass SpacecraftToObservedBody::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/SpacecraftToObservedBody");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8c483649802d4fb5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;Ljava/util/List;)V");
            mids$[mid_init$_95fe784c2996af0d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getBodyToInertial_02ca17ac51b6a4b2] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialToBody_02ca17ac51b6a4b2] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getOvershootTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getScToInertial_02ca17ac51b6a4b2] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTStep_9981f74b2d109da6] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_isInRange_b16e79ba1b2830a1] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, const ::java::util::List & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c483649802d4fb5, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7.this$)) {}

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, jint a7, const ::org::orekit::utils::CartesianDerivativesFilter & a8, const ::java::util::List & a9, jint a10, const ::org::orekit::utils::AngularDerivativesFilter & a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95fe784c2996af0d, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7, a8.this$, a9.this$, a10, a11.this$)) {}

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_cb151471db4570f0]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        jdouble SpacecraftToObservedBody::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_9981f74b2d109da6]);
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_02ca17ac51b6a4b2], a0.this$));
        }

        jdouble SpacecraftToObservedBody::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_9981f74b2d109da6]);
        }

        jboolean SpacecraftToObservedBody::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_b16e79ba1b2830a1], a0.this$);
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
      namespace utils {
        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data);
        static PyGetSetDef t_SpacecraftToObservedBody__fields_[] = {
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, bodyFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, inertialFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, maxDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, minDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, overshootTolerance),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, tStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpacecraftToObservedBody__methods_[] = {
          DECLARE_METHOD(t_SpacecraftToObservedBody, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialToBody, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getScToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, isInRange, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpacecraftToObservedBody)[] = {
          { Py_tp_methods, t_SpacecraftToObservedBody__methods_ },
          { Py_tp_init, (void *) t_SpacecraftToObservedBody_init_ },
          { Py_tp_getset, t_SpacecraftToObservedBody__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpacecraftToObservedBody)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpacecraftToObservedBody, t_SpacecraftToObservedBody, SpacecraftToObservedBody);

        void t_SpacecraftToObservedBody::install(PyObject *module)
        {
          installType(&PY_TYPE(SpacecraftToObservedBody), &PY_TYPE_DEF(SpacecraftToObservedBody), module, "SpacecraftToObservedBody", 0);
        }

        void t_SpacecraftToObservedBody::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "class_", make_descriptor(SpacecraftToObservedBody::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "wrapfn_", make_descriptor(t_SpacecraftToObservedBody::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpacecraftToObservedBody::initializeClass, 1)))
            return NULL;
          return t_SpacecraftToObservedBody::wrap_Object(SpacecraftToObservedBody(((t_SpacecraftToObservedBody *) arg)->object.this$));
        }
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpacecraftToObservedBody::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::util::List a7((jobject) NULL);
              PyTypeObject **p7;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &p7, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;
              ::org::orekit::utils::CartesianDerivativesFilter a8((jobject) NULL);
              PyTypeObject **p8;
              ::java::util::List a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;
              ::org::orekit::utils::AngularDerivativesFilter a11((jobject) NULL);
              PyTypeObject **p11;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a9, &p9, ::java::util::t_List::parameters_, &a10, &a11, &p11, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LeastSquaresConverter::class$ = NULL;
          jmethodID *LeastSquaresConverter::mids$ = NULL;
          bool LeastSquaresConverter::live$ = false;

          jclass LeastSquaresConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4788f43b793013e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D)V");
              mids$[mid_init$_8869ab8cacf25c8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D[D)V");
              mids$[mid_init$_4d95e85d2da23437] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[DLorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_value_a40ce4fdf6559ac0] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4788f43b793013e9, a0.this$, a1.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8869ab8cacf25c8e, a0.this$, a1.this$, a2.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d95e85d2da23437, a0.this$, a1.this$, a2.this$)) {}

          jdouble LeastSquaresConverter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_a40ce4fdf6559ac0], a0.this$);
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
          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg);

          static PyMethodDef t_LeastSquaresConverter__methods_[] = {
            DECLARE_METHOD(t_LeastSquaresConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LeastSquaresConverter)[] = {
            { Py_tp_methods, t_LeastSquaresConverter__methods_ },
            { Py_tp_init, (void *) t_LeastSquaresConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LeastSquaresConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LeastSquaresConverter, t_LeastSquaresConverter, LeastSquaresConverter);

          void t_LeastSquaresConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(LeastSquaresConverter), &PY_TYPE_DEF(LeastSquaresConverter), module, "LeastSquaresConverter", 0);
          }

          void t_LeastSquaresConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "class_", make_descriptor(LeastSquaresConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "wrapfn_", make_descriptor(t_LeastSquaresConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LeastSquaresConverter::initializeClass, 1)))
              return NULL;
            return t_LeastSquaresConverter::wrap_Object(LeastSquaresConverter(((t_LeastSquaresConverter *) arg)->object.this$));
          }
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LeastSquaresConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
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

          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UncorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *UncorrelatedRandomVectorGenerator::mids$ = NULL;
      bool UncorrelatedRandomVectorGenerator::live$ = false;

      jclass UncorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UncorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a61f6306cda8a75a] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_571e75b3aaf5ea19] = env->getMethodID(cls, "<init>", "([D[DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(jint a0, const ::org::hipparchus::random::NormalizedRandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a61f6306cda8a75a, a0, a1.this$)) {}

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_571e75b3aaf5ea19, a0.this$, a1.this$, a2.this$)) {}

      JArray< jdouble > UncorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self);

      static PyMethodDef t_UncorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UncorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UncorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UncorrelatedRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UncorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UncorrelatedRandomVectorGenerator, t_UncorrelatedRandomVectorGenerator, UncorrelatedRandomVectorGenerator);

      void t_UncorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UncorrelatedRandomVectorGenerator), &PY_TYPE_DEF(UncorrelatedRandomVectorGenerator), module, "UncorrelatedRandomVectorGenerator", 0);
      }

      void t_UncorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "class_", make_descriptor(UncorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_UncorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UncorrelatedRandomVectorGenerator::wrap_Object(UncorrelatedRandomVectorGenerator(((t_UncorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::NormalizedRandomGenerator a1((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[D[Dk", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1, a2));
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

      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
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
            mids$[mid_getField_7ee697680d30d1e8] = env->getStaticMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28] = env->getStaticMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
            mids$[mid_getIGRF_5fbf1330f033ba72] = env->getStaticMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_5fbf1330f033ba72] = env->getStaticMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getField_7ee697680d30d1e8], a0.this$, a1));
        }

        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields GeoMagneticFieldFactory::getGeoMagneticFields()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callStaticObjectMethod(cls, mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28]));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getIGRF(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getIGRF_5fbf1330f033ba72], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getWMM(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getWMM_5fbf1330f033ba72], a0));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FixedNumberInterpolationGrid::mids$ = NULL;
            bool FixedNumberInterpolationGrid::live$ = false;

            jclass FixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getGridPoints_4c8160a53aa8811b] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedNumberInterpolationGrid::FixedNumberInterpolationGrid(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            JArray< jdouble > FixedNumberInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4c8160a53aa8811b], a0, a1));
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
            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_FixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FixedNumberInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedNumberInterpolationGrid, t_FixedNumberInterpolationGrid, FixedNumberInterpolationGrid);

            void t_FixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedNumberInterpolationGrid), &PY_TYPE_DEF(FixedNumberInterpolationGrid), module, "FixedNumberInterpolationGrid", 0);
            }

            void t_FixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "class_", make_descriptor(FixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FixedNumberInterpolationGrid::wrap_Object(FixedNumberInterpolationGrid(((t_FixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FixedNumberInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonAbstractWriter::class$ = NULL;
          jmethodID *PythonAbstractWriter::mids$ = NULL;
          bool PythonAbstractWriter::live$ = false;

          jclass PythonAbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonAbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_intArrayToString_c9e8e005aec406fb] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWriter::PythonAbstractWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          void PythonAbstractWriter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          ::java::lang::String PythonAbstractWriter::intArrayToString(const JArray< jint > & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_intArrayToString_c9e8e005aec406fb], a0.this$));
          }

          jlong PythonAbstractWriter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self);
          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args);
          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data);
          static PyGetSetDef t_PythonAbstractWriter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWriter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWriter__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWriter, intArrayToString, METH_O),
            DECLARE_METHOD(t_PythonAbstractWriter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWriter)[] = {
            { Py_tp_methods, t_PythonAbstractWriter__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWriter_init_ },
            { Py_tp_getset, t_PythonAbstractWriter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWriter)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWriter, t_PythonAbstractWriter, PythonAbstractWriter);

          void t_PythonAbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWriter), &PY_TYPE_DEF(PythonAbstractWriter), module, "PythonAbstractWriter", 1);
          }

          void t_PythonAbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "class_", make_descriptor(PythonAbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "wrapfn_", make_descriptor(t_PythonAbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWriter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWriter_pythonDecRef0 },
              { "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonAbstractWriter_writeContent1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWriter::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWriter::wrap_Object(PythonAbstractWriter(((t_PythonAbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            PythonAbstractWriter object((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWriter(a0, a1));
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

          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg)
          {
            JArray< jint > a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "[I", &a0))
            {
              OBJ_CALL(result = self->object.intArrayToString(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intArrayToString", arg);
            return NULL;
          }

          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
            PyObject *result = PyObject_CallMethod(obj, "writeContent", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data)
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
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAltitudeDetector::class$ = NULL;
        jmethodID *FieldAltitudeDetector::mids$ = NULL;
        bool FieldAltitudeDetector::live$ = false;

        jclass FieldAltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9e9c9e1e4c63e1b9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_e3317e8db204f3c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_c09966b10dc0ead9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAltitude_08d37e3f77b7239d] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBodyShape_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_856529a2987fc1ab] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9e9c9e1e4c63e1b9, a0.this$, a1.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e3317e8db204f3c0, a0.this$, a1.this$, a2.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c09966b10dc0ead9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::getAltitude() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_08d37e3f77b7239d]));
        }

        ::org::orekit::bodies::BodyShape FieldAltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_6f2d25f6f71d01ca]));
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
        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args);
        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args);
        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data);
        static PyGetSetDef t_FieldAltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAltitudeDetector)[] = {
          { Py_tp_methods, t_FieldAltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAltitudeDetector_init_ },
          { Py_tp_getset, t_FieldAltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldAltitudeDetector, t_FieldAltitudeDetector, FieldAltitudeDetector);
        PyObject *t_FieldAltitudeDetector::wrap_Object(const FieldAltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAltitudeDetector), &PY_TYPE_DEF(FieldAltitudeDetector), module, "FieldAltitudeDetector", 0);
        }

        void t_FieldAltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "class_", make_descriptor(FieldAltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "wrapfn_", make_descriptor(t_FieldAltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAltitudeDetector::wrap_Object(FieldAltitudeDetector(((t_FieldAltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAltitude());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAltitude());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
