#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
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

            ::java::lang::Class *MessageVersionXmlTokenBuilder::class$ = NULL;
            jmethodID *MessageVersionXmlTokenBuilder::mids$ = NULL;
            bool MessageVersionXmlTokenBuilder::live$ = false;

            jclass MessageVersionXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MessageVersionXmlTokenBuilder::MessageVersionXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::java::util::List MessageVersionXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
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
            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_MessageVersionXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageVersionXmlTokenBuilder)[] = {
              { Py_tp_methods, t_MessageVersionXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_MessageVersionXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageVersionXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageVersionXmlTokenBuilder, t_MessageVersionXmlTokenBuilder, MessageVersionXmlTokenBuilder);

            void t_MessageVersionXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageVersionXmlTokenBuilder), &PY_TYPE_DEF(MessageVersionXmlTokenBuilder), module, "MessageVersionXmlTokenBuilder", 0);
            }

            void t_MessageVersionXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "class_", make_descriptor(MessageVersionXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "wrapfn_", make_descriptor(t_MessageVersionXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_MessageVersionXmlTokenBuilder::wrap_Object(MessageVersionXmlTokenBuilder(((t_MessageVersionXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              MessageVersionXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = MessageVersionXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args)
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
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_9a5ac4ec8957dcbf] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_68d98c2570e5130d] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_e6d4d3215c30992a] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_9a5ac4ec8957dcbf], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_68d98c2570e5130d], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_e6d4d3215c30992a]));
        }

        void FieldEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ExtremumApproachDetector::class$ = NULL;
        jmethodID *ExtremumApproachDetector::mids$ = NULL;
        bool ExtremumApproachDetector::live$ = false;

        jclass ExtremumApproachDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ExtremumApproachDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_16cee8786fe06864] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_computeDeltaPV_56b67c5aaa68aa03] = env->getMethodID(cls, "computeDeltaPV", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getSecondaryPVProvider_7044cb1966c8a481] = env->getMethodID(cls, "getSecondaryPVProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_d388bbc46e51cfc3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ExtremumApproachDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtremumApproachDetector::ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_16cee8786fe06864, a0.this$)) {}

        ::org::orekit::utils::PVCoordinates ExtremumApproachDetector::computeDeltaPV(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeDeltaPV_56b67c5aaa68aa03], a0.this$));
        }

        jdouble ExtremumApproachDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider ExtremumApproachDetector::getSecondaryPVProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryPVProvider_7044cb1966c8a481]));
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
        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args);
        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args);
        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self);
        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data);
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data);
        static PyGetSetDef t_ExtremumApproachDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, secondaryPVProvider),
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExtremumApproachDetector__methods_[] = {
          DECLARE_METHOD(t_ExtremumApproachDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, computeDeltaPV, METH_O),
          DECLARE_METHOD(t_ExtremumApproachDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, getSecondaryPVProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtremumApproachDetector)[] = {
          { Py_tp_methods, t_ExtremumApproachDetector__methods_ },
          { Py_tp_init, (void *) t_ExtremumApproachDetector_init_ },
          { Py_tp_getset, t_ExtremumApproachDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtremumApproachDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ExtremumApproachDetector, t_ExtremumApproachDetector, ExtremumApproachDetector);
        PyObject *t_ExtremumApproachDetector::wrap_Object(const ExtremumApproachDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ExtremumApproachDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ExtremumApproachDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtremumApproachDetector), &PY_TYPE_DEF(ExtremumApproachDetector), module, "ExtremumApproachDetector", 0);
        }

        void t_ExtremumApproachDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "class_", make_descriptor(ExtremumApproachDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "wrapfn_", make_descriptor(t_ExtremumApproachDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtremumApproachDetector::initializeClass, 1)))
            return NULL;
          return t_ExtremumApproachDetector::wrap_Object(ExtremumApproachDetector(((t_ExtremumApproachDetector *) arg)->object.this$));
        }
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtremumApproachDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ExtremumApproachDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
          {
            INT_CALL(object = ExtremumApproachDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ExtremumApproachDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDeltaPV(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDeltaPV", arg);
          return NULL;
        }

        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExtremumApproachDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeIntegrator::live$ = false;

        jclass AdaptiveStepsizeIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_564b745a777c418d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_117a615685ad06d4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_2d07dbdb6870e899] = env->getMethodID(cls, "initializeStep", "(ZI[DLorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_setInitialStepSize_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_e5787c5177784e12] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_667a7965403ed91a] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_sanityChecks_d60bc5812a8e442c] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getStepSizeHelper_b1c87be850abd6a4] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_resetInternalState_7ae3461a92a43152] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_564b745a777c418d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_117a615685ad06d4, a0.this$, a1, a2, a3, a4)) {}

        jdouble AdaptiveStepsizeIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_456d9a2f64d6b28d]);
        }

        jdouble AdaptiveStepsizeIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_456d9a2f64d6b28d]);
        }

        jdouble AdaptiveStepsizeIntegrator::initializeStep(jboolean a0, jint a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ODEStateAndDerivative & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_2d07dbdb6870e899], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_77e0f9a1f260e2e5], a0);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_e5787c5177784e12], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_667a7965403ed91a], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeIntegrator, t_AdaptiveStepsizeIntegrator, AdaptiveStepsizeIntegrator);

        void t_AdaptiveStepsizeIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeIntegrator), module, "AdaptiveStepsizeIntegrator", 0);
        }

        void t_AdaptiveStepsizeIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "class_", make_descriptor(AdaptiveStepsizeIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeIntegrator::wrap_Object(AdaptiveStepsizeIntegrator(((t_AdaptiveStepsizeIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a3((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "ZI[Dk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }

        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedUnivariateSolver$Interval::live$ = false;

        jclass BracketedUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getLeftAbscissa_456d9a2f64d6b28d] = env->getMethodID(cls, "getLeftAbscissa", "()D");
            mids$[mid_getLeftValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getLeftValue", "()D");
            mids$[mid_getRightAbscissa_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightAbscissa", "()D");
            mids$[mid_getRightValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightValue", "()D");
            mids$[mid_getSide_4d4393114a766b84] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedUnivariateSolver$Interval::BracketedUnivariateSolver$Interval(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        jdouble BracketedUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftAbscissa_456d9a2f64d6b28d]);
        }

        jdouble BracketedUnivariateSolver$Interval::getLeftValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftValue_456d9a2f64d6b28d]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightAbscissa_456d9a2f64d6b28d]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightValue_456d9a2f64d6b28d]);
        }

        jdouble BracketedUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSide_4d4393114a766b84], a0.this$);
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
        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver$Interval, t_BracketedUnivariateSolver$Interval, BracketedUnivariateSolver$Interval);
        PyObject *t_BracketedUnivariateSolver$Interval::wrap_Object(const BracketedUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedUnivariateSolver$Interval), module, "BracketedUnivariateSolver$Interval", 0);
        }

        void t_BracketedUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "class_", make_descriptor(BracketedUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver$Interval::wrap_Object(BracketedUnivariateSolver$Interval(((t_BracketedUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          BracketedUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BracketedUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *DefaultEncounterLOF::class$ = NULL;
        jmethodID *DefaultEncounterLOF::mids$ = NULL;
        bool DefaultEncounterLOF::live$ = false;

        jclass DefaultEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/DefaultEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2fcbcb00b2514447] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_d12117948cc23ea0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_891f682396b75876] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0483676d141ad17c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_2fcbcb00b2514447, a0.this$)) {}

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_d12117948cc23ea0, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d], a0.this$));
        }

        ::java::lang::String DefaultEncounterLOF::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation DefaultEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_891f682396b75876], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation DefaultEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0483676d141ad17c], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data);
        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data);
        static PyGetSetDef t_DefaultEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DefaultEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_DefaultEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getName, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DefaultEncounterLOF)[] = {
          { Py_tp_methods, t_DefaultEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_DefaultEncounterLOF_init_ },
          { Py_tp_getset, t_DefaultEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DefaultEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(DefaultEncounterLOF, t_DefaultEncounterLOF, DefaultEncounterLOF);

        void t_DefaultEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(DefaultEncounterLOF), &PY_TYPE_DEF(DefaultEncounterLOF), module, "DefaultEncounterLOF", 0);
        }

        void t_DefaultEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "class_", make_descriptor(DefaultEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "wrapfn_", make_descriptor(t_DefaultEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DefaultEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_DefaultEncounterLOF::wrap_Object(DefaultEncounterLOF(((t_DefaultEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DefaultEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
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

        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args)
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

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
            break;
           case 3:
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

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *StartStopEventsTrigger::class$ = NULL;
          jmethodID *StartStopEventsTrigger::mids$ = NULL;
          bool StartStopEventsTrigger::live$ = false;

          jclass StartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getStartDetector_5f2d0fd4426cfe5c] = env->getMethodID(cls, "getStartDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_getStopDetector_5f2d0fd4426cfe5c] = env->getMethodID(cls, "getStopDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_convertStartDetector_695049796b8b09bd] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_695049796b8b09bd] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_isFiringOnInitialState_795d7e54d4c58d83] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStartDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStartDetector_5f2d0fd4426cfe5c]));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStopDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStopDetector_5f2d0fd4426cfe5c]));
          }

          void StartStopEventsTrigger::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_StartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, startDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, stopDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_StartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStartDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStopDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StartStopEventsTrigger)[] = {
            { Py_tp_methods, t_StartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(StartStopEventsTrigger, t_StartStopEventsTrigger, StartStopEventsTrigger);
          PyObject *t_StartStopEventsTrigger::wrap_Object(const StartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_StartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_StartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(StartStopEventsTrigger), &PY_TYPE_DEF(StartStopEventsTrigger), module, "StartStopEventsTrigger", 0);
          }

          void t_StartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "class_", make_descriptor(StartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "wrapfn_", make_descriptor(t_StartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_StartStopEventsTrigger::wrap_Object(StartStopEventsTrigger(((t_StartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStopDetector());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "init", args, 2);
          }
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStopDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree::class$ = NULL;
        jmethodID *BSPTree::mids$ = NULL;
        bool BSPTree::live$ = false;

        jclass BSPTree::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_7ca0d9438822cb0b] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
            mids$[mid_init$_d7acb37d69da303f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Ljava/lang/Object;)V");
            mids$[mid_copySelf_ec08d7579464d8a2] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getAttribute_dfd7647d9110ac9f] = env->getMethodID(cls, "getAttribute", "()Ljava/lang/Object;");
            mids$[mid_getCell_4ea49dc3d1d970a9] = env->getMethodID(cls, "getCell", "(Lorg/hipparchus/geometry/Point;D)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getCloseCuts_e422c0b808638456] = env->getMethodID(cls, "getCloseCuts", "(Lorg/hipparchus/geometry/Point;D)Ljava/util/List;");
            mids$[mid_getCut_a66e04f05d5608cc] = env->getMethodID(cls, "getCut", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getMinus_ec08d7579464d8a2] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getParent_ec08d7579464d8a2] = env->getMethodID(cls, "getParent", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getPlus_ec08d7579464d8a2] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_insertCut_b99f508aafd89c77] = env->getMethodID(cls, "insertCut", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_insertInTree_fbac4d079e23ef4e] = env->getMethodID(cls, "insertInTree", "(Lorg/hipparchus/geometry/partitioning/BSPTree;ZLorg/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler;)V");
            mids$[mid_merge_d7b304bb164ebb5e] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree$LeafMerger;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_pruneAroundConvexCell_378b9a70983ca2dd] = env->getMethodID(cls, "pruneAroundConvexCell", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_setAttribute_7ca0d9438822cb0b] = env->getMethodID(cls, "setAttribute", "(Ljava/lang/Object;)V");
            mids$[mid_split_543eb723c89dfca4] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_visit_7ce3dc52f494910d] = env->getMethodID(cls, "visit", "(Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTree::BSPTree() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        BSPTree::BSPTree(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ca0d9438822cb0b, a0.this$)) {}

        BSPTree::BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const BSPTree & a1, const BSPTree & a2, const ::java::lang::Object & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7acb37d69da303f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        BSPTree BSPTree::copySelf() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_copySelf_ec08d7579464d8a2]));
        }

        ::java::lang::Object BSPTree::getAttribute() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_dfd7647d9110ac9f]));
        }

        BSPTree BSPTree::getCell(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getCell_4ea49dc3d1d970a9], a0.this$, a1));
        }

        ::java::util::List BSPTree::getCloseCuts(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCloseCuts_e422c0b808638456], a0.this$, a1));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BSPTree::getCut() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getCut_a66e04f05d5608cc]));
        }

        BSPTree BSPTree::getMinus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getMinus_ec08d7579464d8a2]));
        }

        BSPTree BSPTree::getParent() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getParent_ec08d7579464d8a2]));
        }

        BSPTree BSPTree::getPlus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getPlus_ec08d7579464d8a2]));
        }

        jboolean BSPTree::insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_insertCut_b99f508aafd89c77], a0.this$);
        }

        void BSPTree::insertInTree(const BSPTree & a0, jboolean a1, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_insertInTree_fbac4d079e23ef4e], a0.this$, a1, a2.this$);
        }

        BSPTree BSPTree::merge(const BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger & a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_merge_d7b304bb164ebb5e], a0.this$, a1.this$));
        }

        BSPTree BSPTree::pruneAroundConvexCell(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_pruneAroundConvexCell_378b9a70983ca2dd], a0.this$, a1.this$, a2.this$));
        }

        void BSPTree::setAttribute(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttribute_7ca0d9438822cb0b], a0.this$);
        }

        BSPTree BSPTree::split(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_split_543eb723c89dfca4], a0.this$));
        }

        void BSPTree::visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visit_7ce3dc52f494910d], a0.this$);
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
        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args);
        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BSPTree_copySelf(t_BSPTree *self);
        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self);
        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCut(t_BSPTree *self);
        static PyObject *t_BSPTree_getMinus(t_BSPTree *self);
        static PyObject *t_BSPTree_getParent(t_BSPTree *self);
        static PyObject *t_BSPTree_getPlus(t_BSPTree *self);
        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data);
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data);
        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data);
        static PyGetSetDef t_BSPTree__fields_[] = {
          DECLARE_GETSET_FIELD(t_BSPTree, attribute),
          DECLARE_GET_FIELD(t_BSPTree, cut),
          DECLARE_GET_FIELD(t_BSPTree, minus),
          DECLARE_GET_FIELD(t_BSPTree, parent),
          DECLARE_GET_FIELD(t_BSPTree, plus),
          DECLARE_GET_FIELD(t_BSPTree, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree__methods_[] = {
          DECLARE_METHOD(t_BSPTree, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getAttribute, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCloseCuts, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCut, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getParent, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, insertCut, METH_O),
          DECLARE_METHOD(t_BSPTree, insertInTree, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, merge, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, pruneAroundConvexCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, setAttribute, METH_O),
          DECLARE_METHOD(t_BSPTree, split, METH_O),
          DECLARE_METHOD(t_BSPTree, visit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree)[] = {
          { Py_tp_methods, t_BSPTree__methods_ },
          { Py_tp_init, (void *) t_BSPTree_init_ },
          { Py_tp_getset, t_BSPTree__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree, t_BSPTree, BSPTree);
        PyObject *t_BSPTree::wrap_Object(const BSPTree& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree), &PY_TYPE_DEF(BSPTree), module, "BSPTree", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "VanishingCutHandler", make_descriptor(&PY_TYPE_DEF(BSPTree$VanishingCutHandler)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "LeafMerger", make_descriptor(&PY_TYPE_DEF(BSPTree$LeafMerger)));
        }

        void t_BSPTree::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "class_", make_descriptor(BSPTree::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "wrapfn_", make_descriptor(t_BSPTree::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree::initializeClass, 1)))
            return NULL;
          return t_BSPTree::wrap_Object(BSPTree(((t_BSPTree *) arg)->object.this$));
        }
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BSPTree object((jobject) NULL);

              INT_CALL(object = BSPTree());
              self->object = object;
              break;
            }
           case 1:
            {
              ::java::lang::Object a0((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "o", &a0))
              {
                INT_CALL(object = BSPTree(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              BSPTree a1((jobject) NULL);
              PyTypeObject **p1;
              BSPTree a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Object a3((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "KKKo", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, BSPTree::initializeClass, BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, t_BSPTree::parameters_, &a2, &p2, t_BSPTree::parameters_, &a3))
              {
                INT_CALL(object = BSPTree(a0, a1, a2, a3));
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

        static PyObject *t_BSPTree_copySelf(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCell(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCloseCuts(a0, a1));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCloseCuts", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCut(t_BSPTree *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getMinus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getParent(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getParent());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getPlus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.insertCut(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "insertCut", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KZK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree$VanishingCutHandler::parameters_))
          {
            OBJ_CALL(self->object.insertInTree(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "insertInTree", args);
          return NULL;
        }

        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger a1((jobject) NULL);
          PyTypeObject **p1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree$LeafMerger::parameters_))
          {
            OBJ_CALL(result = self->object.merge(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }

        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pruneAroundConvexCell(a0, a1, a2));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "pruneAroundConvexCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg)
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArg(arg, "o", &a0))
          {
            OBJ_CALL(self->object.setAttribute(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttribute", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTreeVisitor::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor::parameters_))
          {
            OBJ_CALL(self->object.visit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visit", arg);
          return NULL;
        }
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(value);
        }
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::Object value((jobject) NULL);
            if (!parseArg(arg, "o", &value))
            {
              INT_CALL(self->object.setAttribute(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attribute", arg);
          return -1;
        }

        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getParent());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return t_BSPTree::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularCoordinates::class$ = NULL;
      jmethodID *AngularCoordinates::mids$ = NULL;
      bool AngularCoordinates::live$ = false;
      AngularCoordinates *AngularCoordinates::IDENTITY = NULL;

      jclass AngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_f8f94b8019a86187] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_897939f7cf621023] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_7caabad3a3c78268] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_f733b5fb34d30a40] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_55be699d863c58bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_e164aa97b1983b7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_c325375dff95cd95] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_applyTo_dc7eea29a4d4ad51] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_95abb8abb7f5aee0] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_applyTo_32f08c76ddea4935] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_21828419b7bbfc20] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_d18c47eb9dc5b2be] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_estimateRate_70b6dadefd895849] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getModifiedRodrigues_46ddffa0c457a6dd] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[D");
          mids$[mid_getRotation_24d2e432e376f9a0] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_17a952530a808943] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_17a952530a808943] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_revert_eb0542756098e24f] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_rotationShiftedBy_60201563a2dd3783] = env->getMethodID(cls, "rotationShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_shiftedBy_7fb56df8f8ae2e03] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_subtractOffset_c325375dff95cd95] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_4293e15d24113072] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new AngularCoordinates(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/AngularCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularCoordinates::AngularCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8f94b8019a86187, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_897939f7cf621023, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7caabad3a3c78268, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f733b5fb34d30a40, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55be699d863c58bf, a0.this$, a1.this$, a2.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e164aa97b1983b7b, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      AngularCoordinates AngularCoordinates::addOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_c325375dff95cd95], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_dc7eea29a4d4ad51], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_95abb8abb7f5aee0], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_32f08c76ddea4935], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_21828419b7bbfc20], a0.this$));
      }

      AngularCoordinates AngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_d18c47eb9dc5b2be], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_70b6dadefd895849], a0.this$, a1.this$, a2));
      }

      JArray< JArray< jdouble > > AngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_46ddffa0c457a6dd], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_24d2e432e376f9a0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_17a952530a808943]));
      }

      AngularCoordinates AngularCoordinates::revert() const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_eb0542756098e24f]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::rotationShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_60201563a2dd3783], a0));
      }

      AngularCoordinates AngularCoordinates::shiftedBy(jdouble a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7fb56df8f8ae2e03], a0));
      }

      AngularCoordinates AngularCoordinates::subtractOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_c325375dff95cd95], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_4293e15d24113072], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef]));
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
      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args);
      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data);
      static PyGetSetDef t_AngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_AngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_AngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularCoordinates)[] = {
        { Py_tp_methods, t_AngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_AngularCoordinates_init_ },
        { Py_tp_getset, t_AngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AngularCoordinates, t_AngularCoordinates, AngularCoordinates);

      void t_AngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularCoordinates), &PY_TYPE_DEF(AngularCoordinates), module, "AngularCoordinates", 0);
      }

      void t_AngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "class_", make_descriptor(AngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "wrapfn_", make_descriptor(t_AngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "IDENTITY", make_descriptor(t_AngularCoordinates::wrap_Object(*AngularCoordinates::IDENTITY)));
      }

      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_AngularCoordinates::wrap_Object(AngularCoordinates(((t_AngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AngularCoordinates object((jobject) NULL);

            INT_CALL(object = AngularCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            jdouble a4;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::createFromModifiedRodrigues(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::estimateRate(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self)
      {
        AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmData::class$ = NULL;
              jmethodID *AcmData::mids$ = NULL;
              bool AcmData::live$ = false;

              jclass AcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_eb83c9518129e70a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getAttitudeBlocks_a6156df500549a58] = env->getMethodID(cls, "getAttitudeBlocks", "()Ljava/util/List;");
                  mids$[mid_getAttitudeDeterminationBlock_88ac15fdce7c6217] = env->getMethodID(cls, "getAttitudeDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;");
                  mids$[mid_getCovarianceBlocks_a6156df500549a58] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_a6156df500549a58] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getPhysicBlock_4c00aa5ae00a7066] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;");
                  mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmData::AcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb83c9518129e70a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              ::java::util::List AcmData::getAttitudeBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeBlocks_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination AcmData::getAttitudeDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination(env->callObjectMethod(this$, mids$[mid_getAttitudeDeterminationBlock_88ac15fdce7c6217]));
              }

              ::java::util::List AcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_a6156df500549a58]));
              }

              ::java::util::List AcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties AcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_4c00aa5ae00a7066]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined AcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52]));
              }

              void AcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self);
              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self);
              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self);
              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg);
              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data);
              static PyGetSetDef t_AcmData__fields_[] = {
                DECLARE_GET_FIELD(t_AcmData, attitudeBlocks),
                DECLARE_GET_FIELD(t_AcmData, attitudeDeterminationBlock),
                DECLARE_GET_FIELD(t_AcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_AcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_AcmData, physicBlock),
                DECLARE_GET_FIELD(t_AcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmData__methods_[] = {
                DECLARE_METHOD(t_AcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, getAttitudeBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getAttitudeDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmData)[] = {
                { Py_tp_methods, t_AcmData__methods_ },
                { Py_tp_init, (void *) t_AcmData_init_ },
                { Py_tp_getset, t_AcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmData, t_AcmData, AcmData);

              void t_AcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmData), &PY_TYPE_DEF(AcmData), module, "AcmData", 0);
              }

              void t_AcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "class_", make_descriptor(AcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "wrapfn_", make_descriptor(t_AcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmData::initializeClass, 1)))
                  return NULL;
                return t_AcmData::wrap_Object(AcmData(((t_AcmData *) arg)->object.this$));
              }
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                AcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5))
                {
                  INT_CALL(object = AcmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(result);
              }

              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovarianceHistory));
              }

              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeManeuver));
              }

              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg)
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

              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElements::class$ = NULL;
            jmethodID *KeplerianElements::mids$ = NULL;
            bool KeplerianElements::live$ = false;

            jclass KeplerianElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_generateKeplerianOrbit_0666bdaaaf07ecac] = env->getMethodID(cls, "generateKeplerianOrbit", "(Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/KeplerianOrbit;");
                mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAnomaly_456d9a2f64d6b28d] = env->getMethodID(cls, "getAnomaly", "()D");
                mids$[mid_getAnomalyType_2571e8fe1cede425] = env->getMethodID(cls, "getAnomalyType", "()Lorg/orekit/orbits/PositionAngleType;");
                mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getRaan_456d9a2f64d6b28d] = env->getMethodID(cls, "getRaan", "()D");
                mids$[mid_setA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setA", "(D)V");
                mids$[mid_setAnomaly_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAnomaly", "(D)V");
                mids$[mid_setAnomalyType_07350e8db766ef51] = env->getMethodID(cls, "setAnomalyType", "(Lorg/orekit/orbits/PositionAngleType;)V");
                mids$[mid_setE_77e0f9a1f260e2e5] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setI_77e0f9a1f260e2e5] = env->getMethodID(cls, "setI", "(D)V");
                mids$[mid_setMeanMotion_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMeanMotion", "(D)V");
                mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
                mids$[mid_setPa_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setRaan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRaan", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KeplerianElements::KeplerianElements() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::orekit::orbits::KeplerianOrbit KeplerianElements::generateKeplerianOrbit(const ::org::orekit::frames::Frame & a0) const
            {
              return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_0666bdaaaf07ecac], a0.this$));
            }

            jdouble KeplerianElements::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
            }

            jdouble KeplerianElements::getAnomaly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAnomaly_456d9a2f64d6b28d]);
            }

            ::org::orekit::orbits::PositionAngleType KeplerianElements::getAnomalyType() const
            {
              return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getAnomalyType_2571e8fe1cede425]));
            }

            jdouble KeplerianElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate KeplerianElements::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
            }

            jdouble KeplerianElements::getI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
            }

            jdouble KeplerianElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble KeplerianElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
            }

            jdouble KeplerianElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
            }

            jdouble KeplerianElements::getRaan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRaan_456d9a2f64d6b28d]);
            }

            void KeplerianElements::setA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setAnomaly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomaly_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setAnomalyType(const ::org::orekit::orbits::PositionAngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomalyType_07350e8db766ef51], a0.this$);
            }

            void KeplerianElements::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
            }

            void KeplerianElements::setI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setMeanMotion(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMeanMotion_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setMu(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMu_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::setRaan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRaan_77e0f9a1f260e2e5], a0);
            }

            void KeplerianElements::validate(jdouble a0) const
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
          namespace odm {
            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args);
            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyGetSetDef t_KeplerianElements__fields_[] = {
              DECLARE_GETSET_FIELD(t_KeplerianElements, a),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomaly),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomalyType),
              DECLARE_GETSET_FIELD(t_KeplerianElements, e),
              DECLARE_GETSET_FIELD(t_KeplerianElements, epoch),
              DECLARE_GETSET_FIELD(t_KeplerianElements, i),
              DECLARE_GETSET_FIELD(t_KeplerianElements, meanMotion),
              DECLARE_GETSET_FIELD(t_KeplerianElements, mu),
              DECLARE_GETSET_FIELD(t_KeplerianElements, pa),
              DECLARE_GETSET_FIELD(t_KeplerianElements, raan),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElements__methods_[] = {
              DECLARE_METHOD(t_KeplerianElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, generateKeplerianOrbit, METH_O),
              DECLARE_METHOD(t_KeplerianElements, getA, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomaly, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomalyType, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getI, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getRaan, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, setA, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomaly, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomalyType, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setE, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setEpoch, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setI, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMeanMotion, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMu, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setPa, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setRaan, METH_O),
              DECLARE_METHOD(t_KeplerianElements, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElements)[] = {
              { Py_tp_methods, t_KeplerianElements__methods_ },
              { Py_tp_init, (void *) t_KeplerianElements_init_ },
              { Py_tp_getset, t_KeplerianElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElements)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(KeplerianElements, t_KeplerianElements, KeplerianElements);

            void t_KeplerianElements::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElements), &PY_TYPE_DEF(KeplerianElements), module, "KeplerianElements", 0);
            }

            void t_KeplerianElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "class_", make_descriptor(KeplerianElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "wrapfn_", make_descriptor(t_KeplerianElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElements::initializeClass, 1)))
                return NULL;
              return t_KeplerianElements::wrap_Object(KeplerianElements(((t_KeplerianElements *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds)
            {
              KeplerianElements object((jobject) NULL);

              INT_CALL(object = KeplerianElements());
              self->object = object;

              return 0;
            }

            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateKeplerianOrbit(a0));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateKeplerianOrbit", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAnomaly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self)
            {
              ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRaan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAnomaly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomaly", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
              {
                OBJ_CALL(self->object.setAnomalyType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomalyType", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMeanMotion(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMeanMotion", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMu(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMu", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRaan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRaan", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KeplerianElements), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAnomaly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAnomaly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomaly", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
            }
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAnomalyType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomalyType", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMeanMotion(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "meanMotion", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data)
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

            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRaan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRaan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "raan", arg);
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
#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *AkimaSplineInterpolator::class$ = NULL;
        jmethodID *AkimaSplineInterpolator::mids$ = NULL;
        bool AkimaSplineInterpolator::live$ = false;

        jclass AkimaSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/AkimaSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_interpolate_d587810b458fa2cb] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_c976cd8dd927abec] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AkimaSplineInterpolator::AkimaSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        AkimaSplineInterpolator::AkimaSplineInterpolator(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d587810b458fa2cb], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c976cd8dd927abec], a0.this$, a1.this$));
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
        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_AkimaSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_AkimaSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AkimaSplineInterpolator)[] = {
          { Py_tp_methods, t_AkimaSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_AkimaSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AkimaSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AkimaSplineInterpolator, t_AkimaSplineInterpolator, AkimaSplineInterpolator);

        void t_AkimaSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AkimaSplineInterpolator), &PY_TYPE_DEF(AkimaSplineInterpolator), module, "AkimaSplineInterpolator", 0);
        }

        void t_AkimaSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "class_", make_descriptor(AkimaSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "wrapfn_", make_descriptor(t_AkimaSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AkimaSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_AkimaSplineInterpolator::wrap_Object(AkimaSplineInterpolator(((t_AkimaSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AkimaSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              AkimaSplineInterpolator object((jobject) NULL);

              INT_CALL(object = AkimaSplineInterpolator());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              AkimaSplineInterpolator object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = AkimaSplineInterpolator(a0));
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

        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationFromSatelliteDetector::class$ = NULL;
        jmethodID *AngularSeparationFromSatelliteDetector::mids$ = NULL;
        bool AngularSeparationFromSatelliteDetector::live$ = false;

        jclass AngularSeparationFromSatelliteDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationFromSatelliteDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_716a45c480ef72cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getPrimaryObject_7044cb1966c8a481] = env->getMethodID(cls, "getPrimaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_getSecondaryObject_7044cb1966c8a481] = env->getMethodID(cls, "getSecondaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_6b2a1de7ad3407fb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationFromSatelliteDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationFromSatelliteDetector::AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_716a45c480ef72cc, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationFromSatelliteDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getPrimaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPrimaryObject_7044cb1966c8a481]));
        }

        jdouble AngularSeparationFromSatelliteDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getSecondaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryObject_7044cb1966c8a481]));
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
        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationFromSatelliteDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, primaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, secondaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationFromSatelliteDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getPrimaryObject, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getProximityAngle, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getSecondaryObject, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationFromSatelliteDetector)[] = {
          { Py_tp_methods, t_AngularSeparationFromSatelliteDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationFromSatelliteDetector_init_ },
          { Py_tp_getset, t_AngularSeparationFromSatelliteDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationFromSatelliteDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationFromSatelliteDetector, t_AngularSeparationFromSatelliteDetector, AngularSeparationFromSatelliteDetector);
        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_Object(const AngularSeparationFromSatelliteDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationFromSatelliteDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationFromSatelliteDetector), &PY_TYPE_DEF(AngularSeparationFromSatelliteDetector), module, "AngularSeparationFromSatelliteDetector", 0);
        }

        void t_AngularSeparationFromSatelliteDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "class_", make_descriptor(AngularSeparationFromSatelliteDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "wrapfn_", make_descriptor(t_AngularSeparationFromSatelliteDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationFromSatelliteDetector::wrap_Object(AngularSeparationFromSatelliteDetector(((t_AngularSeparationFromSatelliteDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationFromSatelliteDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationFromSatelliteDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationFromSatelliteDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationFromSatelliteDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ExpandableODE::class$ = NULL;
      jmethodID *ExpandableODE::mids$ = NULL;
      bool ExpandableODE::live$ = false;

      jclass ExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3fd05eb85385c75b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_4d3a805d476f8a0d] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/SecondaryODE;)I");
          mids$[mid_computeDerivatives_7b8ea6f669f90156] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getMapper_c85ebb7ac50d94ef] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
          mids$[mid_getPrimary_fa145b7a16039fac] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_init_d60bc5812a8e442c] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExpandableODE::ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3fd05eb85385c75b, a0.this$)) {}

      jint ExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_4d3a805d476f8a0d], a0.this$);
      }

      JArray< jdouble > ExpandableODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_7b8ea6f669f90156], a0, a1.this$));
      }

      ::org::hipparchus::ode::EquationsMapper ExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::EquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_c85ebb7ac50d94ef]));
      }

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_fa145b7a16039fac]));
      }

      void ExpandableODE::init(const ::org::hipparchus::ode::ODEState & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_d60bc5812a8e442c], a0.this$, a1);
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
      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg);
      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data);
      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data);
      static PyGetSetDef t_ExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_ExpandableODE, mapper),
        DECLARE_GET_FIELD(t_ExpandableODE, primary),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExpandableODE__methods_[] = {
        DECLARE_METHOD(t_ExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExpandableODE)[] = {
        { Py_tp_methods, t_ExpandableODE__methods_ },
        { Py_tp_init, (void *) t_ExpandableODE_init_ },
        { Py_tp_getset, t_ExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ExpandableODE, t_ExpandableODE, ExpandableODE);

      void t_ExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ExpandableODE), &PY_TYPE_DEF(ExpandableODE), module, "ExpandableODE", 0);
      }

      void t_ExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "class_", make_descriptor(ExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "wrapfn_", make_descriptor(t_ExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExpandableODE::initializeClass, 1)))
          return NULL;
        return t_ExpandableODE::wrap_Object(ExpandableODE(((t_ExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
        ExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0))
        {
          INT_CALL(object = ExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::SecondaryODE a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", ::org::hipparchus::ode::SecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::EquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::EquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(value);
      }

      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonItrfVersionProvider::class$ = NULL;
      jmethodID *PythonItrfVersionProvider::mids$ = NULL;
      bool PythonItrfVersionProvider::live$ = false;

      jclass PythonItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getConfiguration_b4e9a20fc9bc25eb] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonItrfVersionProvider::PythonItrfVersionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonItrfVersionProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonItrfVersionProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonItrfVersionProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self);
      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args);
      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data);
      static PyGetSetDef t_PythonItrfVersionProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonItrfVersionProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_PythonItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonItrfVersionProvider)[] = {
        { Py_tp_methods, t_PythonItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) t_PythonItrfVersionProvider_init_ },
        { Py_tp_getset, t_PythonItrfVersionProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonItrfVersionProvider, t_PythonItrfVersionProvider, PythonItrfVersionProvider);

      void t_PythonItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonItrfVersionProvider), &PY_TYPE_DEF(PythonItrfVersionProvider), module, "PythonItrfVersionProvider", 1);
      }

      void t_PythonItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "class_", make_descriptor(PythonItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "wrapfn_", make_descriptor(t_PythonItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonItrfVersionProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;", (void *) t_PythonItrfVersionProvider_getConfiguration0 },
          { "pythonDecRef", "()V", (void *) t_PythonItrfVersionProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_PythonItrfVersionProvider::wrap_Object(PythonItrfVersionProvider(((t_PythonItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonItrfVersionProvider object((jobject) NULL);

        INT_CALL(object = PythonItrfVersionProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getConfiguration", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, &value))
        {
          throwTypeError("getConfiguration", result);
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

      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonInterpolationGrid::class$ = NULL;
            jmethodID *PythonInterpolationGrid::mids$ = NULL;
            bool PythonInterpolationGrid::live$ = false;

            jclass PythonInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_8f7fecc995f3f6c8] = env->getMethodID(cls, "getGridPoints", "(DD)[D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonInterpolationGrid::PythonInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonInterpolationGrid::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self);
            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonInterpolationGrid, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonInterpolationGrid, t_PythonInterpolationGrid, PythonInterpolationGrid);

            void t_PythonInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonInterpolationGrid), &PY_TYPE_DEF(PythonInterpolationGrid), module, "PythonInterpolationGrid", 1);
            }

            void t_PythonInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "class_", make_descriptor(PythonInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "wrapfn_", make_descriptor(t_PythonInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(DD)[D", (void *) t_PythonInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonInterpolationGrid::wrap_Object(PythonInterpolationGrid(((t_PythonInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "dd", (double) a0, (double) a1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data)
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
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDouble::class$ = NULL;
      jmethodID *TimeStampedDouble::mids$ = NULL;
      bool TimeStampedDouble::live$ = false;

      jclass TimeStampedDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82dcc83e88ee1b1f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDouble::TimeStampedDouble(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82dcc83e88ee1b1f, a0, a1.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedDouble::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble TimeStampedDouble::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
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
      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data);
      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data);
      static PyGetSetDef t_TimeStampedDouble__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDouble, date),
        DECLARE_GET_FIELD(t_TimeStampedDouble, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDouble__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedDouble, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDouble)[] = {
        { Py_tp_methods, t_TimeStampedDouble__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDouble_init_ },
        { Py_tp_getset, t_TimeStampedDouble__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedDouble, t_TimeStampedDouble, TimeStampedDouble);

      void t_TimeStampedDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDouble), &PY_TYPE_DEF(TimeStampedDouble), module, "TimeStampedDouble", 0);
      }

      void t_TimeStampedDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "class_", make_descriptor(TimeStampedDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "wrapfn_", make_descriptor(t_TimeStampedDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDouble::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDouble::wrap_Object(TimeStampedDouble(((t_TimeStampedDouble *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeStampedDouble object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TimeStampedDouble(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttraction::class$ = NULL;
        jmethodID *ThirdBodyAttraction::mids$ = NULL;
        bool ThirdBodyAttraction::live$ = false;
        ::java::lang::String *ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass ThirdBodyAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_245df9da6b035d3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttraction::ThirdBodyAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_245df9da6b035d3e, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean ThirdBodyAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List ThirdBodyAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args);
        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data);
        static PyGetSetDef t_ThirdBodyAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_ThirdBodyAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThirdBodyAttraction__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttraction)[] = {
          { Py_tp_methods, t_ThirdBodyAttraction__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttraction_init_ },
          { Py_tp_getset, t_ThirdBodyAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttraction, t_ThirdBodyAttraction, ThirdBodyAttraction);

        void t_ThirdBodyAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttraction), &PY_TYPE_DEF(ThirdBodyAttraction), module, "ThirdBodyAttraction", 0);
        }

        void t_ThirdBodyAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "class_", make_descriptor(ThirdBodyAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "wrapfn_", make_descriptor(t_ThirdBodyAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(ThirdBodyAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttraction::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttraction::wrap_Object(ThirdBodyAttraction(((t_ThirdBodyAttraction *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data)
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
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonAbstractBatchLSModel::class$ = NULL;
        jmethodID *PythonAbstractBatchLSModel::mids$ = NULL;
        bool PythonAbstractBatchLSModel::live$ = false;

        jclass PythonAbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cea2a98fe3ea59d1] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_f80d2a02173b5959] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_9e53ad80ae898100] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createPropagators_654065e2ab8f1101] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;");
            mids$[mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEvaluationsCount_f2f64475e4580546] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_f2f64475e4580546] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_e470b6d9e0d979db] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEvaluationsCounter_33deb2f2de655904] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_33deb2f2de655904] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f8e49be09d1e1247] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractBatchLSModel::PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_cea2a98fe3ea59d1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > PythonAbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator >(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_createPropagators_ba27c0a798c66bed], a0.this$));
        }

        void PythonAbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93], a0, a1.this$);
        }

        void PythonAbstractBatchLSModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jint PythonAbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getEvaluationsCount_f2f64475e4580546]);
        }

        jint PythonAbstractBatchLSModel::getIterationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getIterationsCount_f2f64475e4580546]);
        }

        ::org::orekit::utils::ParameterDriversList PythonAbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff], a0));
        }

        jboolean PythonAbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callNonvirtualBooleanMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_isForwardPropagation_e470b6d9e0d979db]);
        }

        jlong PythonAbstractBatchLSModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractBatchLSModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }

        void PythonAbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setEvaluationsCounter_33deb2f2de655904], a0.this$);
        }

        void PythonAbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setIterationsCounter_33deb2f2de655904], a0.this$);
        }

        ::org::hipparchus::util::Pair PythonAbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_value_f8e49be09d1e1247], a0.this$));
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
      namespace leastsquares {
        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self);
        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0);
        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data);
        static PyGetSetDef t_PythonAbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractBatchLSModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, createPropagators, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getEvaluationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getIterationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, isForwardPropagation, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, pythonExtension, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setEvaluationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setIterationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBatchLSModel)[] = {
          { Py_tp_methods, t_PythonAbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractBatchLSModel_init_ },
          { Py_tp_getset, t_PythonAbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractBatchLSModel, t_PythonAbstractBatchLSModel, PythonAbstractBatchLSModel);

        void t_PythonAbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractBatchLSModel), &PY_TYPE_DEF(PythonAbstractBatchLSModel), module, "PythonAbstractBatchLSModel", 1);
        }

        void t_PythonAbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "class_", make_descriptor(PythonAbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "wrapfn_", make_descriptor(t_PythonAbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractBatchLSModel::initializeClass);
          JNINativeMethod methods[] = {
            { "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonAbstractBatchLSModel_configureHarvester0 },
            { "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractBatchLSModel_configureOrbits1 },
            { "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;", (void *) t_PythonAbstractBatchLSModel_createPropagators2 },
            { "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3 },
            { "getEvaluationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getEvaluationsCount4 },
            { "getIterationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getIterationsCount5 },
            { "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6 },
            { "isForwardPropagation", "()Z", (void *) t_PythonAbstractBatchLSModel_isForwardPropagation7 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractBatchLSModel_pythonDecRef8 },
            { "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setEvaluationsCounter9 },
            { "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setIterationsCounter10 },
            { "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;", (void *) t_PythonAbstractBatchLSModel_value11 },
          };
          env->registerNatives(cls, methods, 12);
        }

        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractBatchLSModel::wrap_Object(PythonAbstractBatchLSModel(((t_PythonAbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          PythonAbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractBatchLSModel(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::integration::t_AbstractIntegratedPropagator::wrap_jobject);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "createPropagators", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "fetchEvaluatedMeasurement", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getEvaluationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getIterationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getIterationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getSelectedPropagationDriversForBuilder", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isForwardPropagation());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "isForwardPropagation", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args)
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

        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setEvaluationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setIterationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "value", args, 2);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *result = PyObject_CallMethod(obj, "configureHarvester", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
          {
            throwTypeError("configureHarvester", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(::org::orekit::propagation::MatricesHarvester(a0));
          PyObject *o1 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a1));
          PyObject *result = PyObject_CallMethod(obj, "configureOrbits", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("configureOrbits", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "createPropagators", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator::initializeClass, &value))
          {
            throwTypeError("createPropagators", result);
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

        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o1 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a1));
          PyObject *result = PyObject_CallMethod(obj, "fetchEvaluatedMeasurement", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getEvaluationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getEvaluationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getIterationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getIterationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedPropagationDriversForBuilder", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getSelectedPropagationDriversForBuilder", result);
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

        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForwardPropagation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForwardPropagation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setEvaluationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setIterationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::util::Pair value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::util::Pair::initializeClass, &value))
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

        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data)
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
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Multiply::class$ = NULL;
        jmethodID *Multiply::mids$ = NULL;
        bool Multiply::live$ = false;

        jclass Multiply::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Multiply");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Multiply::Multiply() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Multiply::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args);

        static PyMethodDef t_Multiply__methods_[] = {
          DECLARE_METHOD(t_Multiply, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Multiply)[] = {
          { Py_tp_methods, t_Multiply__methods_ },
          { Py_tp_init, (void *) t_Multiply_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Multiply)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Multiply, t_Multiply, Multiply);

        void t_Multiply::install(PyObject *module)
        {
          installType(&PY_TYPE(Multiply), &PY_TYPE_DEF(Multiply), module, "Multiply", 0);
        }

        void t_Multiply::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "class_", make_descriptor(Multiply::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "wrapfn_", make_descriptor(t_Multiply::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Multiply::initializeClass, 1)))
            return NULL;
          return t_Multiply::wrap_Object(Multiply(((t_Multiply *) arg)->object.this$));
        }
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Multiply::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds)
        {
          Multiply object((jobject) NULL);

          INT_CALL(object = Multiply());
          self->object = object;

          return 0;
        }

        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args)
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
#include "org/orekit/bodies/PythonIAUPole.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonIAUPole::class$ = NULL;
      jmethodID *PythonIAUPole::mids$ = NULL;
      bool PythonIAUPole::live$ = false;

      jclass PythonIAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonIAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getNode_71c51b45829333ce] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_11a4be79061d1fe3] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_71c51b45829333ce] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_11a4be79061d1fe3] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_e912d21057defe63] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_7bc0fd76ee915b72] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonIAUPole::PythonIAUPole() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonIAUPole::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonIAUPole::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonIAUPole::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self);
      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args);
      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data);
      static PyGetSetDef t_PythonIAUPole__fields_[] = {
        DECLARE_GET_FIELD(t_PythonIAUPole, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonIAUPole__methods_[] = {
        DECLARE_METHOD(t_PythonIAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonIAUPole, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonIAUPole)[] = {
        { Py_tp_methods, t_PythonIAUPole__methods_ },
        { Py_tp_init, (void *) t_PythonIAUPole_init_ },
        { Py_tp_getset, t_PythonIAUPole__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonIAUPole)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonIAUPole, t_PythonIAUPole, PythonIAUPole);

      void t_PythonIAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonIAUPole), &PY_TYPE_DEF(PythonIAUPole), module, "PythonIAUPole", 1);
      }

      void t_PythonIAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "class_", make_descriptor(PythonIAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "wrapfn_", make_descriptor(t_PythonIAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonIAUPole::initializeClass);
        JNINativeMethod methods[] = {
          { "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getNode0 },
          { "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getNode1 },
          { "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getPole2 },
          { "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getPole3 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonIAUPole_getPrimeMeridianAngle4 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIAUPole_getPrimeMeridianAngle5 },
          { "pythonDecRef", "()V", (void *) t_PythonIAUPole_pythonDecRef6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonIAUPole::initializeClass, 1)))
          return NULL;
        return t_PythonIAUPole::wrap_Object(PythonIAUPole(((t_PythonIAUPole *) arg)->object.this$));
      }
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonIAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds)
      {
        PythonIAUPole object((jobject) NULL);

        INT_CALL(object = PythonIAUPole());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args)
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

      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
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

      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data)
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
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonDragSensitive::class$ = NULL;
        jmethodID *PythonDragSensitive::mids$ = NULL;
        bool PythonDragSensitive::live$ = false;

        jclass PythonDragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonDragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_dragAcceleration_72c100be3e679e5e] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_3061f9a13979e9fa] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDragParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDragSensitive::PythonDragSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonDragSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonDragSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonDragSensitive::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace drag {
        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self);
        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data);
        static PyGetSetDef t_PythonDragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonDragSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonDragSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonDragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonDragSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonDragSensitive)[] = {
          { Py_tp_methods, t_PythonDragSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonDragSensitive_init_ },
          { Py_tp_getset, t_PythonDragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonDragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonDragSensitive, t_PythonDragSensitive, PythonDragSensitive);

        void t_PythonDragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonDragSensitive), &PY_TYPE_DEF(PythonDragSensitive), module, "PythonDragSensitive", 1);
        }

        void t_PythonDragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "class_", make_descriptor(PythonDragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "wrapfn_", make_descriptor(t_PythonDragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonDragSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonDragSensitive_dragAcceleration0 },
            { "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonDragSensitive_dragAcceleration1 },
            { "getDragParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDragSensitive_getDragParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonDragSensitive_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonDragSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonDragSensitive::wrap_Object(PythonDragSensitive(((t_PythonDragSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonDragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonDragSensitive object((jobject) NULL);

          INT_CALL(object = PythonDragSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *o3 = JArray<jdouble>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OdOO", o0, (double) a1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a2));
          PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDragParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getDragParametersDrivers", result);
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

        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Record::class$ = NULL;
          jmethodID *Record::mids$ = NULL;
          bool Record::live$ = false;

          jclass Record::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Record");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMisc_0090f7797e403f43] = env->getMethodID(cls, "getMisc", "()Ljava/lang/String;");
              mids$[mid_getRecordType_9f311496246ad578] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getFieldsNumber_f2f64475e4580546] = env->getMethodID(cls, "getFieldsNumber", "()I");
              mids$[mid_getField_90cbcc0b7a5ddae9] = env->getMethodID(cls, "getField", "(I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String Record::getMisc() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMisc_0090f7797e403f43]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType Record::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_9f311496246ad578]));
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
          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_getMisc(t_Record *self);
          static PyObject *t_Record_getRecordType(t_Record *self);
          static PyObject *t_Record_get__misc(t_Record *self, void *data);
          static PyObject *t_Record_get__recordType(t_Record *self, void *data);
          static PyGetSetDef t_Record__fields_[] = {
            DECLARE_GET_FIELD(t_Record, misc),
            DECLARE_GET_FIELD(t_Record, recordType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Record__methods_[] = {
            DECLARE_METHOD(t_Record, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, getMisc, METH_NOARGS),
            DECLARE_METHOD(t_Record, getRecordType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Record)[] = {
            { Py_tp_methods, t_Record__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Record__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Record)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Record, t_Record, Record);

          void t_Record::install(PyObject *module)
          {
            installType(&PY_TYPE(Record), &PY_TYPE_DEF(Record), module, "Record", 0);
          }

          void t_Record::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "class_", make_descriptor(Record::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "wrapfn_", make_descriptor(t_Record::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Record::initializeClass, 1)))
              return NULL;
            return t_Record::wrap_Object(Record(((t_Record *) arg)->object.this$));
          }
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Record::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Record_getMisc(t_Record *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMisc());
            return j2p(result);
          }

          static PyObject *t_Record_getRecordType(t_Record *self)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);
            OBJ_CALL(result = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
          }

          static PyObject *t_Record_get__misc(t_Record *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMisc());
            return j2p(value);
          }

          static PyObject *t_Record_get__recordType(t_Record *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonCycleSlipDetectors::class$ = NULL;
          jmethodID *PythonCycleSlipDetectors::mids$ = NULL;
          bool PythonCycleSlipDetectors::live$ = false;

          jclass PythonCycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_detect_fa7c1e622bc91b53] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonCycleSlipDetectors::PythonCycleSlipDetectors() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonCycleSlipDetectors::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonCycleSlipDetectors::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonCycleSlipDetectors::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self);
          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args);
          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data);
          static PyGetSetDef t_PythonCycleSlipDetectors__fields_[] = {
            DECLARE_GET_FIELD(t_PythonCycleSlipDetectors, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonCycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_PythonCycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonCycleSlipDetectors)[] = {
            { Py_tp_methods, t_PythonCycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) t_PythonCycleSlipDetectors_init_ },
            { Py_tp_getset, t_PythonCycleSlipDetectors__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonCycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonCycleSlipDetectors, t_PythonCycleSlipDetectors, PythonCycleSlipDetectors);

          void t_PythonCycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonCycleSlipDetectors), &PY_TYPE_DEF(PythonCycleSlipDetectors), module, "PythonCycleSlipDetectors", 1);
          }

          void t_PythonCycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "class_", make_descriptor(PythonCycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "wrapfn_", make_descriptor(t_PythonCycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonCycleSlipDetectors::initializeClass);
            JNINativeMethod methods[] = {
              { "detect", "(Ljava/util/List;)Ljava/util/List;", (void *) t_PythonCycleSlipDetectors_detect0 },
              { "pythonDecRef", "()V", (void *) t_PythonCycleSlipDetectors_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonCycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_PythonCycleSlipDetectors::wrap_Object(PythonCycleSlipDetectors(((t_PythonCycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonCycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds)
          {
            PythonCycleSlipDetectors object((jobject) NULL);

            INT_CALL(object = PythonCycleSlipDetectors());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args)
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

          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
            PyObject *result = PyObject_CallMethod(obj, "detect", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("detect", result);
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

          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Euclidean1D$NoSubSpaceException::mids$ = NULL;
          bool Euclidean1D$NoSubSpaceException::live$ = false;

          jclass Euclidean1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Euclidean1D$NoSubSpaceException::Euclidean1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Euclidean1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Euclidean1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Euclidean1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Euclidean1D$NoSubSpaceException, t_Euclidean1D$NoSubSpaceException, Euclidean1D$NoSubSpaceException);

          void t_Euclidean1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D$NoSubSpaceException), &PY_TYPE_DEF(Euclidean1D$NoSubSpaceException), module, "Euclidean1D$NoSubSpaceException", 0);
          }

          void t_Euclidean1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "class_", make_descriptor(Euclidean1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Euclidean1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D$NoSubSpaceException::wrap_Object(Euclidean1D$NoSubSpaceException(((t_Euclidean1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Euclidean1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Euclidean1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere2D::class$ = NULL;
        jmethodID *InterpolatingMicrosphere2D::mids$ = NULL;
        bool InterpolatingMicrosphere2D::live$ = false;

        jclass InterpolatingMicrosphere2D::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_copy_c83e2308835faacc] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere2D::InterpolatingMicrosphere2D(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        InterpolatingMicrosphere2D InterpolatingMicrosphere2D::copy() const
        {
          return InterpolatingMicrosphere2D(env->callObjectMethod(this$, mids$[mid_copy_c83e2308835faacc]));
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
        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args);

        static PyMethodDef t_InterpolatingMicrosphere2D__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere2D)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere2D__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere2D_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere2D)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere2D, t_InterpolatingMicrosphere2D, InterpolatingMicrosphere2D);

        void t_InterpolatingMicrosphere2D::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere2D), &PY_TYPE_DEF(InterpolatingMicrosphere2D), module, "InterpolatingMicrosphere2D", 0);
        }

        void t_InterpolatingMicrosphere2D::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "class_", make_descriptor(InterpolatingMicrosphere2D::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere2D::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere2D::wrap_Object(InterpolatingMicrosphere2D(((t_InterpolatingMicrosphere2D *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          InterpolatingMicrosphere2D object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = InterpolatingMicrosphere2D(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args)
        {
          InterpolatingMicrosphere2D result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_InterpolatingMicrosphere2D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterpolatingMicrosphere2D), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *MultivariateRealDistribution::class$ = NULL;
      jmethodID *MultivariateRealDistribution::mids$ = NULL;
      bool MultivariateRealDistribution::live$ = false;

      jclass MultivariateRealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/MultivariateRealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_density_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "density", "([D)D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_reseedRandomGenerator_fefb08975c10f0a1] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
          mids$[mid_sample_7cdc325af0834901] = env->getMethodID(cls, "sample", "()[D");
          mids$[mid_sample_01d6404243df74a0] = env->getMethodID(cls, "sample", "(I)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateRealDistribution::density(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_f05cb8c6dfd5e0b9], a0.this$);
      }

      jint MultivariateRealDistribution::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void MultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_fefb08975c10f0a1], a0);
      }

      JArray< jdouble > MultivariateRealDistribution::sample() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_7cdc325af0834901]));
      }

      JArray< JArray< jdouble > > MultivariateRealDistribution::sample(jint a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_01d6404243df74a0], a0));
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
      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self);
      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args);
      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data);
      static PyGetSetDef t_MultivariateRealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_MultivariateRealDistribution, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultivariateRealDistribution__methods_[] = {
        DECLARE_METHOD(t_MultivariateRealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, density, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultivariateRealDistribution, reseedRandomGenerator, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, sample, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateRealDistribution)[] = {
        { Py_tp_methods, t_MultivariateRealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultivariateRealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateRealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateRealDistribution, t_MultivariateRealDistribution, MultivariateRealDistribution);

      void t_MultivariateRealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateRealDistribution), &PY_TYPE_DEF(MultivariateRealDistribution), module, "MultivariateRealDistribution", 0);
      }

      void t_MultivariateRealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "class_", make_descriptor(MultivariateRealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "wrapfn_", make_descriptor(t_MultivariateRealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateRealDistribution::initializeClass, 1)))
          return NULL;
        return t_MultivariateRealDistribution::wrap_Object(MultivariateRealDistribution(((t_MultivariateRealDistribution *) arg)->object.this$));
      }
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateRealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.reseedRandomGenerator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }
          break;
         case 1:
          {
            jint a0;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.sample(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sample", args);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$LeafMerger::class$ = NULL;
        jmethodID *BSPTree$LeafMerger::mids$ = NULL;
        bool BSPTree$LeafMerger::live$ = false;

        jclass BSPTree$LeafMerger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$LeafMerger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_merge_7fa72586ee5e09f6] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;ZZ)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$LeafMerger::merge(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree & a1, const ::org::hipparchus::geometry::partitioning::BSPTree & a2, jboolean a3, jboolean a4) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_merge_7fa72586ee5e09f6], a0.this$, a1.this$, a2.this$, a3, a4));
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
        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data);
        static PyGetSetDef t_BSPTree$LeafMerger__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$LeafMerger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$LeafMerger__methods_[] = {
          DECLARE_METHOD(t_BSPTree$LeafMerger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, merge, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$LeafMerger)[] = {
          { Py_tp_methods, t_BSPTree$LeafMerger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$LeafMerger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$LeafMerger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$LeafMerger, t_BSPTree$LeafMerger, BSPTree$LeafMerger);
        PyObject *t_BSPTree$LeafMerger::wrap_Object(const BSPTree$LeafMerger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$LeafMerger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$LeafMerger::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$LeafMerger), &PY_TYPE_DEF(BSPTree$LeafMerger), module, "BSPTree$LeafMerger", 0);
        }

        void t_BSPTree$LeafMerger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "class_", make_descriptor(BSPTree$LeafMerger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "wrapfn_", make_descriptor(t_BSPTree$LeafMerger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$LeafMerger::initializeClass, 1)))
            return NULL;
          return t_BSPTree$LeafMerger::wrap_Object(BSPTree$LeafMerger(((t_BSPTree$LeafMerger *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$LeafMerger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::BSPTree a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean a3;
          jboolean a4;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KKKZZ", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a3, &a4))
          {
            OBJ_CALL(result = self->object.merge(a0, a1, a2, a3, a4));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphericalCoordinates::class$ = NULL;
          jmethodID *SphericalCoordinates::mids$ = NULL;
          bool SphericalCoordinates::live$ = false;

          jclass SphericalCoordinates::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphericalCoordinates");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getCartesian_17a952530a808943] = env->getMethodID(cls, "getCartesian", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPhi_456d9a2f64d6b28d] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getR_456d9a2f64d6b28d] = env->getMethodID(cls, "getR", "()D");
              mids$[mid_getTheta_456d9a2f64d6b28d] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_toCartesianGradient_4b742fe429c22ba8] = env->getMethodID(cls, "toCartesianGradient", "([D)[D");
              mids$[mid_toCartesianHessian_9da102b450375ee4] = env->getMethodID(cls, "toCartesianHessian", "([[D[D)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalCoordinates::SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

          SphericalCoordinates::SphericalCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SphericalCoordinates::getCartesian() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesian_17a952530a808943]));
          }

          jdouble SphericalCoordinates::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_456d9a2f64d6b28d]);
          }

          jdouble SphericalCoordinates::getR() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getR_456d9a2f64d6b28d]);
          }

          jdouble SphericalCoordinates::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_456d9a2f64d6b28d]);
          }

          JArray< jdouble > SphericalCoordinates::toCartesianGradient(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toCartesianGradient_4b742fe429c22ba8], a0.this$));
          }

          JArray< JArray< jdouble > > SphericalCoordinates::toCartesianHessian(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_toCartesianHessian_9da102b450375ee4], a0.this$, a1.this$));
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
          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg);
          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args);
          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data);
          static PyGetSetDef t_SphericalCoordinates__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalCoordinates, cartesian),
            DECLARE_GET_FIELD(t_SphericalCoordinates, phi),
            DECLARE_GET_FIELD(t_SphericalCoordinates, r),
            DECLARE_GET_FIELD(t_SphericalCoordinates, theta),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalCoordinates__methods_[] = {
            DECLARE_METHOD(t_SphericalCoordinates, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, getCartesian, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getR, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianGradient, METH_O),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianHessian, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalCoordinates)[] = {
            { Py_tp_methods, t_SphericalCoordinates__methods_ },
            { Py_tp_init, (void *) t_SphericalCoordinates_init_ },
            { Py_tp_getset, t_SphericalCoordinates__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalCoordinates)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphericalCoordinates, t_SphericalCoordinates, SphericalCoordinates);

          void t_SphericalCoordinates::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalCoordinates), &PY_TYPE_DEF(SphericalCoordinates), module, "SphericalCoordinates", 0);
          }

          void t_SphericalCoordinates::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "class_", make_descriptor(SphericalCoordinates::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "wrapfn_", make_descriptor(t_SphericalCoordinates::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalCoordinates::initializeClass, 1)))
              return NULL;
            return t_SphericalCoordinates::wrap_Object(SphericalCoordinates(((t_SphericalCoordinates *) arg)->object.this$));
          }
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalCoordinates::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = SphericalCoordinates(a0));
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
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SphericalCoordinates(a0, a1, a2));
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

          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getR());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.toCartesianGradient(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianGradient", arg);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args)
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "[[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toCartesianHessian(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianHessian", args);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getR());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
