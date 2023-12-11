#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldContinueOnEvent::class$ = NULL;
          jmethodID *FieldContinueOnEvent::mids$ = NULL;
          bool FieldContinueOnEvent::live$ = false;

          jclass FieldContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldContinueOnEvent::FieldContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action FieldContinueOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args);
          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args);
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data);
          static PyGetSetDef t_FieldContinueOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldContinueOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldContinueOnEvent)[] = {
            { Py_tp_methods, t_FieldContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldContinueOnEvent_init_ },
            { Py_tp_getset, t_FieldContinueOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldContinueOnEvent, t_FieldContinueOnEvent, FieldContinueOnEvent);
          PyObject *t_FieldContinueOnEvent::wrap_Object(const FieldContinueOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldContinueOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldContinueOnEvent), &PY_TYPE_DEF(FieldContinueOnEvent), module, "FieldContinueOnEvent", 0);
          }

          void t_FieldContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "class_", make_descriptor(FieldContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "wrapfn_", make_descriptor(t_FieldContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldContinueOnEvent::wrap_Object(FieldContinueOnEvent(((t_FieldContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldContinueOnEvent object((jobject) NULL);

            INT_CALL(object = FieldContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data)
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
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool AbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass AbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_2a145999b8c9a41d] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > AbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_2a145999b8c9a41d], a0.this$));
        }

        void AbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);

        static PyMethodDef t_AbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator$MainStateEquations, t_AbstractIntegratedPropagator$MainStateEquations, AbstractIntegratedPropagator$MainStateEquations);

        void t_AbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations), module, "AbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_AbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator$MainStateEquations::wrap_Object(AbstractIntegratedPropagator$MainStateEquations(((t_AbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f3a5c63632a9e24b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_8677e670f9e68e2e] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_b8a6828b51da0153] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_create_db4f00c98cfc24ba] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, const ::org::hipparchus::ode::events::FilterType & a2) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(env->newObject(initializeClass, &mids$, mid_init$_f3a5c63632a9e24b, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_8677e670f9e68e2e], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_b8a6828b51da0153]));
        }

        void FieldEventSlopeFilter::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractFieldODEDetector),
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
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FilterType a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1, a2));
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
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGpsCodeOnL2_412668abc8d889e9] = env->getMethodID(cls, "getGpsCodeOnL2", "()I");
                  mids$[mid_getGpsFitInterval_412668abc8d889e9] = env->getMethodID(cls, "getGpsFitInterval", "()I");
                  mids$[mid_getGpsL2PDataFlag_89b302893bdbe1f1] = env->getMethodID(cls, "getGpsL2PDataFlag", "()Z");
                  mids$[mid_getGpsNavigationMessage_e97c0a268023bf7a] = env->getMethodID(cls, "getGpsNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsNavigationMessage_5a132e5828edd449] = env->getMethodID(cls, "getGpsNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsToc_557b8123390d8d0c] = env->getMethodID(cls, "getGpsToc", "()D");
                  mids$[mid_setGpsCodeOnL2_a3da1a935cb37f7b] = env->getMethodID(cls, "setGpsCodeOnL2", "(I)V");
                  mids$[mid_setGpsFitInterval_a3da1a935cb37f7b] = env->getMethodID(cls, "setGpsFitInterval", "(I)V");
                  mids$[mid_setGpsL2PDataFlag_ed2afdb8506b9742] = env->getMethodID(cls, "setGpsL2PDataFlag", "(Z)V");
                  mids$[mid_setGpsNavigationMessage_32ebc1a815392aa5] = env->getMethodID(cls, "setGpsNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
                  mids$[mid_setGpsToc_10f281d777284cea] = env->getMethodID(cls, "setGpsToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019Data::Rtcm1019Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint Rtcm1019Data::getGpsCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsCodeOnL2_412668abc8d889e9]);
              }

              jint Rtcm1019Data::getGpsFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsFitInterval_412668abc8d889e9]);
              }

              jboolean Rtcm1019Data::getGpsL2PDataFlag() const
              {
                return env->callBooleanMethod(this$, mids$[mid_getGpsL2PDataFlag_89b302893bdbe1f1]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_e97c0a268023bf7a]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_5a132e5828edd449], a0.this$));
              }

              jdouble Rtcm1019Data::getGpsToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGpsToc_557b8123390d8d0c]);
              }

              void Rtcm1019Data::setGpsCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsCodeOnL2_a3da1a935cb37f7b], a0);
              }

              void Rtcm1019Data::setGpsFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsFitInterval_a3da1a935cb37f7b], a0);
              }

              void Rtcm1019Data::setGpsL2PDataFlag(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsL2PDataFlag_ed2afdb8506b9742], a0);
              }

              void Rtcm1019Data::setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsNavigationMessage_32ebc1a815392aa5], a0.this$);
              }

              void Rtcm1019Data::setGpsToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsToc_10f281d777284cea], a0);
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
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station$ReferenceSystem::class$ = NULL;
        jmethodID *Station$ReferenceSystem::mids$ = NULL;
        bool Station$ReferenceSystem::live$ = false;
        Station$ReferenceSystem *Station$ReferenceSystem::UNE = NULL;
        Station$ReferenceSystem *Station$ReferenceSystem::XYZ = NULL;

        jclass Station$ReferenceSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station$ReferenceSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccRefSystem_eb64cc3aae726ad0] = env->getStaticMethodID(cls, "getEccRefSystem", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_valueOf_eb64cc3aae726ad0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_values_037e708780c44d0f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sinex/Station$ReferenceSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            UNE = new Station$ReferenceSystem(env->getStaticObjectField(cls, "UNE", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            XYZ = new Station$ReferenceSystem(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station$ReferenceSystem Station$ReferenceSystem::getEccRefSystem(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_getEccRefSystem_eb64cc3aae726ad0], a0.this$));
        }

        ::java::lang::String Station$ReferenceSystem::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        Station$ReferenceSystem Station$ReferenceSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eb64cc3aae726ad0], a0.this$));
        }

        JArray< Station$ReferenceSystem > Station$ReferenceSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Station$ReferenceSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_037e708780c44d0f]));
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
      namespace sinex {
        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self);
        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type);
        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data);
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data);
        static PyGetSetDef t_Station$ReferenceSystem__fields_[] = {
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, name),
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station$ReferenceSystem__methods_[] = {
          DECLARE_METHOD(t_Station$ReferenceSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getEccRefSystem, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getName, METH_NOARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station$ReferenceSystem)[] = {
          { Py_tp_methods, t_Station$ReferenceSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Station$ReferenceSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station$ReferenceSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Station$ReferenceSystem, t_Station$ReferenceSystem, Station$ReferenceSystem);
        PyObject *t_Station$ReferenceSystem::wrap_Object(const Station$ReferenceSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Station$ReferenceSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Station$ReferenceSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(Station$ReferenceSystem), &PY_TYPE_DEF(Station$ReferenceSystem), module, "Station$ReferenceSystem", 0);
        }

        void t_Station$ReferenceSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "class_", make_descriptor(Station$ReferenceSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "wrapfn_", make_descriptor(t_Station$ReferenceSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(Station$ReferenceSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "UNE", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::UNE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "XYZ", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::XYZ)));
        }

        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station$ReferenceSystem::initializeClass, 1)))
            return NULL;
          return t_Station$ReferenceSystem::wrap_Object(Station$ReferenceSystem(((t_Station$ReferenceSystem *) arg)->object.this$));
        }
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station$ReferenceSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::getEccRefSystem(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::valueOf(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type)
        {
          JArray< Station$ReferenceSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::values());
          return JArray<jobject>(result.this$).wrap(t_Station$ReferenceSystem::wrap_jobject);
        }
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Phase::class$ = NULL;
          jmethodID *Phase::mids$ = NULL;
          bool Phase::live$ = false;
          ::java::lang::String *Phase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *Phase::MEASUREMENT_TYPE = NULL;

          jclass Phase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Phase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_341933c95b79307d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_4194657b5e280ddc] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Phase::Phase(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_341933c95b79307d, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}

          ::org::orekit::utils::ParameterDriver Phase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_4194657b5e280ddc]));
          }

          jdouble Phase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_557b8123390d8d0c]);
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
          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args);
          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self);
          static PyObject *t_Phase_getWavelength(t_Phase *self);
          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data);
          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data);
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data);
          static PyGetSetDef t_Phase__fields_[] = {
            DECLARE_GET_FIELD(t_Phase, ambiguityDriver),
            DECLARE_GET_FIELD(t_Phase, wavelength),
            DECLARE_GET_FIELD(t_Phase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Phase__methods_[] = {
            DECLARE_METHOD(t_Phase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, of_, METH_VARARGS),
            DECLARE_METHOD(t_Phase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_Phase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Phase)[] = {
            { Py_tp_methods, t_Phase__methods_ },
            { Py_tp_init, (void *) t_Phase_init_ },
            { Py_tp_getset, t_Phase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Phase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
            NULL
          };

          DEFINE_TYPE(Phase, t_Phase, Phase);
          PyObject *t_Phase::wrap_Object(const Phase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Phase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Phase::install(PyObject *module)
          {
            installType(&PY_TYPE(Phase), &PY_TYPE_DEF(Phase), module, "Phase", 0);
          }

          void t_Phase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "class_", make_descriptor(Phase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "wrapfn_", make_descriptor(t_Phase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "boxfn_", make_descriptor(boxObject));
            env->getClass(Phase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "AMBIGUITY_NAME", make_descriptor(j2p(*Phase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "MEASUREMENT_TYPE", make_descriptor(j2p(*Phase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Phase::initializeClass, 1)))
              return NULL;
            return t_Phase::wrap_Object(Phase(((t_Phase *) arg)->object.this$));
          }
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Phase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            Phase object((jobject) NULL);

            if (!parseArgs(args, "kkDDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = Phase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_Phase_getWavelength(t_Phase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *BodyShape::class$ = NULL;
      jmethodID *BodyShape::mids$ = NULL;
      bool BodyShape::live$ = false;

      jclass BodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/BodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_6391bd6fdaac29a3] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_884873e1d3d77c4e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_projectToGround_3d4e9a6447a03aa9] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_4c5eeaf1ff845fca] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_8b70a50ea3e1f728] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_8e052cb77f98e021] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame BodyShape::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_6391bd6fdaac29a3], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_884873e1d3d77c4e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyShape::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3d4e9a6447a03aa9], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_4c5eeaf1ff845fca], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BodyShape::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_8b70a50ea3e1f728], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_8b264141c1de262c], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_8e052cb77f98e021], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_4dfad8dc678d42b2], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self);
      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data);
      static PyGetSetDef t_BodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_BodyShape, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodyShape__methods_[] = {
        DECLARE_METHOD(t_BodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_BodyShape, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyShape)[] = {
        { Py_tp_methods, t_BodyShape__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyShape)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(BodyShape, t_BodyShape, BodyShape);

      void t_BodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyShape), &PY_TYPE_DEF(BodyShape), module, "BodyShape", 0);
      }

      void t_BodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "class_", make_descriptor(BodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "wrapfn_", make_descriptor(t_BodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyShape::initializeClass, 1)))
          return NULL;
        return t_BodyShape::wrap_Object(BodyShape(((t_BodyShape *) arg)->object.this$));
      }
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzer::class$ = NULL;
            jmethodID *LexicalAnalyzer::mids$ = NULL;
            bool LexicalAnalyzer::live$ = false;

            jclass LexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_dc31073a650e82af] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object LexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_dc31073a650e82af], a0.this$));
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
            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzer)[] = {
              { Py_tp_methods, t_LexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzer, t_LexicalAnalyzer, LexicalAnalyzer);

            void t_LexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzer), &PY_TYPE_DEF(LexicalAnalyzer), module, "LexicalAnalyzer", 0);
            }

            void t_LexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "class_", make_descriptor(LexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "wrapfn_", make_descriptor(t_LexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzer::wrap_Object(LexicalAnalyzer(((t_LexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_277b266ef2505d2d] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_computeObjectiveValue_7e960cd6eee376d8] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");
            mids$[mid_setup_1c22c5d1ce93543d] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint BaseAbstractUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jint BaseAbstractUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
        }

        jint BaseAbstractUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_412668abc8d889e9]);
        }

        jint BaseAbstractUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_412668abc8d889e9]);
        }

        jdouble BaseAbstractUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_277b266ef2505d2d], a0, a1.this$, a2, a3);
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
      namespace integration {
        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateIntegrator, t_BaseAbstractUnivariateIntegrator, BaseAbstractUnivariateIntegrator);

        void t_BaseAbstractUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractUnivariateIntegrator), module, "BaseAbstractUnivariateIntegrator", 0);
        }

        void t_BaseAbstractUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "class_", make_descriptor(BaseAbstractUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateIntegrator::wrap_Object(BaseAbstractUnivariateIntegrator(((t_BaseAbstractUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEJacobiansProvider::class$ = NULL;
      jmethodID *ODEJacobiansProvider::mids$ = NULL;
      bool ODEJacobiansProvider::live$ = false;

      jclass ODEJacobiansProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEJacobiansProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeMainStateJacobian_bd7192e808ddb91f] = env->getMethodID(cls, "computeMainStateJacobian", "(D[D[D)[[D");
          mids$[mid_computeParameterJacobian_b987435e157df371] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");
          mids$[mid_getParametersNames_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_fd2162b8a05a22fe] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > ODEJacobiansProvider::computeMainStateJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_computeMainStateJacobian_bd7192e808ddb91f], a0, a1.this$, a2.this$));
      }

      JArray< jdouble > ODEJacobiansProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b987435e157df371], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List ODEJacobiansProvider::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_0d9551367f7ecdef]));
      }

      jboolean ODEJacobiansProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_fd2162b8a05a22fe], a0.this$);
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
      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self);
      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data);
      static PyGetSetDef t_ODEJacobiansProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ODEJacobiansProvider, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEJacobiansProvider__methods_[] = {
        DECLARE_METHOD(t_ODEJacobiansProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeMainStateJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEJacobiansProvider)[] = {
        { Py_tp_methods, t_ODEJacobiansProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEJacobiansProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEJacobiansProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::OrdinaryDifferentialEquation),
        NULL
      };

      DEFINE_TYPE(ODEJacobiansProvider, t_ODEJacobiansProvider, ODEJacobiansProvider);

      void t_ODEJacobiansProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEJacobiansProvider), &PY_TYPE_DEF(ODEJacobiansProvider), module, "ODEJacobiansProvider", 0);
      }

      void t_ODEJacobiansProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "class_", make_descriptor(ODEJacobiansProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "wrapfn_", make_descriptor(t_ODEJacobiansProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEJacobiansProvider::initializeClass, 1)))
          return NULL;
        return t_ODEJacobiansProvider::wrap_Object(ODEJacobiansProvider(((t_ODEJacobiansProvider *) arg)->object.this$));
      }
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEJacobiansProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeMainStateJacobian(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "computeMainStateJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg)
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

      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareComparator::class$ = NULL;
          jmethodID *IntegerLeastSquareComparator::mids$ = NULL;
          bool IntegerLeastSquareComparator::live$ = false;

          jclass IntegerLeastSquareComparator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_compare_b55c09687809027d] = env->getMethodID(cls, "compare", "(Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareComparator::IntegerLeastSquareComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          jint IntegerLeastSquareComparator::compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a1) const
          {
            return env->callIntMethod(this$, mids$[mid_compare_b55c09687809027d], a0.this$, a1.this$);
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
          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareComparator__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareComparator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, compare, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareComparator)[] = {
            { Py_tp_methods, t_IntegerLeastSquareComparator__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareComparator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareComparator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareComparator, t_IntegerLeastSquareComparator, IntegerLeastSquareComparator);

          void t_IntegerLeastSquareComparator::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareComparator), &PY_TYPE_DEF(IntegerLeastSquareComparator), module, "IntegerLeastSquareComparator", 0);
          }

          void t_IntegerLeastSquareComparator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "class_", make_descriptor(IntegerLeastSquareComparator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "wrapfn_", make_descriptor(t_IntegerLeastSquareComparator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareComparator::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareComparator::wrap_Object(IntegerLeastSquareComparator(((t_IntegerLeastSquareComparator *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareComparator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds)
          {
            IntegerLeastSquareComparator object((jobject) NULL);

            INT_CALL(object = IntegerLeastSquareComparator());
            self->object = object;

            return 0;
          }

          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.compare(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "compare", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixUtils::class$ = NULL;
      jmethodID *MatrixUtils::mids$ = NULL;
      bool MatrixUtils::live$ = false;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::DEFAULT_FORMAT = NULL;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::OCTAVE_FORMAT = NULL;

      jclass MatrixUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bigFractionMatrixToRealMatrix_433d08205af7451e] = env->getStaticMethodID(cls, "bigFractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_blockInverse_3d3b9b74b7a3ca99] = env->getStaticMethodID(cls, "blockInverse", "(Lorg/hipparchus/linear/RealMatrix;I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_checkAdditionCompatible_1f6906e624899343] = env->getStaticMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkColumnIndex_8ac3b324bd38c0b1] = env->getStaticMethodID(cls, "checkColumnIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkMatrixIndex_7770183d8c656b44] = env->getStaticMethodID(cls, "checkMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;II)V");
          mids$[mid_checkMultiplicationCompatible_1f6906e624899343] = env->getStaticMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkRowIndex_8ac3b324bd38c0b1] = env->getStaticMethodID(cls, "checkRowIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkSameColumnDimension_1f6906e624899343] = env->getStaticMethodID(cls, "checkSameColumnDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSameRowDimension_1f6906e624899343] = env->getStaticMethodID(cls, "checkSameRowDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSubMatrixIndex_d304eb0aaedcd740] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;[I[I)V");
          mids$[mid_checkSubMatrixIndex_a9bb4e5ac95d750d] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;IIII)V");
          mids$[mid_checkSubtractionCompatible_1f6906e624899343] = env->getStaticMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSymmetric_08eaf415db10314f] = env->getStaticMethodID(cls, "checkSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_createColumnFieldMatrix_9d8782740aa326e0] = env->getStaticMethodID(cls, "createColumnFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createColumnRealMatrix_e78c77f555f24619] = env->getStaticMethodID(cls, "createColumnRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createFieldDiagonalMatrix_9d8782740aa326e0] = env->getStaticMethodID(cls, "createFieldDiagonalMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldIdentityMatrix_ab864333a790f2dd] = env->getStaticMethodID(cls, "createFieldIdentityMatrix", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_8216ddcfb9291d0c] = env->getStaticMethodID(cls, "createFieldMatrix", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_eac0d1ac87100cfb] = env->getStaticMethodID(cls, "createFieldMatrix", "(Lorg/hipparchus/Field;II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldVector_e19aa71c6ae91876] = env->getStaticMethodID(cls, "createFieldVector", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createFieldVector_7d87a3b3a8c606ac] = env->getStaticMethodID(cls, "createFieldVector", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createRealDiagonalMatrix_e78c77f555f24619] = env->getStaticMethodID(cls, "createRealDiagonalMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealIdentityMatrix_aec3de0a701ae468] = env->getStaticMethodID(cls, "createRealIdentityMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_05cc2960cde80114] = env->getStaticMethodID(cls, "createRealMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_e8546415f980523f] = env->getStaticMethodID(cls, "createRealMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealVector_b50585f101c65302] = env->getStaticMethodID(cls, "createRealVector", "([D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRealVector_2a32cae841870443] = env->getStaticMethodID(cls, "createRealVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRowFieldMatrix_9d8782740aa326e0] = env->getStaticMethodID(cls, "createRowFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createRowRealMatrix_e78c77f555f24619] = env->getStaticMethodID(cls, "createRowRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_fractionMatrixToRealMatrix_433d08205af7451e] = env->getStaticMethodID(cls, "fractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_inverse_340b47d21842d02c] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_inverse_a5ade44f7c8eaa17] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_isSymmetric_49da7222f112f25b] = env->getStaticMethodID(cls, "isSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)Z");
          mids$[mid_matrixExponential_340b47d21842d02c] = env->getStaticMethodID(cls, "matrixExponential", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_orthonormalize_0b5e5c997128e43c] = env->getStaticMethodID(cls, "orthonormalize", "(Ljava/util/List;DLorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_orthonormalize_0a07734ea3c208fc] = env->getStaticMethodID(cls, "orthonormalize", "(Lorg/hipparchus/Field;Ljava/util/List;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_solveLowerTriangularSystem_3af1cf4cd4527806] = env->getStaticMethodID(cls, "solveLowerTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_solveUpperTriangularSystem_3af1cf4cd4527806] = env->getStaticMethodID(cls, "solveUpperTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "DEFAULT_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          OCTAVE_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "OCTAVE_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::bigFractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_bigFractionMatrixToRealMatrix_433d08205af7451e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::blockInverse(const ::org::hipparchus::linear::RealMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_blockInverse_3d3b9b74b7a3ca99], a0.this$, a1));
      }

      void MatrixUtils::checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkAdditionCompatible_1f6906e624899343], a0.this$, a1.this$);
      }

      void MatrixUtils::checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkColumnIndex_8ac3b324bd38c0b1], a0.this$, a1);
      }

      void MatrixUtils::checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMatrixIndex_7770183d8c656b44], a0.this$, a1, a2);
      }

      void MatrixUtils::checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMultiplicationCompatible_1f6906e624899343], a0.this$, a1.this$);
      }

      void MatrixUtils::checkRowIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRowIndex_8ac3b324bd38c0b1], a0.this$, a1);
      }

      void MatrixUtils::checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameColumnDimension_1f6906e624899343], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameRowDimension_1f6906e624899343], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, const JArray< jint > & a1, const JArray< jint > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_d304eb0aaedcd740], a0.this$, a1.this$, a2.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2, jint a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_a9bb4e5ac95d750d], a0.this$, a1, a2, a3, a4);
      }

      void MatrixUtils::checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubtractionCompatible_1f6906e624899343], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSymmetric_08eaf415db10314f], a0.this$, a1);
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnFieldMatrix_9d8782740aa326e0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createColumnRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnRealMatrix_e78c77f555f24619], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldDiagonalMatrix_9d8782740aa326e0], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldIdentityMatrix(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldIdentityMatrix_ab864333a790f2dd], a0.this$, a1));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_8216ddcfb9291d0c], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_eac0d1ac87100cfb], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_e19aa71c6ae91876], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_7d87a3b3a8c606ac], a0.this$, a1));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealDiagonalMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealDiagonalMatrix_e78c77f555f24619], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealIdentityMatrix(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealIdentityMatrix_aec3de0a701ae468], a0));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_05cc2960cde80114], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_e8546415f980523f], a0, a1));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_b50585f101c65302], a0.this$));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_2a32cae841870443], a0));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowFieldMatrix_9d8782740aa326e0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRowRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowRealMatrix_e78c77f555f24619], a0.this$));
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_fractionMatrixToRealMatrix_433d08205af7451e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_340b47d21842d02c], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_a5ade44f7c8eaa17], a0.this$, a1));
      }

      jboolean MatrixUtils::isSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isSymmetric_49da7222f112f25b], a0.this$, a1);
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::matrixExponential(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_matrixExponential_340b47d21842d02c], a0.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::java::util::List & a0, jdouble a1, const ::org::hipparchus::linear::DependentVectorsHandler & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_0b5e5c997128e43c], a0.this$, a1, a2.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::org::hipparchus::Field & a0, const ::java::util::List & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::linear::DependentVectorsHandler & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_0a07734ea3c208fc], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      void MatrixUtils::solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveLowerTriangularSystem_3af1cf4cd4527806], a0.this$, a1.this$);
      }

      void MatrixUtils::solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveUpperTriangularSystem_3af1cf4cd4527806], a0.this$, a1.this$);
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
      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MatrixUtils__methods_[] = {
        DECLARE_METHOD(t_MatrixUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, bigFractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, blockInverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkAdditionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkColumnIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMultiplicationCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkRowIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameColumnDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameRowDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubtractionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldIdentityMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealIdentityMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, fractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, inverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, isSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, matrixExponential, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, orthonormalize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveLowerTriangularSystem, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveUpperTriangularSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixUtils)[] = {
        { Py_tp_methods, t_MatrixUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixUtils, t_MatrixUtils, MatrixUtils);

      void t_MatrixUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixUtils), &PY_TYPE_DEF(MatrixUtils), module, "MatrixUtils", 0);
      }

      void t_MatrixUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "class_", make_descriptor(MatrixUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "wrapfn_", make_descriptor(t_MatrixUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MatrixUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "DEFAULT_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::DEFAULT_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "OCTAVE_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::OCTAVE_FORMAT)));
      }

      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixUtils::initializeClass, 1)))
          return NULL;
        return t_MatrixUtils::wrap_Object(MatrixUtils(((t_MatrixUtils *) arg)->object.this$));
      }
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::bigFractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "bigFractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::blockInverse(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "blockInverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkAdditionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkAdditionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkColumnIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkColumnIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "kII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMatrixIndex(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMultiplicationCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMultiplicationCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkRowIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRowIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameColumnDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameColumnDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameRowDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameRowDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);

            if (!parseArgs(args, "k[I[I", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkSubMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubtractionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSubtractionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSymmetric(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldIdentityMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldIdentityMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0, a1, a2));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0, a1));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealIdentityMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealIdentityMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::fractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "inverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::isSymmetric(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::matrixExponential(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "matrixExponential", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::linear::DependentVectorsHandler a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDK", ::java::util::List::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector));
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::linear::DependentVectorsHandler a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2, a3));
              return ::java::util::t_List::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "orthonormalize", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveLowerTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveLowerTriangularSystem", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveUpperTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveUpperTriangularSystem", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisData::class$ = NULL;
              jmethodID *RtcmEphemerisData::mids$ = NULL;
              bool RtcmEphemerisData::live$ = false;

              jclass RtcmEphemerisData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAccuracyProvider_2e90087425f29397] = env->getMethodID(cls, "getAccuracyProvider", "()Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;");
                  mids$[mid_getSatelliteID_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setAccuracyProvider_231d20169a66defd] = env->getMethodID(cls, "setAccuracyProvider", "(Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;)V");
                  mids$[mid_setSatelliteID_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisData::RtcmEphemerisData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::gnss::metric::messages::common::AccuracyProvider RtcmEphemerisData::getAccuracyProvider() const
              {
                return ::org::orekit::gnss::metric::messages::common::AccuracyProvider(env->callObjectMethod(this$, mids$[mid_getAccuracyProvider_2e90087425f29397]));
              }

              jint RtcmEphemerisData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_412668abc8d889e9]);
              }

              void RtcmEphemerisData::setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccuracyProvider_231d20169a66defd], a0.this$);
              }

              void RtcmEphemerisData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_a3da1a935cb37f7b], a0);
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
              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmEphemerisData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, accuracyProvider),
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisData__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, getAccuracyProvider, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, setAccuracyProvider, METH_O),
                DECLARE_METHOD(t_RtcmEphemerisData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisData)[] = {
                { Py_tp_methods, t_RtcmEphemerisData__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisData_init_ },
                { Py_tp_getset, t_RtcmEphemerisData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisData, t_RtcmEphemerisData, RtcmEphemerisData);

              void t_RtcmEphemerisData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisData), &PY_TYPE_DEF(RtcmEphemerisData), module, "RtcmEphemerisData", 0);
              }

              void t_RtcmEphemerisData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "class_", make_descriptor(RtcmEphemerisData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "wrapfn_", make_descriptor(t_RtcmEphemerisData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisData::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisData::wrap_Object(RtcmEphemerisData(((t_RtcmEphemerisData *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds)
              {
                RtcmEphemerisData object((jobject) NULL);

                INT_CALL(object = RtcmEphemerisData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(result);
              }

              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAccuracyProvider(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccuracyProvider", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg)
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

              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(value);
              }
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccuracyProvider(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accuracyProvider", arg);
                return -1;
              }

              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter::mids$ = NULL;
              bool StreamingOcmWriter::live$ = false;

              jclass StreamingOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_351dfc3ade83fe24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)V");
                  mids$[mid_init$_219f77940e63ab66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Z)V");
                  mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newBlock_299afe41b2afd6dd] = env->getMethodID(cls, "newBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_351dfc3ade83fe24, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_219f77940e63ab66, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              void StreamingOcmWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter StreamingOcmWriter::newBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter(env->callObjectMethod(this$, mids$[mid_newBlock_299afe41b2afd6dd]));
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
              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self);
              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self);

              static PyMethodDef t_StreamingOcmWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOcmWriter, newBlock, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter, t_StreamingOcmWriter, StreamingOcmWriter);

              void t_StreamingOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter), &PY_TYPE_DEF(StreamingOcmWriter), module, "StreamingOcmWriter", 0);
              }

              void t_StreamingOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "class_", make_descriptor(StreamingOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter::wrap_Object(StreamingOcmWriter(((t_StreamingOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    jboolean a5;
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_StreamingOcmWriter$BlockWriter::wrap_Object(result);
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
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldVector::class$ = NULL;
      jmethodID *SparseFieldVector::mids$ = NULL;
      bool SparseFieldVector::live$ = false;

      jclass SparseFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_1b9cf9fe2f8d539c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_f89bf3117923cd08] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_d67ce590c75ba943] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_add_a7c6926a425759ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_d67ce590c75ba943] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9c0263b78fe30ac4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a7c6926a425759ad] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_f39e0d3c1ce991ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_3954878560819a96] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_a7c6926a425759ad] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_a7c6926a425759ad] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_d40ba91356b6a058] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_6244d57986a4c96a] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9c0263b78fe30ac4] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9c0263b78fe30ac4] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_f39e0d3c1ce991ac] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_f39e0d3c1ce991ac] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9c0263b78fe30ac4] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9c0263b78fe30ac4] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_05ccbe5320838a83] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_2284af949fc5e425] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_a7c6926a425759ad] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_b906415fb0b2ba27] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_d23b1b48c6bca206] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_502f8ed205bebebd] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_c8e2f1a6e8745452] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/SparseFieldVector;");
          mids$[mid_subtract_a7c6926a425759ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_7a985a773168dff8] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_a4b00f8c7fc7e690] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_1915435d849c895c] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_3d5cadff5023e9d0] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_57525d52a5913d3a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_a4b00f8c7fc7e690] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_1915435d849c895c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3d5cadff5023e9d0] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_57525d52a5913d3a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_a3da1a935cb37f7b] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b9cf9fe2f8d539c, a0.this$, a1.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f89bf3117923cd08, a0.this$, a1)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_d67ce590c75ba943], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_d67ce590c75ba943], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_3954878560819a96], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a7c6926a425759ad], a0.this$));
      }

      jboolean SparseFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint SparseFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::FieldElement SparseFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d40ba91356b6a058], a0));
      }

      ::org::hipparchus::Field SparseFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_6244d57986a4c96a], a0, a1));
      }

      jint SparseFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_05ccbe5320838a83], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_2284af949fc5e425], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a7c6926a425759ad], a0.this$));
      }

      void SparseFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_b906415fb0b2ba27], a0.this$);
      }

      void SparseFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d23b1b48c6bca206], a0, a1.this$);
      }

      void SparseFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_502f8ed205bebebd], a0, a1.this$);
      }

      SparseFieldVector SparseFieldVector::subtract(const SparseFieldVector & a0) const
      {
        return SparseFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_c8e2f1a6e8745452], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a7c6926a425759ad], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > SparseFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_7a985a773168dff8]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_a4b00f8c7fc7e690], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_1915435d849c895c], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_3d5cadff5023e9d0], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_57525d52a5913d3a], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_a4b00f8c7fc7e690], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_1915435d849c895c], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3d5cadff5023e9d0], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_57525d52a5913d3a], a0.this$, a1, a2));
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
      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args);
      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data);
      static PyGetSetDef t_SparseFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldVector, dimension),
        DECLARE_GET_FIELD(t_SparseFieldVector, field),
        DECLARE_GET_FIELD(t_SparseFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldVector__methods_[] = {
        DECLARE_METHOD(t_SparseFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, projection, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, set, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldVector)[] = {
        { Py_tp_methods, t_SparseFieldVector__methods_ },
        { Py_tp_init, (void *) t_SparseFieldVector_init_ },
        { Py_tp_getset, t_SparseFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SparseFieldVector, t_SparseFieldVector, SparseFieldVector);
      PyObject *t_SparseFieldVector::wrap_Object(const SparseFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldVector), &PY_TYPE_DEF(SparseFieldVector), module, "SparseFieldVector", 0);
      }

      void t_SparseFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "class_", make_descriptor(SparseFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "wrapfn_", make_descriptor(t_SparseFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldVector::initializeClass, 1)))
          return NULL;
        return t_SparseFieldVector::wrap_Object(SparseFieldVector(((t_SparseFieldVector *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
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
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldVector(a0, a1, a2));
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

      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_SparseFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *AbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool AbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass AbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_51c833c667e08e0f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_824f93e8d6b45930] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_0403458fb3410429] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/AbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_51c833c667e08e0f, a0, a1.this$, a2.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_824f93e8d6b45930, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter AbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
      }

      ::org::orekit::frames::Frame AbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_6c9bc0a928c56d4e]));
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
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinatesHermiteInterpolator, t_AbsolutePVCoordinatesHermiteInterpolator, AbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator), module, "AbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(AbsolutePVCoordinatesHermiteInterpolator(((t_AbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
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

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/SeriesTerm.h"
#include "java/util/Map.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries::class$ = NULL;
      jmethodID *PoissonSeries::mids$ = NULL;
      bool PoissonSeries::live$ = false;

      jclass PoissonSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0083be6cd8730319] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/PolynomialNutation;Ljava/util/Map;)V");
          mids$[mid_compile_8e1980293785248d] = env->getStaticMethodID(cls, "compile", "([Lorg/orekit/data/PoissonSeries;)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getNonPolynomialSize_412668abc8d889e9] = env->getMethodID(cls, "getNonPolynomialSize", "()I");
          mids$[mid_getPolynomial_c08e070a55035864] = env->getMethodID(cls, "getPolynomial", "()Lorg/orekit/data/PolynomialNutation;");
          mids$[mid_value_645226ccf45fca25] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_value_3e0ce57516456e43] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeries::PoissonSeries(const ::org::orekit::data::PolynomialNutation & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0083be6cd8730319, a0.this$, a1.this$)) {}

      ::org::orekit::data::PoissonSeries$CompiledSeries PoissonSeries::compile(const JArray< PoissonSeries > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callStaticObjectMethod(cls, mids$[mid_compile_8e1980293785248d], a0.this$));
      }

      jint PoissonSeries::getNonPolynomialSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNonPolynomialSize_412668abc8d889e9]);
      }

      ::org::orekit::data::PolynomialNutation PoissonSeries::getPolynomial() const
      {
        return ::org::orekit::data::PolynomialNutation(env->callObjectMethod(this$, mids$[mid_getPolynomial_c08e070a55035864]));
      }

      jdouble PoissonSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_645226ccf45fca25], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement PoissonSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_3e0ce57516456e43], a0.this$));
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
      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data);
      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data);
      static PyGetSetDef t_PoissonSeries__fields_[] = {
        DECLARE_GET_FIELD(t_PoissonSeries, nonPolynomialSize),
        DECLARE_GET_FIELD(t_PoissonSeries, polynomial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoissonSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, compile, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, getNonPolynomialSize, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, getPolynomial, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries)[] = {
        { Py_tp_methods, t_PoissonSeries__methods_ },
        { Py_tp_init, (void *) t_PoissonSeries_init_ },
        { Py_tp_getset, t_PoissonSeries__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries, t_PoissonSeries, PoissonSeries);

      void t_PoissonSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries), &PY_TYPE_DEF(PoissonSeries), module, "PoissonSeries", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "CompiledSeries", make_descriptor(&PY_TYPE_DEF(PoissonSeries$CompiledSeries)));
      }

      void t_PoissonSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "class_", make_descriptor(PoissonSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "wrapfn_", make_descriptor(t_PoissonSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries::wrap_Object(PoissonSeries(((t_PoissonSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::PolynomialNutation a0((jobject) NULL);
        ::java::util::Map a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeries object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::data::PolynomialNutation::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
        {
          INT_CALL(object = PoissonSeries(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg)
      {
        JArray< PoissonSeries > a0((jobject) NULL);
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);

        if (!parseArg(arg, "[k", PoissonSeries::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PoissonSeries::compile(a0));
          return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compile", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self)
      {
        ::org::orekit::data::PolynomialNutation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(result);
      }

      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data)
      {
        ::org::orekit::data::PolynomialNutation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractAlmanac::class$ = NULL;
            jmethodID *AbstractAlmanac::mids$ = NULL;
            bool AbstractAlmanac::live$ = false;

            jclass AbstractAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_557b8123390d8d0c] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_557b8123390d8d0c] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_557b8123390d8d0c] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_557b8123390d8d0c] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_557b8123390d8d0c] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_557b8123390d8d0c] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_557b8123390d8d0c] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractAlmanac::AbstractAlmanac(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

            jdouble AbstractAlmanac::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
            }

            jdouble AbstractAlmanac::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
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
            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data);
            static PyGetSetDef t_AbstractAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractAlmanac, af2),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cic),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cis),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crs),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cuc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cus),
              DECLARE_GET_FIELD(t_AbstractAlmanac, iDot),
              DECLARE_GET_FIELD(t_AbstractAlmanac, meanMotion),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractAlmanac__methods_[] = {
              DECLARE_METHOD(t_AbstractAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getMeanMotion, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractAlmanac)[] = {
              { Py_tp_methods, t_AbstractAlmanac__methods_ },
              { Py_tp_init, (void *) t_AbstractAlmanac_init_ },
              { Py_tp_getset, t_AbstractAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractAlmanac, t_AbstractAlmanac, AbstractAlmanac);

            void t_AbstractAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractAlmanac), &PY_TYPE_DEF(AbstractAlmanac), module, "AbstractAlmanac", 0);
            }

            void t_AbstractAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "class_", make_descriptor(AbstractAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "wrapfn_", make_descriptor(t_AbstractAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractAlmanac::initializeClass, 1)))
                return NULL;
              return t_AbstractAlmanac::wrap_Object(AbstractAlmanac(((t_AbstractAlmanac *) arg)->object.this$));
            }
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractAlmanac object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractAlmanac(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
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
#include "org/orekit/annotation/DefaultDataContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace annotation {

      ::java::lang::Class *DefaultDataContext::class$ = NULL;
      jmethodID *DefaultDataContext::mids$ = NULL;
      bool DefaultDataContext::live$ = false;

      jclass DefaultDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/annotation/DefaultDataContext");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace annotation {
      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DefaultDataContext__methods_[] = {
        DECLARE_METHOD(t_DefaultDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultDataContext, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultDataContext)[] = {
        { Py_tp_methods, t_DefaultDataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultDataContext, t_DefaultDataContext, DefaultDataContext);

      void t_DefaultDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultDataContext), &PY_TYPE_DEF(DefaultDataContext), module, "DefaultDataContext", 0);
      }

      void t_DefaultDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "class_", make_descriptor(DefaultDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "wrapfn_", make_descriptor(t_DefaultDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultDataContext::initializeClass, 1)))
          return NULL;
        return t_DefaultDataContext::wrap_Object(DefaultDataContext(((t_DefaultDataContext *) arg)->object.this$));
      }
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *ValsecchiEncounterFrame::class$ = NULL;
        jmethodID *ValsecchiEncounterFrame::mids$ = NULL;
        bool ValsecchiEncounterFrame::live$ = false;

        jclass ValsecchiEncounterFrame::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/ValsecchiEncounterFrame");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa7831ef12a1aeba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_dd80faf626f5319e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_0158ab79fb625627] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_ea6e3434436b926f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_fa7831ef12a1aeba, a0.this$)) {}

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_dd80faf626f5319e, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf], a0.this$));
        }

        ::java::lang::String ValsecchiEncounterFrame::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0158ab79fb625627], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
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
        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data);
        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data);
        static PyGetSetDef t_ValsecchiEncounterFrame__fields_[] = {
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ValsecchiEncounterFrame__methods_[] = {
          DECLARE_METHOD(t_ValsecchiEncounterFrame, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getName, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ValsecchiEncounterFrame)[] = {
          { Py_tp_methods, t_ValsecchiEncounterFrame__methods_ },
          { Py_tp_init, (void *) t_ValsecchiEncounterFrame_init_ },
          { Py_tp_getset, t_ValsecchiEncounterFrame__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ValsecchiEncounterFrame)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(ValsecchiEncounterFrame, t_ValsecchiEncounterFrame, ValsecchiEncounterFrame);

        void t_ValsecchiEncounterFrame::install(PyObject *module)
        {
          installType(&PY_TYPE(ValsecchiEncounterFrame), &PY_TYPE_DEF(ValsecchiEncounterFrame), module, "ValsecchiEncounterFrame", 0);
        }

        void t_ValsecchiEncounterFrame::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "class_", make_descriptor(ValsecchiEncounterFrame::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "wrapfn_", make_descriptor(t_ValsecchiEncounterFrame::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ValsecchiEncounterFrame::initializeClass, 1)))
            return NULL;
          return t_ValsecchiEncounterFrame::wrap_Object(ValsecchiEncounterFrame(((t_ValsecchiEncounterFrame *) arg)->object.this$));
        }
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ValsecchiEncounterFrame::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
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

        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args)
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

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args)
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

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data)
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
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *HaloXZPlaneCrossingDetector::class$ = NULL;
        jmethodID *HaloXZPlaneCrossingDetector::mids$ = NULL;
        bool HaloXZPlaneCrossingDetector::live$ = false;

        jclass HaloXZPlaneCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/HaloXZPlaneCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_07b52a795a98dfa4] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/HaloXZPlaneCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HaloXZPlaneCrossingDetector::HaloXZPlaneCrossingDetector(jdouble a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble HaloXZPlaneCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
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
        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data);
        static PyGetSetDef t_HaloXZPlaneCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_HaloXZPlaneCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HaloXZPlaneCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HaloXZPlaneCrossingDetector)[] = {
          { Py_tp_methods, t_HaloXZPlaneCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_HaloXZPlaneCrossingDetector_init_ },
          { Py_tp_getset, t_HaloXZPlaneCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HaloXZPlaneCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(HaloXZPlaneCrossingDetector, t_HaloXZPlaneCrossingDetector, HaloXZPlaneCrossingDetector);
        PyObject *t_HaloXZPlaneCrossingDetector::wrap_Object(const HaloXZPlaneCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HaloXZPlaneCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HaloXZPlaneCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(HaloXZPlaneCrossingDetector), &PY_TYPE_DEF(HaloXZPlaneCrossingDetector), module, "HaloXZPlaneCrossingDetector", 0);
        }

        void t_HaloXZPlaneCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "class_", make_descriptor(HaloXZPlaneCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "wrapfn_", make_descriptor(t_HaloXZPlaneCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_HaloXZPlaneCrossingDetector::wrap_Object(HaloXZPlaneCrossingDetector(((t_HaloXZPlaneCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          HaloXZPlaneCrossingDetector object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = HaloXZPlaneCrossingDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(HaloXZPlaneCrossingDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HaloXZPlaneCrossingDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperatureModel::class$ = NULL;
          jmethodID *GlobalPressureTemperatureModel::mids$ = NULL;
          bool GlobalPressureTemperatureModel::live$ = false;

          jclass GlobalPressureTemperatureModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperatureModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77eb4a8c540c1776] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
              mids$[mid_init$_f5cca62652e4a820] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)V");
              mids$[mid_getPressure_557b8123390d8d0c] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_557b8123390d8d0c] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_weatherParameters_4ca6118c75b70100] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77eb4a8c540c1776, a0, a1, a2.this$)) {}

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5cca62652e4a820, a0, a1, a2.this$, a3.this$)) {}

          jdouble GlobalPressureTemperatureModel::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_557b8123390d8d0c]);
          }

          jdouble GlobalPressureTemperatureModel::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_557b8123390d8d0c]);
          }

          void GlobalPressureTemperatureModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_4ca6118c75b70100], a0, a1.this$);
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
          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data);
          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperatureModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, temperature),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperatureModel__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperatureModel)[] = {
            { Py_tp_methods, t_GlobalPressureTemperatureModel__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperatureModel_init_ },
            { Py_tp_getset, t_GlobalPressureTemperatureModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperatureModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperatureModel, t_GlobalPressureTemperatureModel, GlobalPressureTemperatureModel);

          void t_GlobalPressureTemperatureModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperatureModel), &PY_TYPE_DEF(GlobalPressureTemperatureModel), module, "GlobalPressureTemperatureModel", 0);
          }

          void t_GlobalPressureTemperatureModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "class_", make_descriptor(GlobalPressureTemperatureModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "wrapfn_", make_descriptor(t_GlobalPressureTemperatureModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperatureModel::wrap_Object(GlobalPressureTemperatureModel(((t_GlobalPressureTemperatureModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2, a3));
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

          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args)
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

          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/PrintWriter.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/PrintWriter.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintWriter::class$ = NULL;
    jmethodID *PrintWriter::mids$ = NULL;
    bool PrintWriter::live$ = false;

    jclass PrintWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_a093374b16e6c27d] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_dc57885568ee69d8] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;)V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7a5b31fafc364859] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_c53621196bb83b72] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_00a7008a3d227a48] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;Z)V");
        mids$[mid_append_3d7b7f34c7e866b9] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintWriter;");
        mids$[mid_append_63b63110d827e004] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
        mids$[mid_append_fb6ff00a35d01723] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
        mids$[mid_checkError_89b302893bdbe1f1] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_79f8580f1f3d79bd] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_format_969e36524826a60c] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_print_916bf6d42d285c69] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_f5ffdf29129ef90a] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_ed2afdb8506b9742] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_102587d250c3217b] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_10f281d777284cea] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_3ac7cc3def9efaa9] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_a3da1a935cb37f7b] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_009757f2c0fd9090] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3cd6a6b354c6aa22] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_79f8580f1f3d79bd] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_printf_969e36524826a60c] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_println_0640e6acf969ed28] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_916bf6d42d285c69] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_f5ffdf29129ef90a] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_ed2afdb8506b9742] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_102587d250c3217b] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_10f281d777284cea] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_3ac7cc3def9efaa9] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_a3da1a935cb37f7b] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_009757f2c0fd9090] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3cd6a6b354c6aa22] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_916bf6d42d285c69] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_f5ffdf29129ef90a] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_5421d1c1f03cf945] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_96097c5e4aacac76] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");
        mids$[mid_setError_0640e6acf969ed28] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_0640e6acf969ed28] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintWriter::PrintWriter(const ::java::io::File & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_a093374b16e6c27d, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_dc57885568ee69d8, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_7a5b31fafc364859, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_c53621196bb83b72, a0.this$, a1)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_00a7008a3d227a48, a0.this$, a1)) {}

    PrintWriter PrintWriter::append(jchar a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_3d7b7f34c7e866b9], a0));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_63b63110d827e004], a0.this$));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_fb6ff00a35d01723], a0.this$, a1, a2));
    }

    jboolean PrintWriter::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_89b302893bdbe1f1]);
    }

    void PrintWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void PrintWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    PrintWriter PrintWriter::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_79f8580f1f3d79bd], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_969e36524826a60c], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_916bf6d42d285c69], a0.this$);
    }

    void PrintWriter::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f5ffdf29129ef90a], a0.this$);
    }

    void PrintWriter::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_ed2afdb8506b9742], a0);
    }

    void PrintWriter::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_102587d250c3217b], a0);
    }

    void PrintWriter::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_10f281d777284cea], a0);
    }

    void PrintWriter::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3ac7cc3def9efaa9], a0);
    }

    void PrintWriter::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_a3da1a935cb37f7b], a0);
    }

    void PrintWriter::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_009757f2c0fd9090], a0.this$);
    }

    void PrintWriter::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3cd6a6b354c6aa22], a0);
    }

    PrintWriter PrintWriter::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_79f8580f1f3d79bd], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_969e36524826a60c], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_0640e6acf969ed28]);
    }

    void PrintWriter::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_916bf6d42d285c69], a0.this$);
    }

    void PrintWriter::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f5ffdf29129ef90a], a0.this$);
    }

    void PrintWriter::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_ed2afdb8506b9742], a0);
    }

    void PrintWriter::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_102587d250c3217b], a0);
    }

    void PrintWriter::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_10f281d777284cea], a0);
    }

    void PrintWriter::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3ac7cc3def9efaa9], a0);
    }

    void PrintWriter::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_a3da1a935cb37f7b], a0);
    }

    void PrintWriter::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_009757f2c0fd9090], a0.this$);
    }

    void PrintWriter::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3cd6a6b354c6aa22], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_916bf6d42d285c69], a0.this$);
    }

    void PrintWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_f5ffdf29129ef90a], a0.this$);
    }

    void PrintWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_5421d1c1f03cf945], a0.this$, a1, a2);
    }

    void PrintWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_96097c5e4aacac76], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self);
    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args);

    static PyMethodDef t_PrintWriter__methods_[] = {
      DECLARE_METHOD(t_PrintWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintWriter)[] = {
      { Py_tp_methods, t_PrintWriter__methods_ },
      { Py_tp_init, (void *) t_PrintWriter_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(PrintWriter, t_PrintWriter, PrintWriter);

    void t_PrintWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintWriter), &PY_TYPE_DEF(PrintWriter), module, "PrintWriter", 0);
    }

    void t_PrintWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "class_", make_descriptor(PrintWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "wrapfn_", make_descriptor(t_PrintWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintWriter::initializeClass, 1)))
        return NULL;
      return t_PrintWriter::wrap_Object(PrintWriter(((t_PrintWriter *) arg)->object.this$));
    }
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Writer::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
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

    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreFieldGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreFieldGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreFieldGaussIntegrator::live$ = false;

        jclass IterativeLegendreFieldGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cf1ad140044f1125] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD)V");
            mids$[mid_init$_a4259b5830086408] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_init$_f0a2b9d548f5bbaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDII)V");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cf1ad140044f1125, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a4259b5830086408, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jint a4, jint a5) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f0a2b9d548f5bbaa, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args);
        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data);
        static PyGetSetDef t_IterativeLegendreFieldGaussIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_IterativeLegendreFieldGaussIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IterativeLegendreFieldGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreFieldGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreFieldGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreFieldGaussIntegrator_init_ },
          { Py_tp_getset, t_IterativeLegendreFieldGaussIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreFieldGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreFieldGaussIntegrator, t_IterativeLegendreFieldGaussIntegrator, IterativeLegendreFieldGaussIntegrator);
        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_Object(const IterativeLegendreFieldGaussIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IterativeLegendreFieldGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreFieldGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator), module, "IterativeLegendreFieldGaussIntegrator", 0);
        }

        void t_IterativeLegendreFieldGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "class_", make_descriptor(IterativeLegendreFieldGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreFieldGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreFieldGaussIntegrator::wrap_Object(IterativeLegendreFieldGaussIntegrator(((t_IterativeLegendreFieldGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              jint a5;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionHeader::class$ = NULL;
              jmethodID *RtcmCorrectionHeader::mids$ = NULL;
              bool RtcmCorrectionHeader::live$ = false;

              jclass RtcmCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEpochTime1s_557b8123390d8d0c] = env->getMethodID(cls, "getEpochTime1s", "()D");
                  mids$[mid_getIodSsr_412668abc8d889e9] = env->getMethodID(cls, "getIodSsr", "()I");
                  mids$[mid_getMultipleMessageIndicator_412668abc8d889e9] = env->getMethodID(cls, "getMultipleMessageIndicator", "()I");
                  mids$[mid_getNumberOfSatellites_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_getSsrProviderId_412668abc8d889e9] = env->getMethodID(cls, "getSsrProviderId", "()I");
                  mids$[mid_getSsrSolutionId_412668abc8d889e9] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                  mids$[mid_getSsrUpdateInterval_bdb56644ae226ace] = env->getMethodID(cls, "getSsrUpdateInterval", "()Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;");
                  mids$[mid_setEpochTime1s_10f281d777284cea] = env->getMethodID(cls, "setEpochTime1s", "(D)V");
                  mids$[mid_setIodSsr_a3da1a935cb37f7b] = env->getMethodID(cls, "setIodSsr", "(I)V");
                  mids$[mid_setMultipleMessageIndicator_a3da1a935cb37f7b] = env->getMethodID(cls, "setMultipleMessageIndicator", "(I)V");
                  mids$[mid_setNumberOfSatellites_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");
                  mids$[mid_setSsrProviderId_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                  mids$[mid_setSsrSolutionId_a3da1a935cb37f7b] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                  mids$[mid_setSsrUpdateInterval_ea1bc450da024121] = env->getMethodID(cls, "setSsrUpdateInterval", "(Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionHeader::RtcmCorrectionHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble RtcmCorrectionHeader::getEpochTime1s() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochTime1s_557b8123390d8d0c]);
              }

              jint RtcmCorrectionHeader::getIodSsr() const
              {
                return env->callIntMethod(this$, mids$[mid_getIodSsr_412668abc8d889e9]);
              }

              jint RtcmCorrectionHeader::getMultipleMessageIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getMultipleMessageIndicator_412668abc8d889e9]);
              }

              jint RtcmCorrectionHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_412668abc8d889e9]);
              }

              jint RtcmCorrectionHeader::getSsrProviderId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrProviderId_412668abc8d889e9]);
              }

              jint RtcmCorrectionHeader::getSsrSolutionId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval RtcmCorrectionHeader::getSsrUpdateInterval() const
              {
                return ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval(env->callObjectMethod(this$, mids$[mid_getSsrUpdateInterval_bdb56644ae226ace]));
              }

              void RtcmCorrectionHeader::setEpochTime1s(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochTime1s_10f281d777284cea], a0);
              }

              void RtcmCorrectionHeader::setIodSsr(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIodSsr_a3da1a935cb37f7b], a0);
              }

              void RtcmCorrectionHeader::setMultipleMessageIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMultipleMessageIndicator_a3da1a935cb37f7b], a0);
              }

              void RtcmCorrectionHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_a3da1a935cb37f7b], a0);
              }

              void RtcmCorrectionHeader::setSsrProviderId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrProviderId_a3da1a935cb37f7b], a0);
              }

              void RtcmCorrectionHeader::setSsrSolutionId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_a3da1a935cb37f7b], a0);
              }

              void RtcmCorrectionHeader::setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_ea1bc450da024121], a0.this$);
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
            namespace correction {
              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, epochTime1s),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, iodSsr),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, multipleMessageIndicator),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, numberOfSatellites),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrProviderId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrSolutionId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrUpdateInterval),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getEpochTime1s, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getIodSsr, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getMultipleMessageIndicator, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrProviderId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrSolutionId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrUpdateInterval, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setEpochTime1s, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setIodSsr, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setMultipleMessageIndicator, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setNumberOfSatellites, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrProviderId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrSolutionId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrUpdateInterval, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionHeader)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionHeader, t_RtcmCorrectionHeader, RtcmCorrectionHeader);

              void t_RtcmCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionHeader), &PY_TYPE_DEF(RtcmCorrectionHeader), module, "RtcmCorrectionHeader", 0);
              }

              void t_RtcmCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "class_", make_descriptor(RtcmCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionHeader::wrap_Object(RtcmCorrectionHeader(((t_RtcmCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getIodSsr());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrProviderId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochTime1s(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochTime1s", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setIodSsr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setMultipleMessageIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMultipleMessageIndicator", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrProviderId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrSolutionId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) value);
              }
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochTime1s(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochTime1s", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getIodSsr());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setIodSsr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setMultipleMessageIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "multipleMessageIndicator", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrProviderId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrProviderId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrSolutionId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(value);
              }
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSsrUpdateInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPConstants::class$ = NULL;
          jmethodID *CR3BPConstants::mids$ = NULL;
          bool CR3BPConstants::live$ = false;

          jclass CR3BPConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPConstants");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEarthMoonBarycenterSemiMajorAxis_0ea0045c89a146a3] = env->getStaticMethodID(cls, "getEarthMoonBarycenterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getJupiterSemiMajorAxis_0ea0045c89a146a3] = env->getStaticMethodID(cls, "getJupiterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getMoonSemiMajorAxis_557b8123390d8d0c] = env->getStaticMethodID(cls, "getMoonSemiMajorAxis", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getEarthMoonBarycenterSemiMajorAxis_0ea0045c89a146a3], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getJupiterSemiMajorAxis_0ea0045c89a146a3], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getMoonSemiMajorAxis()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMoonSemiMajorAxis_557b8123390d8d0c]);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type);
          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data);
          static PyGetSetDef t_CR3BPConstants__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPConstants, moonSemiMajorAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPConstants__methods_[] = {
            DECLARE_METHOD(t_CR3BPConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getEarthMoonBarycenterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getJupiterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getMoonSemiMajorAxis, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPConstants)[] = {
            { Py_tp_methods, t_CR3BPConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CR3BPConstants__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPConstants, t_CR3BPConstants, CR3BPConstants);

          void t_CR3BPConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPConstants), &PY_TYPE_DEF(CR3BPConstants), module, "CR3BPConstants", 0);
          }

          void t_CR3BPConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "class_", make_descriptor(CR3BPConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "wrapfn_", make_descriptor(t_CR3BPConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPConstants::initializeClass, 1)))
              return NULL;
            return t_CR3BPConstants::wrap_Object(CR3BPConstants(((t_CR3BPConstants *) arg)->object.this$));
          }
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getEarthMoonBarycenterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getJupiterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getJupiterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckTransformer::mids$ = NULL;
        bool AdamsNordsieckTransformer::live$ = false;

        jclass AdamsNordsieckTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_0bc6cd973b0a8b86] = env->getStaticMethodID(cls, "getInstance", "(I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckTransformer;");
            mids$[mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_f317c35d7d377fcb] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_8366e8011d6ccc43] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckTransformer AdamsNordsieckTransformer::getInstance(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_0bc6cd973b0a8b86], a0));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::initializeHighOrderDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_f317c35d7d377fcb], a0.this$));
        }

        void AdamsNordsieckTransformer::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_8366e8011d6ccc43], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args);

        static PyMethodDef t_AdamsNordsieckTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, getInstance, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckTransformer, t_AdamsNordsieckTransformer, AdamsNordsieckTransformer);

        void t_AdamsNordsieckTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckTransformer), &PY_TYPE_DEF(AdamsNordsieckTransformer), module, "AdamsNordsieckTransformer", 0);
        }

        void t_AdamsNordsieckTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "class_", make_descriptor(AdamsNordsieckTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckTransformer::wrap_Object(AdamsNordsieckTransformer(((t_AdamsNordsieckTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          AdamsNordsieckTransformer result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckTransformer::getInstance(a0));
            return t_AdamsNordsieckTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArgs(args, "D[D[[D[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *PythonWeatherModel::class$ = NULL;
          jmethodID *PythonWeatherModel::mids$ = NULL;
          bool PythonWeatherModel::live$ = false;

          jclass PythonWeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/PythonWeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_weatherParameters_4ca6118c75b70100] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonWeatherModel::PythonWeatherModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonWeatherModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonWeatherModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonWeatherModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self);
          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args);
          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1);
          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data);
          static PyGetSetDef t_PythonWeatherModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonWeatherModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonWeatherModel__methods_[] = {
            DECLARE_METHOD(t_PythonWeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonWeatherModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonWeatherModel)[] = {
            { Py_tp_methods, t_PythonWeatherModel__methods_ },
            { Py_tp_init, (void *) t_PythonWeatherModel_init_ },
            { Py_tp_getset, t_PythonWeatherModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonWeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonWeatherModel, t_PythonWeatherModel, PythonWeatherModel);

          void t_PythonWeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonWeatherModel), &PY_TYPE_DEF(PythonWeatherModel), module, "PythonWeatherModel", 1);
          }

          void t_PythonWeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "class_", make_descriptor(PythonWeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "wrapfn_", make_descriptor(t_PythonWeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonWeatherModel::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonWeatherModel_pythonDecRef0 },
              { "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonWeatherModel_weatherParameters1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonWeatherModel::initializeClass, 1)))
              return NULL;
            return t_PythonWeatherModel::wrap_Object(PythonWeatherModel(((t_PythonWeatherModel *) arg)->object.this$));
          }
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonWeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds)
          {
            PythonWeatherModel object((jobject) NULL);

            INT_CALL(object = PythonWeatherModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args)
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

          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "weatherParameters", "dO", (double) a0, o1);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data)
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
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "java/util/NoSuchElementException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap$Iterator::mids$ = NULL;
      bool OpenIntToFieldHashMap$Iterator::live$ = false;

      jclass OpenIntToFieldHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_0640e6acf969ed28] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_89b302893bdbe1f1] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_412668abc8d889e9] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_ce0470d468f80a56] = env->getMethodID(cls, "value", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToFieldHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_0640e6acf969ed28]);
      }

      jboolean OpenIntToFieldHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_89b302893bdbe1f1]);
      }

      jint OpenIntToFieldHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_412668abc8d889e9]);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap$Iterator::value() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_value_ce0470d468f80a56]));
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
      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap$Iterator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OpenIntToFieldHashMap$Iterator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap$Iterator, t_OpenIntToFieldHashMap$Iterator, OpenIntToFieldHashMap$Iterator);
      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_Object(const OpenIntToFieldHashMap$Iterator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap$Iterator), &PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator), module, "OpenIntToFieldHashMap$Iterator", 0);
      }

      void t_OpenIntToFieldHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "class_", make_descriptor(OpenIntToFieldHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap$Iterator::wrap_Object(OpenIntToFieldHashMap$Iterator(((t_OpenIntToFieldHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.value());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonAbstractCovarianceMatrixProvider::mids$ = NULL;
        bool PythonAbstractCovarianceMatrixProvider::live$ = false;

        jclass PythonAbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getProcessNoiseMatrix_158686209bf6089c] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractCovarianceMatrixProvider::PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        void PythonAbstractCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractCovarianceMatrixProvider::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonAbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonAbstractCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractCovarianceMatrixProvider, t_PythonAbstractCovarianceMatrixProvider, PythonAbstractCovarianceMatrixProvider);

        void t_PythonAbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractCovarianceMatrixProvider), &PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider), module, "PythonAbstractCovarianceMatrixProvider", 1);
        }

        void t_PythonAbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "class_", make_descriptor(PythonAbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonAbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractCovarianceMatrixProvider::wrap_Object(PythonAbstractCovarianceMatrixProvider(((t_PythonAbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          PythonAbstractCovarianceMatrixProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractCovarianceMatrixProvider(a0));
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

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data)
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
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *BinomialTest::class$ = NULL;
        jmethodID *BinomialTest::mids$ = NULL;
        bool BinomialTest::live$ = false;

        jclass BinomialTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/BinomialTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_binomialTest_d7ff5d93e82bbe26] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;)D");
            mids$[mid_binomialTest_088090df4f38c4c6] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialTest::BinomialTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_binomialTest_d7ff5d93e82bbe26], a0, a1, a2, a3.this$);
        }

        jboolean BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3, jdouble a4) const
        {
          return env->callBooleanMethod(this$, mids$[mid_binomialTest_088090df4f38c4c6], a0, a1, a2, a3.this$, a4);
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
        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args);

        static PyMethodDef t_BinomialTest__methods_[] = {
          DECLARE_METHOD(t_BinomialTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, binomialTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialTest)[] = {
          { Py_tp_methods, t_BinomialTest__methods_ },
          { Py_tp_init, (void *) t_BinomialTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialTest, t_BinomialTest, BinomialTest);

        void t_BinomialTest::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialTest), &PY_TYPE_DEF(BinomialTest), module, "BinomialTest", 0);
        }

        void t_BinomialTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "class_", make_descriptor(BinomialTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "wrapfn_", make_descriptor(t_BinomialTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialTest::initializeClass, 1)))
            return NULL;
          return t_BinomialTest::wrap_Object(BinomialTest(((t_BinomialTest *) arg)->object.this$));
        }
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds)
        {
          BinomialTest object((jobject) NULL);

          INT_CALL(object = BinomialTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble result;

              if (!parseArgs(args, "IIDK", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jboolean result;

              if (!parseArgs(args, "IIDKD", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "binomialTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadataKey::class$ = NULL;
              jmethodID *AcmMetadataKey::mids$ = NULL;
              bool AcmMetadataKey::live$ = false;
              AcmMetadataKey *AcmMetadataKey::ACM_DATA_ELEMENTS = NULL;
              AcmMetadataKey *AcmMetadataKey::CATALOG_NAME = NULL;
              AcmMetadataKey *AcmMetadataKey::EPOCH_TZERO = NULL;
              AcmMetadataKey *AcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              AcmMetadataKey *AcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::ODM_MSG_LINK = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_PHONE = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POC = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POSITION = NULL;
              AcmMetadataKey *AcmMetadataKey::START_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::STOP_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::TAIMUTC_AT_TZERO = NULL;

              jclass AcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_cc0bb3f962f1a6df] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;)Z");
                  mids$[mid_valueOf_ab9dc7e0de5a1386] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");
                  mids$[mid_values_09a677cb3f3dcbff] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACM_DATA_ELEMENTS = new AcmMetadataKey(env->getStaticObjectField(cls, "ACM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  CATALOG_NAME = new AcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  EPOCH_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ODM_MSG_LINK = new AcmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_PHONE = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POC = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POSITION = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  START_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  STOP_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_cc0bb3f962f1a6df], a0.this$, a1.this$, a2.this$);
              }

              AcmMetadataKey AcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab9dc7e0de5a1386], a0.this$));
              }

              JArray< AcmMetadataKey > AcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_09a677cb3f3dcbff]));
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
              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data);
              static PyGetSetDef t_AcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadataKey)[] = {
                { Py_tp_methods, t_AcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmMetadataKey, t_AcmMetadataKey, AcmMetadataKey);
              PyObject *t_AcmMetadataKey::wrap_Object(const AcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadataKey), &PY_TYPE_DEF(AcmMetadataKey), module, "AcmMetadataKey", 0);
              }

              void t_AcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "class_", make_descriptor(AcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "wrapfn_", make_descriptor(t_AcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ACM_DATA_ELEMENTS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ACM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "CATALOG_NAME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ODM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "START_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "STOP_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::TAIMUTC_AT_TZERO)));
              }

              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadataKey::wrap_Object(AcmMetadataKey(((t_AcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::valueOf(a0));
                  return t_AcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< AcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data)
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
