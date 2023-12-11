#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventMultipleHandler::class$ = NULL;
          jmethodID *EventMultipleHandler::mids$ = NULL;
          bool EventMultipleHandler::live$ = false;

          jclass EventMultipleHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventMultipleHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addHandler_59ed1088e47ce19e] = env->getMethodID(cls, "addHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_addHandlers_b99a1af3df83b323] = env->getMethodID(cls, "addHandlers", "([Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
              mids$[mid_init_e0491fcf7b1e4288] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_ce9bc9b3806ce3d4] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_setHandlers_4ccaedadb068bdeb] = env->getMethodID(cls, "setHandlers", "(Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventMultipleHandler::EventMultipleHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          EventMultipleHandler EventMultipleHandler::addHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandler_59ed1088e47ce19e], a0.this$));
          }

          EventMultipleHandler EventMultipleHandler::addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandlers_b99a1af3df83b323], a0.this$));
          }

          ::org::hipparchus::ode::events::Action EventMultipleHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
          }

          ::java::util::List EventMultipleHandler::getHandlers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_0d9551367f7ecdef]));
          }

          void EventMultipleHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_e0491fcf7b1e4288], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventMultipleHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ce9bc9b3806ce3d4], a0.this$, a1.this$));
          }

          void EventMultipleHandler::setHandlers(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHandlers_4ccaedadb068bdeb], a0.this$);
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
          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self);
          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data);
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data);
          static PyGetSetDef t_EventMultipleHandler__fields_[] = {
            DECLARE_GETSET_FIELD(t_EventMultipleHandler, handlers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventMultipleHandler__methods_[] = {
            DECLARE_METHOD(t_EventMultipleHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, addHandler, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, addHandlers, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, getHandlers, METH_NOARGS),
            DECLARE_METHOD(t_EventMultipleHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, resetState, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, setHandlers, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventMultipleHandler)[] = {
            { Py_tp_methods, t_EventMultipleHandler__methods_ },
            { Py_tp_init, (void *) t_EventMultipleHandler_init_ },
            { Py_tp_getset, t_EventMultipleHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventMultipleHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventMultipleHandler, t_EventMultipleHandler, EventMultipleHandler);

          void t_EventMultipleHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventMultipleHandler), &PY_TYPE_DEF(EventMultipleHandler), module, "EventMultipleHandler", 0);
          }

          void t_EventMultipleHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "class_", make_descriptor(EventMultipleHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "wrapfn_", make_descriptor(t_EventMultipleHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventMultipleHandler::initializeClass, 1)))
              return NULL;
            return t_EventMultipleHandler::wrap_Object(EventMultipleHandler(((t_EventMultipleHandler *) arg)->object.this$));
          }
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventMultipleHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds)
          {
            EventMultipleHandler object((jobject) NULL);

            INT_CALL(object = EventMultipleHandler());
            self->object = object;

            return 0;
          }

          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandler(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandler", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            JArray< ::org::orekit::propagation::events::handlers::EventHandler > a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandlers(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(EventHandler));
          }

          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setHandlers(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setHandlers(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "handlers", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalProperties::class$ = NULL;
              jmethodID *OrbitPhysicalProperties::mids$ = NULL;
              bool OrbitPhysicalProperties::live$ = false;

              jclass OrbitPhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getAttitudeActuatorType_3cffd47377eca18a] = env->getMethodID(cls, "getAttitudeActuatorType", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeControlAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAttitudeControlAccuracy", "()D");
                  mids$[mid_getAttitudeControlMode_3cffd47377eca18a] = env->getMethodID(cls, "getAttitudeControlMode", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeKnowledgeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAttitudeKnowledgeAccuracy", "()D");
                  mids$[mid_getAttitudePointingAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAttitudePointingAccuracy", "()D");
                  mids$[mid_getBolDv_557b8123390d8d0c] = env->getMethodID(cls, "getBolDv", "()D");
                  mids$[mid_getBusModel_3cffd47377eca18a] = env->getMethodID(cls, "getBusModel", "()Ljava/lang/String;");
                  mids$[mid_getDockedWith_0d9551367f7ecdef] = env->getMethodID(cls, "getDockedWith", "()Ljava/util/List;");
                  mids$[mid_getDragCoefficient_557b8123390d8d0c] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDragConstantArea_557b8123390d8d0c] = env->getMethodID(cls, "getDragConstantArea", "()D");
                  mids$[mid_getDragUncertainty_557b8123390d8d0c] = env->getMethodID(cls, "getDragUncertainty", "()D");
                  mids$[mid_getDryMass_557b8123390d8d0c] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInitialWetMass_557b8123390d8d0c] = env->getMethodID(cls, "getInitialWetMass", "()D");
                  mids$[mid_getManeuversFrequency_557b8123390d8d0c] = env->getMethodID(cls, "getManeuversFrequency", "()D");
                  mids$[mid_getManeuversPerYear_557b8123390d8d0c] = env->getMethodID(cls, "getManeuversPerYear", "()D");
                  mids$[mid_getManufacturer_3cffd47377eca18a] = env->getMethodID(cls, "getManufacturer", "()Ljava/lang/String;");
                  mids$[mid_getMaxAreaForCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getMaxAreaForCollisionProbability", "()D");
                  mids$[mid_getMaxThrust_557b8123390d8d0c] = env->getMethodID(cls, "getMaxThrust", "()D");
                  mids$[mid_getMinAreaForCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getMinAreaForCollisionProbability", "()D");
                  mids$[mid_getRemainingDv_557b8123390d8d0c] = env->getMethodID(cls, "getRemainingDv", "()D");
                  mids$[mid_getSrpCoefficient_557b8123390d8d0c] = env->getMethodID(cls, "getSrpCoefficient", "()D");
                  mids$[mid_getSrpConstantArea_557b8123390d8d0c] = env->getMethodID(cls, "getSrpConstantArea", "()D");
                  mids$[mid_getSrpUncertainty_557b8123390d8d0c] = env->getMethodID(cls, "getSrpUncertainty", "()D");
                  mids$[mid_getTypAreaForCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getTypAreaForCollisionProbability", "()D");
                  mids$[mid_getWetMass_557b8123390d8d0c] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setAttitudeActuatorType_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttitudeActuatorType", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeControlAccuracy_10f281d777284cea] = env->getMethodID(cls, "setAttitudeControlAccuracy", "(D)V");
                  mids$[mid_setAttitudeControlMode_f5ffdf29129ef90a] = env->getMethodID(cls, "setAttitudeControlMode", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeKnowledgeAccuracy_10f281d777284cea] = env->getMethodID(cls, "setAttitudeKnowledgeAccuracy", "(D)V");
                  mids$[mid_setAttitudePointingAccuracy_10f281d777284cea] = env->getMethodID(cls, "setAttitudePointingAccuracy", "(D)V");
                  mids$[mid_setBolDv_10f281d777284cea] = env->getMethodID(cls, "setBolDv", "(D)V");
                  mids$[mid_setBusModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setBusModel", "(Ljava/lang/String;)V");
                  mids$[mid_setDockedWith_4ccaedadb068bdeb] = env->getMethodID(cls, "setDockedWith", "(Ljava/util/List;)V");
                  mids$[mid_setDragCoefficient_10f281d777284cea] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDragConstantArea_10f281d777284cea] = env->getMethodID(cls, "setDragConstantArea", "(D)V");
                  mids$[mid_setDragUncertainty_10f281d777284cea] = env->getMethodID(cls, "setDragUncertainty", "(D)V");
                  mids$[mid_setDryMass_10f281d777284cea] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInitialWetMass_10f281d777284cea] = env->getMethodID(cls, "setInitialWetMass", "(D)V");
                  mids$[mid_setManeuversFrequency_10f281d777284cea] = env->getMethodID(cls, "setManeuversFrequency", "(D)V");
                  mids$[mid_setManufacturer_f5ffdf29129ef90a] = env->getMethodID(cls, "setManufacturer", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxAreaForCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setMaxAreaForCollisionProbability", "(D)V");
                  mids$[mid_setMaxThrust_10f281d777284cea] = env->getMethodID(cls, "setMaxThrust", "(D)V");
                  mids$[mid_setMinAreaForCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setMinAreaForCollisionProbability", "(D)V");
                  mids$[mid_setRemainingDv_10f281d777284cea] = env->getMethodID(cls, "setRemainingDv", "(D)V");
                  mids$[mid_setSrpCoefficient_10f281d777284cea] = env->getMethodID(cls, "setSrpCoefficient", "(D)V");
                  mids$[mid_setSrpConstantArea_10f281d777284cea] = env->getMethodID(cls, "setSrpConstantArea", "(D)V");
                  mids$[mid_setSrpUncertainty_10f281d777284cea] = env->getMethodID(cls, "setSrpUncertainty", "(D)V");
                  mids$[mid_setTypAreaForCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setTypAreaForCollisionProbability", "(D)V");
                  mids$[mid_setWetMass_10f281d777284cea] = env->getMethodID(cls, "setWetMass", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitPhysicalProperties::OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

              ::java::lang::String OrbitPhysicalProperties::getAttitudeActuatorType() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeActuatorType_3cffd47377eca18a]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeControlAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeControlAccuracy_557b8123390d8d0c]);
              }

              ::java::lang::String OrbitPhysicalProperties::getAttitudeControlMode() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeControlMode_3cffd47377eca18a]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeKnowledgeAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeKnowledgeAccuracy_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getAttitudePointingAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudePointingAccuracy_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getBolDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBolDv_557b8123390d8d0c]);
              }

              ::java::lang::String OrbitPhysicalProperties::getBusModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBusModel_3cffd47377eca18a]));
              }

              ::java::util::List OrbitPhysicalProperties::getDockedWith() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDockedWith_0d9551367f7ecdef]));
              }

              jdouble OrbitPhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getDragConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragConstantArea_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getDragUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragUncertainty_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_557b8123390d8d0c]);
              }

              ::org::hipparchus::linear::RealMatrix OrbitPhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_70a207fcbc031df2]));
              }

              jdouble OrbitPhysicalProperties::getInitialWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getInitialWetMass_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getManeuversFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversFrequency_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getManeuversPerYear() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversPerYear_557b8123390d8d0c]);
              }

              ::java::lang::String OrbitPhysicalProperties::getManufacturer() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManufacturer_3cffd47377eca18a]));
              }

              jdouble OrbitPhysicalProperties::getMaxAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxAreaForCollisionProbability_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getMaxThrust() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxThrust_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getMinAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinAreaForCollisionProbability_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getRemainingDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRemainingDv_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getSrpCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpCoefficient_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getSrpConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpConstantArea_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getSrpUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpUncertainty_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getTypAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTypAreaForCollisionProbability_557b8123390d8d0c]);
              }

              jdouble OrbitPhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_557b8123390d8d0c]);
              }

              void OrbitPhysicalProperties::setAttitudeActuatorType(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeActuatorType_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeControlAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlAccuracy_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setAttitudeControlMode(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlMode_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeKnowledgeAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeKnowledgeAccuracy_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setAttitudePointingAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudePointingAccuracy_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setBolDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBolDv_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setBusModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBusModel_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitPhysicalProperties::setDockedWith(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDockedWith_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitPhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setDragConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragConstantArea_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setDragUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragUncertainty_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f], a0, a1, a2);
              }

              void OrbitPhysicalProperties::setInitialWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInitialWetMass_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setManeuversFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManeuversFrequency_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setManufacturer(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManufacturer_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitPhysicalProperties::setMaxAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxAreaForCollisionProbability_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setMaxThrust(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxThrust_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setMinAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinAreaForCollisionProbability_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setRemainingDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRemainingDv_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setSrpCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpCoefficient_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setSrpConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpConstantArea_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setSrpUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpUncertainty_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setTypAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTypAreaForCollisionProbability_10f281d777284cea], a0);
              }

              void OrbitPhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_10f281d777284cea], a0);
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
              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args);
              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitPhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeActuatorType),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlMode),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeKnowledgeAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudePointingAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, bolDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, busModel),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dockedWith),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, initialWetMass),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maneuversFrequency),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, maneuversPerYear),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, manufacturer),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxThrust),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, minAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, remainingDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, typAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeActuatorType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlMode, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeKnowledgeAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudePointingAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBolDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBusModel, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDockedWith, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInitialWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversFrequency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversPerYear, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManufacturer, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMinAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getRemainingDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getTypAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeActuatorType, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlMode, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeKnowledgeAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudePointingAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBolDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBusModel, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDockedWith, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInitialWetMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManeuversFrequency, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManufacturer, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxThrust, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMinAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setRemainingDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setTypAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setWetMass, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalProperties)[] = {
                { Py_tp_methods, t_OrbitPhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_OrbitPhysicalProperties_init_ },
                { Py_tp_getset, t_OrbitPhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalProperties, t_OrbitPhysicalProperties, OrbitPhysicalProperties);

              void t_OrbitPhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalProperties), &PY_TYPE_DEF(OrbitPhysicalProperties), module, "OrbitPhysicalProperties", 0);
              }

              void t_OrbitPhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "class_", make_descriptor(OrbitPhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "wrapfn_", make_descriptor(t_OrbitPhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalProperties::wrap_Object(OrbitPhysicalProperties(((t_OrbitPhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitPhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitPhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeActuatorType());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeControlMode());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBolDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getBusModel());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManufacturer());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeActuatorType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeActuatorType", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlMode(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlMode", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeKnowledgeAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeKnowledgeAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudePointingAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudePointingAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBolDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBolDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setBusModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBusModel", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDockedWith(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDockedWith", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setInitialWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInitialWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setManeuversFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManeuversFrequency", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManufacturer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManufacturer", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxThrust(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxThrust", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRemainingDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRemainingDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTypAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTypAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeActuatorType());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeActuatorType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeActuatorType", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeControlMode());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlMode(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlMode", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeKnowledgeAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeKnowledgeAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudePointingAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudePointingAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBolDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBolDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bolDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getBusModel());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setBusModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "busModel", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDockedWith(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dockedWith", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setInitialWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "initialWetMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setManeuversFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maneuversFrequency", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManufacturer());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManufacturer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manufacturer", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxThrust(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxThrust", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRemainingDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "remainingDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTypAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "typAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesIntegratorBuilder::live$ = false;

        jclass ThreeEighthesIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegratorBuilder::ThreeEighthesIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ThreeEighthesIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ThreeEighthesIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegratorBuilder, t_ThreeEighthesIntegratorBuilder, ThreeEighthesIntegratorBuilder);

        void t_ThreeEighthesIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesIntegratorBuilder), module, "ThreeEighthesIntegratorBuilder", 0);
        }

        void t_ThreeEighthesIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "class_", make_descriptor(ThreeEighthesIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegratorBuilder::wrap_Object(ThreeEighthesIntegratorBuilder(((t_ThreeEighthesIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitHermiteInterpolator::class$ = NULL;
      jmethodID *OrbitHermiteInterpolator::mids$ = NULL;
      bool OrbitHermiteInterpolator::live$ = false;

      jclass OrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_51c833c667e08e0f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_824f93e8d6b45930] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_633c02f6304af1cb] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_51c833c667e08e0f, a0, a1.this$, a2.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_824f93e8d6b45930, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter OrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_6c4898d6ec0c3837]));
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
      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args);
      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self);
      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data);
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_OrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_OrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_OrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_OrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_OrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitHermiteInterpolator, t_OrbitHermiteInterpolator, OrbitHermiteInterpolator);
      PyObject *t_OrbitHermiteInterpolator::wrap_Object(const OrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitHermiteInterpolator), &PY_TYPE_DEF(OrbitHermiteInterpolator), module, "OrbitHermiteInterpolator", 0);
      }

      void t_OrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "class_", make_descriptor(OrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_OrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_OrbitHermiteInterpolator::wrap_Object(OrbitHermiteInterpolator(((t_OrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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

      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FixedTransformProvider::class$ = NULL;
      jmethodID *FixedTransformProvider::mids$ = NULL;
      bool FixedTransformProvider::live$ = false;

      jclass FixedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FixedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6eb86d2b2bbcc346] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Transform;)V");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedTransformProvider::FixedTransformProvider(const ::org::orekit::frames::Transform & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6eb86d2b2bbcc346, a0.this$)) {}

      ::org::orekit::frames::Transform FixedTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform FixedTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
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
      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args);

      static PyMethodDef t_FixedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_FixedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedTransformProvider)[] = {
        { Py_tp_methods, t_FixedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_FixedTransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedTransformProvider, t_FixedTransformProvider, FixedTransformProvider);

      void t_FixedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedTransformProvider), &PY_TYPE_DEF(FixedTransformProvider), module, "FixedTransformProvider", 0);
      }

      void t_FixedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "class_", make_descriptor(FixedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "wrapfn_", make_descriptor(t_FixedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_FixedTransformProvider::wrap_Object(FixedTransformProvider(((t_FixedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Transform a0((jobject) NULL);
        FixedTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Transform::initializeClass, &a0))
        {
          INT_CALL(object = FixedTransformProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldIntegratedEphemeris::class$ = NULL;
        jmethodID *FieldIntegratedEphemeris::mids$ = NULL;
        bool FieldIntegratedEphemeris::live$ = false;

        jclass FieldIntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldIntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_abb29bc47afd3aba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/integration/FieldStateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/FieldDenseOutputModel;Lorg/orekit/utils/FieldArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_381b3e011cde018d] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMaxDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getMinDate_f1fe4daf77c66560] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_propagateOrbit_ec5b52b8a8c77d72] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_updateAdditionalStates_4f12774dd382c6f4] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_basicPropagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldIntegratedEphemeris::FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::propagation::integration::FieldStateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::FieldDenseOutputModel & a5, const ::org::orekit::utils::FieldArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_abb29bc47afd3aba, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame FieldIntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldIntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_381b3e011cde018d]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_f1fe4daf77c66560]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_f1fe4daf77c66560]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldIntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
        }

        ::java::util::List FieldIntegratedEphemeris::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void FieldIntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
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
        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args);
        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data);
        static PyGetSetDef t_FieldIntegratedEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, minDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldIntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_FieldIntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldIntegratedEphemeris)[] = {
          { Py_tp_methods, t_FieldIntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_FieldIntegratedEphemeris_init_ },
          { Py_tp_getset, t_FieldIntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldIntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldIntegratedEphemeris, t_FieldIntegratedEphemeris, FieldIntegratedEphemeris);
        PyObject *t_FieldIntegratedEphemeris::wrap_Object(const FieldIntegratedEphemeris& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldIntegratedEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldIntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldIntegratedEphemeris), &PY_TYPE_DEF(FieldIntegratedEphemeris), module, "FieldIntegratedEphemeris", 0);
        }

        void t_FieldIntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "class_", make_descriptor(FieldIntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "wrapfn_", make_descriptor(t_FieldIntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldIntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_FieldIntegratedEphemeris::wrap_Object(FieldIntegratedEphemeris(((t_FieldIntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldIntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::propagation::integration::FieldStateMapper a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::FieldDenseOutputModel a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::orekit::utils::FieldArrayDictionary a6((jobject) NULL);
          PyTypeObject **p6;
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          FieldIntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK[s[I", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::FieldDenseOutputModel::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::propagation::integration::t_FieldStateMapper::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &p5, ::org::hipparchus::ode::t_FieldDenseOutputModel::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = FieldIntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045::class$ = NULL;
              jmethodID *Rtcm1045::mids$ = NULL;
              bool Rtcm1045::live$ = false;

              jclass Rtcm1045::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4dabbc6c0055c54f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045::Rtcm1045(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_4dabbc6c0055c54f, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args);
              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data);
              static PyGetSetDef t_Rtcm1045__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1045, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045)[] = {
                { Py_tp_methods, t_Rtcm1045__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045_init_ },
                { Py_tp_getset, t_Rtcm1045__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1045, t_Rtcm1045, Rtcm1045);
              PyObject *t_Rtcm1045::wrap_Object(const Rtcm1045& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1045::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1045::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045), &PY_TYPE_DEF(Rtcm1045), module, "Rtcm1045", 0);
              }

              void t_Rtcm1045::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "class_", make_descriptor(Rtcm1045::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "wrapfn_", make_descriptor(t_Rtcm1045::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045::wrap_Object(Rtcm1045(((t_Rtcm1045 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data a1((jobject) NULL);
                Rtcm1045 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1045(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1045Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Interval::class$ = NULL;
          jmethodID *Interval::mids$ = NULL;
          bool Interval::live$ = false;

          jclass Interval::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Interval");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_checkPoint_97a5a8b1b703b32d] = env->getMethodID(cls, "checkPoint", "(DD)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_557b8123390d8d0c] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_557b8123390d8d0c] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_557b8123390d8d0c] = env->getMethodID(cls, "getSup", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Interval::Interval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Interval::checkPoint(jdouble a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_97a5a8b1b703b32d], a0, a1));
          }

          jdouble Interval::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_557b8123390d8d0c]);
          }

          jdouble Interval::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_557b8123390d8d0c]);
          }

          jdouble Interval::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
          }

          jdouble Interval::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_557b8123390d8d0c]);
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
          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args);
          static PyObject *t_Interval_getBarycenter(t_Interval *self);
          static PyObject *t_Interval_getInf(t_Interval *self);
          static PyObject *t_Interval_getSize(t_Interval *self);
          static PyObject *t_Interval_getSup(t_Interval *self);
          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data);
          static PyObject *t_Interval_get__inf(t_Interval *self, void *data);
          static PyObject *t_Interval_get__size(t_Interval *self, void *data);
          static PyObject *t_Interval_get__sup(t_Interval *self, void *data);
          static PyGetSetDef t_Interval__fields_[] = {
            DECLARE_GET_FIELD(t_Interval, barycenter),
            DECLARE_GET_FIELD(t_Interval, inf),
            DECLARE_GET_FIELD(t_Interval, size),
            DECLARE_GET_FIELD(t_Interval, sup),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Interval__methods_[] = {
            DECLARE_METHOD(t_Interval, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, checkPoint, METH_VARARGS),
            DECLARE_METHOD(t_Interval, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSup, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Interval)[] = {
            { Py_tp_methods, t_Interval__methods_ },
            { Py_tp_init, (void *) t_Interval_init_ },
            { Py_tp_getset, t_Interval__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Interval)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Interval, t_Interval, Interval);

          void t_Interval::install(PyObject *module)
          {
            installType(&PY_TYPE(Interval), &PY_TYPE_DEF(Interval), module, "Interval", 0);
          }

          void t_Interval::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "class_", make_descriptor(Interval::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "wrapfn_", make_descriptor(t_Interval::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Interval::initializeClass, 1)))
              return NULL;
            return t_Interval::wrap_Object(Interval(((t_Interval *) arg)->object.this$));
          }
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Interval::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Interval object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Interval(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.checkPoint(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
            return NULL;
          }

          static PyObject *t_Interval_getBarycenter(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getInf(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSize(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSup(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__inf(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__size(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__sup(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SignalCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationType::class$ = NULL;
      jmethodID *ObservationType::mids$ = NULL;
      bool ObservationType::live$ = false;
      ObservationType *ObservationType::C0 = NULL;
      ObservationType *ObservationType::C1 = NULL;
      ObservationType *ObservationType::C1A = NULL;
      ObservationType *ObservationType::C1B = NULL;
      ObservationType *ObservationType::C1C = NULL;
      ObservationType *ObservationType::C1D = NULL;
      ObservationType *ObservationType::C1E = NULL;
      ObservationType *ObservationType::C1I = NULL;
      ObservationType *ObservationType::C1L = NULL;
      ObservationType *ObservationType::C1M = NULL;
      ObservationType *ObservationType::C1P = NULL;
      ObservationType *ObservationType::C1Q = NULL;
      ObservationType *ObservationType::C1S = NULL;
      ObservationType *ObservationType::C1W = NULL;
      ObservationType *ObservationType::C1X = NULL;
      ObservationType *ObservationType::C1Y = NULL;
      ObservationType *ObservationType::C1Z = NULL;
      ObservationType *ObservationType::C2 = NULL;
      ObservationType *ObservationType::C2C = NULL;
      ObservationType *ObservationType::C2D = NULL;
      ObservationType *ObservationType::C2I = NULL;
      ObservationType *ObservationType::C2L = NULL;
      ObservationType *ObservationType::C2M = NULL;
      ObservationType *ObservationType::C2P = NULL;
      ObservationType *ObservationType::C2Q = NULL;
      ObservationType *ObservationType::C2S = NULL;
      ObservationType *ObservationType::C2W = NULL;
      ObservationType *ObservationType::C2X = NULL;
      ObservationType *ObservationType::C2Y = NULL;
      ObservationType *ObservationType::C3I = NULL;
      ObservationType *ObservationType::C3Q = NULL;
      ObservationType *ObservationType::C3X = NULL;
      ObservationType *ObservationType::C4A = NULL;
      ObservationType *ObservationType::C4B = NULL;
      ObservationType *ObservationType::C4X = NULL;
      ObservationType *ObservationType::C5 = NULL;
      ObservationType *ObservationType::C5A = NULL;
      ObservationType *ObservationType::C5B = NULL;
      ObservationType *ObservationType::C5C = NULL;
      ObservationType *ObservationType::C5D = NULL;
      ObservationType *ObservationType::C5I = NULL;
      ObservationType *ObservationType::C5P = NULL;
      ObservationType *ObservationType::C5Q = NULL;
      ObservationType *ObservationType::C5X = NULL;
      ObservationType *ObservationType::C5Z = NULL;
      ObservationType *ObservationType::C6 = NULL;
      ObservationType *ObservationType::C6A = NULL;
      ObservationType *ObservationType::C6B = NULL;
      ObservationType *ObservationType::C6C = NULL;
      ObservationType *ObservationType::C6D = NULL;
      ObservationType *ObservationType::C6E = NULL;
      ObservationType *ObservationType::C6I = NULL;
      ObservationType *ObservationType::C6L = NULL;
      ObservationType *ObservationType::C6P = NULL;
      ObservationType *ObservationType::C6Q = NULL;
      ObservationType *ObservationType::C6S = NULL;
      ObservationType *ObservationType::C6X = NULL;
      ObservationType *ObservationType::C6Z = NULL;
      ObservationType *ObservationType::C7 = NULL;
      ObservationType *ObservationType::C7D = NULL;
      ObservationType *ObservationType::C7I = NULL;
      ObservationType *ObservationType::C7P = NULL;
      ObservationType *ObservationType::C7Q = NULL;
      ObservationType *ObservationType::C7X = NULL;
      ObservationType *ObservationType::C7Z = NULL;
      ObservationType *ObservationType::C8 = NULL;
      ObservationType *ObservationType::C8D = NULL;
      ObservationType *ObservationType::C8I = NULL;
      ObservationType *ObservationType::C8P = NULL;
      ObservationType *ObservationType::C8Q = NULL;
      ObservationType *ObservationType::C8X = NULL;
      ObservationType *ObservationType::C9A = NULL;
      ObservationType *ObservationType::C9B = NULL;
      ObservationType *ObservationType::C9C = NULL;
      ObservationType *ObservationType::C9X = NULL;
      ObservationType *ObservationType::CA = NULL;
      ObservationType *ObservationType::CB = NULL;
      ObservationType *ObservationType::CC = NULL;
      ObservationType *ObservationType::CD = NULL;
      ObservationType *ObservationType::D0 = NULL;
      ObservationType *ObservationType::D1 = NULL;
      ObservationType *ObservationType::D1A = NULL;
      ObservationType *ObservationType::D1B = NULL;
      ObservationType *ObservationType::D1C = NULL;
      ObservationType *ObservationType::D1D = NULL;
      ObservationType *ObservationType::D1E = NULL;
      ObservationType *ObservationType::D1I = NULL;
      ObservationType *ObservationType::D1L = NULL;
      ObservationType *ObservationType::D1M = NULL;
      ObservationType *ObservationType::D1N = NULL;
      ObservationType *ObservationType::D1P = NULL;
      ObservationType *ObservationType::D1S = NULL;
      ObservationType *ObservationType::D1W = NULL;
      ObservationType *ObservationType::D1X = NULL;
      ObservationType *ObservationType::D1Y = NULL;
      ObservationType *ObservationType::D1Z = NULL;
      ObservationType *ObservationType::D2 = NULL;
      ObservationType *ObservationType::D2C = NULL;
      ObservationType *ObservationType::D2D = NULL;
      ObservationType *ObservationType::D2I = NULL;
      ObservationType *ObservationType::D2L = NULL;
      ObservationType *ObservationType::D2M = NULL;
      ObservationType *ObservationType::D2N = NULL;
      ObservationType *ObservationType::D2P = NULL;
      ObservationType *ObservationType::D2Q = NULL;
      ObservationType *ObservationType::D2S = NULL;
      ObservationType *ObservationType::D2W = NULL;
      ObservationType *ObservationType::D2X = NULL;
      ObservationType *ObservationType::D2Y = NULL;
      ObservationType *ObservationType::D3I = NULL;
      ObservationType *ObservationType::D3Q = NULL;
      ObservationType *ObservationType::D3X = NULL;
      ObservationType *ObservationType::D4A = NULL;
      ObservationType *ObservationType::D4B = NULL;
      ObservationType *ObservationType::D4X = NULL;
      ObservationType *ObservationType::D5 = NULL;
      ObservationType *ObservationType::D5A = NULL;
      ObservationType *ObservationType::D5B = NULL;
      ObservationType *ObservationType::D5C = NULL;
      ObservationType *ObservationType::D5D = NULL;
      ObservationType *ObservationType::D5I = NULL;
      ObservationType *ObservationType::D5P = NULL;
      ObservationType *ObservationType::D5Q = NULL;
      ObservationType *ObservationType::D5X = NULL;
      ObservationType *ObservationType::D5Z = NULL;
      ObservationType *ObservationType::D6 = NULL;
      ObservationType *ObservationType::D6A = NULL;
      ObservationType *ObservationType::D6B = NULL;
      ObservationType *ObservationType::D6C = NULL;
      ObservationType *ObservationType::D6D = NULL;
      ObservationType *ObservationType::D6E = NULL;
      ObservationType *ObservationType::D6I = NULL;
      ObservationType *ObservationType::D6L = NULL;
      ObservationType *ObservationType::D6P = NULL;
      ObservationType *ObservationType::D6Q = NULL;
      ObservationType *ObservationType::D6S = NULL;
      ObservationType *ObservationType::D6X = NULL;
      ObservationType *ObservationType::D6Z = NULL;
      ObservationType *ObservationType::D7 = NULL;
      ObservationType *ObservationType::D7D = NULL;
      ObservationType *ObservationType::D7I = NULL;
      ObservationType *ObservationType::D7P = NULL;
      ObservationType *ObservationType::D7Q = NULL;
      ObservationType *ObservationType::D7X = NULL;
      ObservationType *ObservationType::D7Z = NULL;
      ObservationType *ObservationType::D8 = NULL;
      ObservationType *ObservationType::D8D = NULL;
      ObservationType *ObservationType::D8I = NULL;
      ObservationType *ObservationType::D8P = NULL;
      ObservationType *ObservationType::D8Q = NULL;
      ObservationType *ObservationType::D8X = NULL;
      ObservationType *ObservationType::D9A = NULL;
      ObservationType *ObservationType::D9B = NULL;
      ObservationType *ObservationType::D9C = NULL;
      ObservationType *ObservationType::D9X = NULL;
      ObservationType *ObservationType::DA = NULL;
      ObservationType *ObservationType::DB = NULL;
      ObservationType *ObservationType::DC = NULL;
      ObservationType *ObservationType::DD = NULL;
      ObservationType *ObservationType::L0 = NULL;
      ObservationType *ObservationType::L1 = NULL;
      ObservationType *ObservationType::L1A = NULL;
      ObservationType *ObservationType::L1B = NULL;
      ObservationType *ObservationType::L1C = NULL;
      ObservationType *ObservationType::L1D = NULL;
      ObservationType *ObservationType::L1E = NULL;
      ObservationType *ObservationType::L1I = NULL;
      ObservationType *ObservationType::L1L = NULL;
      ObservationType *ObservationType::L1M = NULL;
      ObservationType *ObservationType::L1N = NULL;
      ObservationType *ObservationType::L1P = NULL;
      ObservationType *ObservationType::L1S = NULL;
      ObservationType *ObservationType::L1W = NULL;
      ObservationType *ObservationType::L1X = NULL;
      ObservationType *ObservationType::L1Y = NULL;
      ObservationType *ObservationType::L1Z = NULL;
      ObservationType *ObservationType::L2 = NULL;
      ObservationType *ObservationType::L2C = NULL;
      ObservationType *ObservationType::L2D = NULL;
      ObservationType *ObservationType::L2I = NULL;
      ObservationType *ObservationType::L2L = NULL;
      ObservationType *ObservationType::L2M = NULL;
      ObservationType *ObservationType::L2N = NULL;
      ObservationType *ObservationType::L2P = NULL;
      ObservationType *ObservationType::L2Q = NULL;
      ObservationType *ObservationType::L2S = NULL;
      ObservationType *ObservationType::L2W = NULL;
      ObservationType *ObservationType::L2X = NULL;
      ObservationType *ObservationType::L2Y = NULL;
      ObservationType *ObservationType::L3I = NULL;
      ObservationType *ObservationType::L3Q = NULL;
      ObservationType *ObservationType::L3X = NULL;
      ObservationType *ObservationType::L4A = NULL;
      ObservationType *ObservationType::L4B = NULL;
      ObservationType *ObservationType::L4X = NULL;
      ObservationType *ObservationType::L5 = NULL;
      ObservationType *ObservationType::L5A = NULL;
      ObservationType *ObservationType::L5B = NULL;
      ObservationType *ObservationType::L5C = NULL;
      ObservationType *ObservationType::L5D = NULL;
      ObservationType *ObservationType::L5I = NULL;
      ObservationType *ObservationType::L5P = NULL;
      ObservationType *ObservationType::L5Q = NULL;
      ObservationType *ObservationType::L5X = NULL;
      ObservationType *ObservationType::L5Z = NULL;
      ObservationType *ObservationType::L6 = NULL;
      ObservationType *ObservationType::L6A = NULL;
      ObservationType *ObservationType::L6B = NULL;
      ObservationType *ObservationType::L6C = NULL;
      ObservationType *ObservationType::L6D = NULL;
      ObservationType *ObservationType::L6E = NULL;
      ObservationType *ObservationType::L6I = NULL;
      ObservationType *ObservationType::L6L = NULL;
      ObservationType *ObservationType::L6P = NULL;
      ObservationType *ObservationType::L6Q = NULL;
      ObservationType *ObservationType::L6S = NULL;
      ObservationType *ObservationType::L6X = NULL;
      ObservationType *ObservationType::L6Z = NULL;
      ObservationType *ObservationType::L7 = NULL;
      ObservationType *ObservationType::L7D = NULL;
      ObservationType *ObservationType::L7I = NULL;
      ObservationType *ObservationType::L7P = NULL;
      ObservationType *ObservationType::L7Q = NULL;
      ObservationType *ObservationType::L7X = NULL;
      ObservationType *ObservationType::L7Z = NULL;
      ObservationType *ObservationType::L8 = NULL;
      ObservationType *ObservationType::L8D = NULL;
      ObservationType *ObservationType::L8I = NULL;
      ObservationType *ObservationType::L8P = NULL;
      ObservationType *ObservationType::L8Q = NULL;
      ObservationType *ObservationType::L8X = NULL;
      ObservationType *ObservationType::L9A = NULL;
      ObservationType *ObservationType::L9B = NULL;
      ObservationType *ObservationType::L9C = NULL;
      ObservationType *ObservationType::L9X = NULL;
      ObservationType *ObservationType::LA = NULL;
      ObservationType *ObservationType::LB = NULL;
      ObservationType *ObservationType::LC = NULL;
      ObservationType *ObservationType::LD = NULL;
      ObservationType *ObservationType::P1 = NULL;
      ObservationType *ObservationType::P2 = NULL;
      ObservationType *ObservationType::S0 = NULL;
      ObservationType *ObservationType::S1 = NULL;
      ObservationType *ObservationType::S1A = NULL;
      ObservationType *ObservationType::S1B = NULL;
      ObservationType *ObservationType::S1C = NULL;
      ObservationType *ObservationType::S1D = NULL;
      ObservationType *ObservationType::S1E = NULL;
      ObservationType *ObservationType::S1I = NULL;
      ObservationType *ObservationType::S1L = NULL;
      ObservationType *ObservationType::S1M = NULL;
      ObservationType *ObservationType::S1N = NULL;
      ObservationType *ObservationType::S1P = NULL;
      ObservationType *ObservationType::S1S = NULL;
      ObservationType *ObservationType::S1W = NULL;
      ObservationType *ObservationType::S1X = NULL;
      ObservationType *ObservationType::S1Y = NULL;
      ObservationType *ObservationType::S1Z = NULL;
      ObservationType *ObservationType::S2 = NULL;
      ObservationType *ObservationType::S2C = NULL;
      ObservationType *ObservationType::S2D = NULL;
      ObservationType *ObservationType::S2I = NULL;
      ObservationType *ObservationType::S2L = NULL;
      ObservationType *ObservationType::S2M = NULL;
      ObservationType *ObservationType::S2N = NULL;
      ObservationType *ObservationType::S2P = NULL;
      ObservationType *ObservationType::S2Q = NULL;
      ObservationType *ObservationType::S2S = NULL;
      ObservationType *ObservationType::S2W = NULL;
      ObservationType *ObservationType::S2X = NULL;
      ObservationType *ObservationType::S2Y = NULL;
      ObservationType *ObservationType::S3I = NULL;
      ObservationType *ObservationType::S3Q = NULL;
      ObservationType *ObservationType::S3X = NULL;
      ObservationType *ObservationType::S4A = NULL;
      ObservationType *ObservationType::S4B = NULL;
      ObservationType *ObservationType::S4X = NULL;
      ObservationType *ObservationType::S5 = NULL;
      ObservationType *ObservationType::S5A = NULL;
      ObservationType *ObservationType::S5B = NULL;
      ObservationType *ObservationType::S5C = NULL;
      ObservationType *ObservationType::S5D = NULL;
      ObservationType *ObservationType::S5I = NULL;
      ObservationType *ObservationType::S5P = NULL;
      ObservationType *ObservationType::S5Q = NULL;
      ObservationType *ObservationType::S5X = NULL;
      ObservationType *ObservationType::S5Z = NULL;
      ObservationType *ObservationType::S6 = NULL;
      ObservationType *ObservationType::S6A = NULL;
      ObservationType *ObservationType::S6B = NULL;
      ObservationType *ObservationType::S6C = NULL;
      ObservationType *ObservationType::S6D = NULL;
      ObservationType *ObservationType::S6E = NULL;
      ObservationType *ObservationType::S6I = NULL;
      ObservationType *ObservationType::S6L = NULL;
      ObservationType *ObservationType::S6P = NULL;
      ObservationType *ObservationType::S6Q = NULL;
      ObservationType *ObservationType::S6S = NULL;
      ObservationType *ObservationType::S6X = NULL;
      ObservationType *ObservationType::S6Z = NULL;
      ObservationType *ObservationType::S7 = NULL;
      ObservationType *ObservationType::S7D = NULL;
      ObservationType *ObservationType::S7I = NULL;
      ObservationType *ObservationType::S7P = NULL;
      ObservationType *ObservationType::S7Q = NULL;
      ObservationType *ObservationType::S7X = NULL;
      ObservationType *ObservationType::S7Z = NULL;
      ObservationType *ObservationType::S8 = NULL;
      ObservationType *ObservationType::S8D = NULL;
      ObservationType *ObservationType::S8I = NULL;
      ObservationType *ObservationType::S8P = NULL;
      ObservationType *ObservationType::S8Q = NULL;
      ObservationType *ObservationType::S8X = NULL;
      ObservationType *ObservationType::S9A = NULL;
      ObservationType *ObservationType::S9B = NULL;
      ObservationType *ObservationType::S9C = NULL;
      ObservationType *ObservationType::S9X = NULL;
      ObservationType *ObservationType::SA = NULL;
      ObservationType *ObservationType::SB = NULL;
      ObservationType *ObservationType::SC = NULL;
      ObservationType *ObservationType::SD = NULL;

      jclass ObservationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFrequency_7632034d07c17677] = env->getMethodID(cls, "getFrequency", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_getMeasurementType_f61bec61c77ea492] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_getSignalCode_68cb200aa67370b3] = env->getMethodID(cls, "getSignalCode", "()Lorg/orekit/gnss/SignalCode;");
          mids$[mid_valueOf_cd6cdaa419ccd4cf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationType;");
          mids$[mid_values_8082fc8067062d26] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          C0 = new ObservationType(env->getStaticObjectField(cls, "C0", "Lorg/orekit/gnss/ObservationType;"));
          C1 = new ObservationType(env->getStaticObjectField(cls, "C1", "Lorg/orekit/gnss/ObservationType;"));
          C1A = new ObservationType(env->getStaticObjectField(cls, "C1A", "Lorg/orekit/gnss/ObservationType;"));
          C1B = new ObservationType(env->getStaticObjectField(cls, "C1B", "Lorg/orekit/gnss/ObservationType;"));
          C1C = new ObservationType(env->getStaticObjectField(cls, "C1C", "Lorg/orekit/gnss/ObservationType;"));
          C1D = new ObservationType(env->getStaticObjectField(cls, "C1D", "Lorg/orekit/gnss/ObservationType;"));
          C1E = new ObservationType(env->getStaticObjectField(cls, "C1E", "Lorg/orekit/gnss/ObservationType;"));
          C1I = new ObservationType(env->getStaticObjectField(cls, "C1I", "Lorg/orekit/gnss/ObservationType;"));
          C1L = new ObservationType(env->getStaticObjectField(cls, "C1L", "Lorg/orekit/gnss/ObservationType;"));
          C1M = new ObservationType(env->getStaticObjectField(cls, "C1M", "Lorg/orekit/gnss/ObservationType;"));
          C1P = new ObservationType(env->getStaticObjectField(cls, "C1P", "Lorg/orekit/gnss/ObservationType;"));
          C1Q = new ObservationType(env->getStaticObjectField(cls, "C1Q", "Lorg/orekit/gnss/ObservationType;"));
          C1S = new ObservationType(env->getStaticObjectField(cls, "C1S", "Lorg/orekit/gnss/ObservationType;"));
          C1W = new ObservationType(env->getStaticObjectField(cls, "C1W", "Lorg/orekit/gnss/ObservationType;"));
          C1X = new ObservationType(env->getStaticObjectField(cls, "C1X", "Lorg/orekit/gnss/ObservationType;"));
          C1Y = new ObservationType(env->getStaticObjectField(cls, "C1Y", "Lorg/orekit/gnss/ObservationType;"));
          C1Z = new ObservationType(env->getStaticObjectField(cls, "C1Z", "Lorg/orekit/gnss/ObservationType;"));
          C2 = new ObservationType(env->getStaticObjectField(cls, "C2", "Lorg/orekit/gnss/ObservationType;"));
          C2C = new ObservationType(env->getStaticObjectField(cls, "C2C", "Lorg/orekit/gnss/ObservationType;"));
          C2D = new ObservationType(env->getStaticObjectField(cls, "C2D", "Lorg/orekit/gnss/ObservationType;"));
          C2I = new ObservationType(env->getStaticObjectField(cls, "C2I", "Lorg/orekit/gnss/ObservationType;"));
          C2L = new ObservationType(env->getStaticObjectField(cls, "C2L", "Lorg/orekit/gnss/ObservationType;"));
          C2M = new ObservationType(env->getStaticObjectField(cls, "C2M", "Lorg/orekit/gnss/ObservationType;"));
          C2P = new ObservationType(env->getStaticObjectField(cls, "C2P", "Lorg/orekit/gnss/ObservationType;"));
          C2Q = new ObservationType(env->getStaticObjectField(cls, "C2Q", "Lorg/orekit/gnss/ObservationType;"));
          C2S = new ObservationType(env->getStaticObjectField(cls, "C2S", "Lorg/orekit/gnss/ObservationType;"));
          C2W = new ObservationType(env->getStaticObjectField(cls, "C2W", "Lorg/orekit/gnss/ObservationType;"));
          C2X = new ObservationType(env->getStaticObjectField(cls, "C2X", "Lorg/orekit/gnss/ObservationType;"));
          C2Y = new ObservationType(env->getStaticObjectField(cls, "C2Y", "Lorg/orekit/gnss/ObservationType;"));
          C3I = new ObservationType(env->getStaticObjectField(cls, "C3I", "Lorg/orekit/gnss/ObservationType;"));
          C3Q = new ObservationType(env->getStaticObjectField(cls, "C3Q", "Lorg/orekit/gnss/ObservationType;"));
          C3X = new ObservationType(env->getStaticObjectField(cls, "C3X", "Lorg/orekit/gnss/ObservationType;"));
          C4A = new ObservationType(env->getStaticObjectField(cls, "C4A", "Lorg/orekit/gnss/ObservationType;"));
          C4B = new ObservationType(env->getStaticObjectField(cls, "C4B", "Lorg/orekit/gnss/ObservationType;"));
          C4X = new ObservationType(env->getStaticObjectField(cls, "C4X", "Lorg/orekit/gnss/ObservationType;"));
          C5 = new ObservationType(env->getStaticObjectField(cls, "C5", "Lorg/orekit/gnss/ObservationType;"));
          C5A = new ObservationType(env->getStaticObjectField(cls, "C5A", "Lorg/orekit/gnss/ObservationType;"));
          C5B = new ObservationType(env->getStaticObjectField(cls, "C5B", "Lorg/orekit/gnss/ObservationType;"));
          C5C = new ObservationType(env->getStaticObjectField(cls, "C5C", "Lorg/orekit/gnss/ObservationType;"));
          C5D = new ObservationType(env->getStaticObjectField(cls, "C5D", "Lorg/orekit/gnss/ObservationType;"));
          C5I = new ObservationType(env->getStaticObjectField(cls, "C5I", "Lorg/orekit/gnss/ObservationType;"));
          C5P = new ObservationType(env->getStaticObjectField(cls, "C5P", "Lorg/orekit/gnss/ObservationType;"));
          C5Q = new ObservationType(env->getStaticObjectField(cls, "C5Q", "Lorg/orekit/gnss/ObservationType;"));
          C5X = new ObservationType(env->getStaticObjectField(cls, "C5X", "Lorg/orekit/gnss/ObservationType;"));
          C5Z = new ObservationType(env->getStaticObjectField(cls, "C5Z", "Lorg/orekit/gnss/ObservationType;"));
          C6 = new ObservationType(env->getStaticObjectField(cls, "C6", "Lorg/orekit/gnss/ObservationType;"));
          C6A = new ObservationType(env->getStaticObjectField(cls, "C6A", "Lorg/orekit/gnss/ObservationType;"));
          C6B = new ObservationType(env->getStaticObjectField(cls, "C6B", "Lorg/orekit/gnss/ObservationType;"));
          C6C = new ObservationType(env->getStaticObjectField(cls, "C6C", "Lorg/orekit/gnss/ObservationType;"));
          C6D = new ObservationType(env->getStaticObjectField(cls, "C6D", "Lorg/orekit/gnss/ObservationType;"));
          C6E = new ObservationType(env->getStaticObjectField(cls, "C6E", "Lorg/orekit/gnss/ObservationType;"));
          C6I = new ObservationType(env->getStaticObjectField(cls, "C6I", "Lorg/orekit/gnss/ObservationType;"));
          C6L = new ObservationType(env->getStaticObjectField(cls, "C6L", "Lorg/orekit/gnss/ObservationType;"));
          C6P = new ObservationType(env->getStaticObjectField(cls, "C6P", "Lorg/orekit/gnss/ObservationType;"));
          C6Q = new ObservationType(env->getStaticObjectField(cls, "C6Q", "Lorg/orekit/gnss/ObservationType;"));
          C6S = new ObservationType(env->getStaticObjectField(cls, "C6S", "Lorg/orekit/gnss/ObservationType;"));
          C6X = new ObservationType(env->getStaticObjectField(cls, "C6X", "Lorg/orekit/gnss/ObservationType;"));
          C6Z = new ObservationType(env->getStaticObjectField(cls, "C6Z", "Lorg/orekit/gnss/ObservationType;"));
          C7 = new ObservationType(env->getStaticObjectField(cls, "C7", "Lorg/orekit/gnss/ObservationType;"));
          C7D = new ObservationType(env->getStaticObjectField(cls, "C7D", "Lorg/orekit/gnss/ObservationType;"));
          C7I = new ObservationType(env->getStaticObjectField(cls, "C7I", "Lorg/orekit/gnss/ObservationType;"));
          C7P = new ObservationType(env->getStaticObjectField(cls, "C7P", "Lorg/orekit/gnss/ObservationType;"));
          C7Q = new ObservationType(env->getStaticObjectField(cls, "C7Q", "Lorg/orekit/gnss/ObservationType;"));
          C7X = new ObservationType(env->getStaticObjectField(cls, "C7X", "Lorg/orekit/gnss/ObservationType;"));
          C7Z = new ObservationType(env->getStaticObjectField(cls, "C7Z", "Lorg/orekit/gnss/ObservationType;"));
          C8 = new ObservationType(env->getStaticObjectField(cls, "C8", "Lorg/orekit/gnss/ObservationType;"));
          C8D = new ObservationType(env->getStaticObjectField(cls, "C8D", "Lorg/orekit/gnss/ObservationType;"));
          C8I = new ObservationType(env->getStaticObjectField(cls, "C8I", "Lorg/orekit/gnss/ObservationType;"));
          C8P = new ObservationType(env->getStaticObjectField(cls, "C8P", "Lorg/orekit/gnss/ObservationType;"));
          C8Q = new ObservationType(env->getStaticObjectField(cls, "C8Q", "Lorg/orekit/gnss/ObservationType;"));
          C8X = new ObservationType(env->getStaticObjectField(cls, "C8X", "Lorg/orekit/gnss/ObservationType;"));
          C9A = new ObservationType(env->getStaticObjectField(cls, "C9A", "Lorg/orekit/gnss/ObservationType;"));
          C9B = new ObservationType(env->getStaticObjectField(cls, "C9B", "Lorg/orekit/gnss/ObservationType;"));
          C9C = new ObservationType(env->getStaticObjectField(cls, "C9C", "Lorg/orekit/gnss/ObservationType;"));
          C9X = new ObservationType(env->getStaticObjectField(cls, "C9X", "Lorg/orekit/gnss/ObservationType;"));
          CA = new ObservationType(env->getStaticObjectField(cls, "CA", "Lorg/orekit/gnss/ObservationType;"));
          CB = new ObservationType(env->getStaticObjectField(cls, "CB", "Lorg/orekit/gnss/ObservationType;"));
          CC = new ObservationType(env->getStaticObjectField(cls, "CC", "Lorg/orekit/gnss/ObservationType;"));
          CD = new ObservationType(env->getStaticObjectField(cls, "CD", "Lorg/orekit/gnss/ObservationType;"));
          D0 = new ObservationType(env->getStaticObjectField(cls, "D0", "Lorg/orekit/gnss/ObservationType;"));
          D1 = new ObservationType(env->getStaticObjectField(cls, "D1", "Lorg/orekit/gnss/ObservationType;"));
          D1A = new ObservationType(env->getStaticObjectField(cls, "D1A", "Lorg/orekit/gnss/ObservationType;"));
          D1B = new ObservationType(env->getStaticObjectField(cls, "D1B", "Lorg/orekit/gnss/ObservationType;"));
          D1C = new ObservationType(env->getStaticObjectField(cls, "D1C", "Lorg/orekit/gnss/ObservationType;"));
          D1D = new ObservationType(env->getStaticObjectField(cls, "D1D", "Lorg/orekit/gnss/ObservationType;"));
          D1E = new ObservationType(env->getStaticObjectField(cls, "D1E", "Lorg/orekit/gnss/ObservationType;"));
          D1I = new ObservationType(env->getStaticObjectField(cls, "D1I", "Lorg/orekit/gnss/ObservationType;"));
          D1L = new ObservationType(env->getStaticObjectField(cls, "D1L", "Lorg/orekit/gnss/ObservationType;"));
          D1M = new ObservationType(env->getStaticObjectField(cls, "D1M", "Lorg/orekit/gnss/ObservationType;"));
          D1N = new ObservationType(env->getStaticObjectField(cls, "D1N", "Lorg/orekit/gnss/ObservationType;"));
          D1P = new ObservationType(env->getStaticObjectField(cls, "D1P", "Lorg/orekit/gnss/ObservationType;"));
          D1S = new ObservationType(env->getStaticObjectField(cls, "D1S", "Lorg/orekit/gnss/ObservationType;"));
          D1W = new ObservationType(env->getStaticObjectField(cls, "D1W", "Lorg/orekit/gnss/ObservationType;"));
          D1X = new ObservationType(env->getStaticObjectField(cls, "D1X", "Lorg/orekit/gnss/ObservationType;"));
          D1Y = new ObservationType(env->getStaticObjectField(cls, "D1Y", "Lorg/orekit/gnss/ObservationType;"));
          D1Z = new ObservationType(env->getStaticObjectField(cls, "D1Z", "Lorg/orekit/gnss/ObservationType;"));
          D2 = new ObservationType(env->getStaticObjectField(cls, "D2", "Lorg/orekit/gnss/ObservationType;"));
          D2C = new ObservationType(env->getStaticObjectField(cls, "D2C", "Lorg/orekit/gnss/ObservationType;"));
          D2D = new ObservationType(env->getStaticObjectField(cls, "D2D", "Lorg/orekit/gnss/ObservationType;"));
          D2I = new ObservationType(env->getStaticObjectField(cls, "D2I", "Lorg/orekit/gnss/ObservationType;"));
          D2L = new ObservationType(env->getStaticObjectField(cls, "D2L", "Lorg/orekit/gnss/ObservationType;"));
          D2M = new ObservationType(env->getStaticObjectField(cls, "D2M", "Lorg/orekit/gnss/ObservationType;"));
          D2N = new ObservationType(env->getStaticObjectField(cls, "D2N", "Lorg/orekit/gnss/ObservationType;"));
          D2P = new ObservationType(env->getStaticObjectField(cls, "D2P", "Lorg/orekit/gnss/ObservationType;"));
          D2Q = new ObservationType(env->getStaticObjectField(cls, "D2Q", "Lorg/orekit/gnss/ObservationType;"));
          D2S = new ObservationType(env->getStaticObjectField(cls, "D2S", "Lorg/orekit/gnss/ObservationType;"));
          D2W = new ObservationType(env->getStaticObjectField(cls, "D2W", "Lorg/orekit/gnss/ObservationType;"));
          D2X = new ObservationType(env->getStaticObjectField(cls, "D2X", "Lorg/orekit/gnss/ObservationType;"));
          D2Y = new ObservationType(env->getStaticObjectField(cls, "D2Y", "Lorg/orekit/gnss/ObservationType;"));
          D3I = new ObservationType(env->getStaticObjectField(cls, "D3I", "Lorg/orekit/gnss/ObservationType;"));
          D3Q = new ObservationType(env->getStaticObjectField(cls, "D3Q", "Lorg/orekit/gnss/ObservationType;"));
          D3X = new ObservationType(env->getStaticObjectField(cls, "D3X", "Lorg/orekit/gnss/ObservationType;"));
          D4A = new ObservationType(env->getStaticObjectField(cls, "D4A", "Lorg/orekit/gnss/ObservationType;"));
          D4B = new ObservationType(env->getStaticObjectField(cls, "D4B", "Lorg/orekit/gnss/ObservationType;"));
          D4X = new ObservationType(env->getStaticObjectField(cls, "D4X", "Lorg/orekit/gnss/ObservationType;"));
          D5 = new ObservationType(env->getStaticObjectField(cls, "D5", "Lorg/orekit/gnss/ObservationType;"));
          D5A = new ObservationType(env->getStaticObjectField(cls, "D5A", "Lorg/orekit/gnss/ObservationType;"));
          D5B = new ObservationType(env->getStaticObjectField(cls, "D5B", "Lorg/orekit/gnss/ObservationType;"));
          D5C = new ObservationType(env->getStaticObjectField(cls, "D5C", "Lorg/orekit/gnss/ObservationType;"));
          D5D = new ObservationType(env->getStaticObjectField(cls, "D5D", "Lorg/orekit/gnss/ObservationType;"));
          D5I = new ObservationType(env->getStaticObjectField(cls, "D5I", "Lorg/orekit/gnss/ObservationType;"));
          D5P = new ObservationType(env->getStaticObjectField(cls, "D5P", "Lorg/orekit/gnss/ObservationType;"));
          D5Q = new ObservationType(env->getStaticObjectField(cls, "D5Q", "Lorg/orekit/gnss/ObservationType;"));
          D5X = new ObservationType(env->getStaticObjectField(cls, "D5X", "Lorg/orekit/gnss/ObservationType;"));
          D5Z = new ObservationType(env->getStaticObjectField(cls, "D5Z", "Lorg/orekit/gnss/ObservationType;"));
          D6 = new ObservationType(env->getStaticObjectField(cls, "D6", "Lorg/orekit/gnss/ObservationType;"));
          D6A = new ObservationType(env->getStaticObjectField(cls, "D6A", "Lorg/orekit/gnss/ObservationType;"));
          D6B = new ObservationType(env->getStaticObjectField(cls, "D6B", "Lorg/orekit/gnss/ObservationType;"));
          D6C = new ObservationType(env->getStaticObjectField(cls, "D6C", "Lorg/orekit/gnss/ObservationType;"));
          D6D = new ObservationType(env->getStaticObjectField(cls, "D6D", "Lorg/orekit/gnss/ObservationType;"));
          D6E = new ObservationType(env->getStaticObjectField(cls, "D6E", "Lorg/orekit/gnss/ObservationType;"));
          D6I = new ObservationType(env->getStaticObjectField(cls, "D6I", "Lorg/orekit/gnss/ObservationType;"));
          D6L = new ObservationType(env->getStaticObjectField(cls, "D6L", "Lorg/orekit/gnss/ObservationType;"));
          D6P = new ObservationType(env->getStaticObjectField(cls, "D6P", "Lorg/orekit/gnss/ObservationType;"));
          D6Q = new ObservationType(env->getStaticObjectField(cls, "D6Q", "Lorg/orekit/gnss/ObservationType;"));
          D6S = new ObservationType(env->getStaticObjectField(cls, "D6S", "Lorg/orekit/gnss/ObservationType;"));
          D6X = new ObservationType(env->getStaticObjectField(cls, "D6X", "Lorg/orekit/gnss/ObservationType;"));
          D6Z = new ObservationType(env->getStaticObjectField(cls, "D6Z", "Lorg/orekit/gnss/ObservationType;"));
          D7 = new ObservationType(env->getStaticObjectField(cls, "D7", "Lorg/orekit/gnss/ObservationType;"));
          D7D = new ObservationType(env->getStaticObjectField(cls, "D7D", "Lorg/orekit/gnss/ObservationType;"));
          D7I = new ObservationType(env->getStaticObjectField(cls, "D7I", "Lorg/orekit/gnss/ObservationType;"));
          D7P = new ObservationType(env->getStaticObjectField(cls, "D7P", "Lorg/orekit/gnss/ObservationType;"));
          D7Q = new ObservationType(env->getStaticObjectField(cls, "D7Q", "Lorg/orekit/gnss/ObservationType;"));
          D7X = new ObservationType(env->getStaticObjectField(cls, "D7X", "Lorg/orekit/gnss/ObservationType;"));
          D7Z = new ObservationType(env->getStaticObjectField(cls, "D7Z", "Lorg/orekit/gnss/ObservationType;"));
          D8 = new ObservationType(env->getStaticObjectField(cls, "D8", "Lorg/orekit/gnss/ObservationType;"));
          D8D = new ObservationType(env->getStaticObjectField(cls, "D8D", "Lorg/orekit/gnss/ObservationType;"));
          D8I = new ObservationType(env->getStaticObjectField(cls, "D8I", "Lorg/orekit/gnss/ObservationType;"));
          D8P = new ObservationType(env->getStaticObjectField(cls, "D8P", "Lorg/orekit/gnss/ObservationType;"));
          D8Q = new ObservationType(env->getStaticObjectField(cls, "D8Q", "Lorg/orekit/gnss/ObservationType;"));
          D8X = new ObservationType(env->getStaticObjectField(cls, "D8X", "Lorg/orekit/gnss/ObservationType;"));
          D9A = new ObservationType(env->getStaticObjectField(cls, "D9A", "Lorg/orekit/gnss/ObservationType;"));
          D9B = new ObservationType(env->getStaticObjectField(cls, "D9B", "Lorg/orekit/gnss/ObservationType;"));
          D9C = new ObservationType(env->getStaticObjectField(cls, "D9C", "Lorg/orekit/gnss/ObservationType;"));
          D9X = new ObservationType(env->getStaticObjectField(cls, "D9X", "Lorg/orekit/gnss/ObservationType;"));
          DA = new ObservationType(env->getStaticObjectField(cls, "DA", "Lorg/orekit/gnss/ObservationType;"));
          DB = new ObservationType(env->getStaticObjectField(cls, "DB", "Lorg/orekit/gnss/ObservationType;"));
          DC = new ObservationType(env->getStaticObjectField(cls, "DC", "Lorg/orekit/gnss/ObservationType;"));
          DD = new ObservationType(env->getStaticObjectField(cls, "DD", "Lorg/orekit/gnss/ObservationType;"));
          L0 = new ObservationType(env->getStaticObjectField(cls, "L0", "Lorg/orekit/gnss/ObservationType;"));
          L1 = new ObservationType(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/ObservationType;"));
          L1A = new ObservationType(env->getStaticObjectField(cls, "L1A", "Lorg/orekit/gnss/ObservationType;"));
          L1B = new ObservationType(env->getStaticObjectField(cls, "L1B", "Lorg/orekit/gnss/ObservationType;"));
          L1C = new ObservationType(env->getStaticObjectField(cls, "L1C", "Lorg/orekit/gnss/ObservationType;"));
          L1D = new ObservationType(env->getStaticObjectField(cls, "L1D", "Lorg/orekit/gnss/ObservationType;"));
          L1E = new ObservationType(env->getStaticObjectField(cls, "L1E", "Lorg/orekit/gnss/ObservationType;"));
          L1I = new ObservationType(env->getStaticObjectField(cls, "L1I", "Lorg/orekit/gnss/ObservationType;"));
          L1L = new ObservationType(env->getStaticObjectField(cls, "L1L", "Lorg/orekit/gnss/ObservationType;"));
          L1M = new ObservationType(env->getStaticObjectField(cls, "L1M", "Lorg/orekit/gnss/ObservationType;"));
          L1N = new ObservationType(env->getStaticObjectField(cls, "L1N", "Lorg/orekit/gnss/ObservationType;"));
          L1P = new ObservationType(env->getStaticObjectField(cls, "L1P", "Lorg/orekit/gnss/ObservationType;"));
          L1S = new ObservationType(env->getStaticObjectField(cls, "L1S", "Lorg/orekit/gnss/ObservationType;"));
          L1W = new ObservationType(env->getStaticObjectField(cls, "L1W", "Lorg/orekit/gnss/ObservationType;"));
          L1X = new ObservationType(env->getStaticObjectField(cls, "L1X", "Lorg/orekit/gnss/ObservationType;"));
          L1Y = new ObservationType(env->getStaticObjectField(cls, "L1Y", "Lorg/orekit/gnss/ObservationType;"));
          L1Z = new ObservationType(env->getStaticObjectField(cls, "L1Z", "Lorg/orekit/gnss/ObservationType;"));
          L2 = new ObservationType(env->getStaticObjectField(cls, "L2", "Lorg/orekit/gnss/ObservationType;"));
          L2C = new ObservationType(env->getStaticObjectField(cls, "L2C", "Lorg/orekit/gnss/ObservationType;"));
          L2D = new ObservationType(env->getStaticObjectField(cls, "L2D", "Lorg/orekit/gnss/ObservationType;"));
          L2I = new ObservationType(env->getStaticObjectField(cls, "L2I", "Lorg/orekit/gnss/ObservationType;"));
          L2L = new ObservationType(env->getStaticObjectField(cls, "L2L", "Lorg/orekit/gnss/ObservationType;"));
          L2M = new ObservationType(env->getStaticObjectField(cls, "L2M", "Lorg/orekit/gnss/ObservationType;"));
          L2N = new ObservationType(env->getStaticObjectField(cls, "L2N", "Lorg/orekit/gnss/ObservationType;"));
          L2P = new ObservationType(env->getStaticObjectField(cls, "L2P", "Lorg/orekit/gnss/ObservationType;"));
          L2Q = new ObservationType(env->getStaticObjectField(cls, "L2Q", "Lorg/orekit/gnss/ObservationType;"));
          L2S = new ObservationType(env->getStaticObjectField(cls, "L2S", "Lorg/orekit/gnss/ObservationType;"));
          L2W = new ObservationType(env->getStaticObjectField(cls, "L2W", "Lorg/orekit/gnss/ObservationType;"));
          L2X = new ObservationType(env->getStaticObjectField(cls, "L2X", "Lorg/orekit/gnss/ObservationType;"));
          L2Y = new ObservationType(env->getStaticObjectField(cls, "L2Y", "Lorg/orekit/gnss/ObservationType;"));
          L3I = new ObservationType(env->getStaticObjectField(cls, "L3I", "Lorg/orekit/gnss/ObservationType;"));
          L3Q = new ObservationType(env->getStaticObjectField(cls, "L3Q", "Lorg/orekit/gnss/ObservationType;"));
          L3X = new ObservationType(env->getStaticObjectField(cls, "L3X", "Lorg/orekit/gnss/ObservationType;"));
          L4A = new ObservationType(env->getStaticObjectField(cls, "L4A", "Lorg/orekit/gnss/ObservationType;"));
          L4B = new ObservationType(env->getStaticObjectField(cls, "L4B", "Lorg/orekit/gnss/ObservationType;"));
          L4X = new ObservationType(env->getStaticObjectField(cls, "L4X", "Lorg/orekit/gnss/ObservationType;"));
          L5 = new ObservationType(env->getStaticObjectField(cls, "L5", "Lorg/orekit/gnss/ObservationType;"));
          L5A = new ObservationType(env->getStaticObjectField(cls, "L5A", "Lorg/orekit/gnss/ObservationType;"));
          L5B = new ObservationType(env->getStaticObjectField(cls, "L5B", "Lorg/orekit/gnss/ObservationType;"));
          L5C = new ObservationType(env->getStaticObjectField(cls, "L5C", "Lorg/orekit/gnss/ObservationType;"));
          L5D = new ObservationType(env->getStaticObjectField(cls, "L5D", "Lorg/orekit/gnss/ObservationType;"));
          L5I = new ObservationType(env->getStaticObjectField(cls, "L5I", "Lorg/orekit/gnss/ObservationType;"));
          L5P = new ObservationType(env->getStaticObjectField(cls, "L5P", "Lorg/orekit/gnss/ObservationType;"));
          L5Q = new ObservationType(env->getStaticObjectField(cls, "L5Q", "Lorg/orekit/gnss/ObservationType;"));
          L5X = new ObservationType(env->getStaticObjectField(cls, "L5X", "Lorg/orekit/gnss/ObservationType;"));
          L5Z = new ObservationType(env->getStaticObjectField(cls, "L5Z", "Lorg/orekit/gnss/ObservationType;"));
          L6 = new ObservationType(env->getStaticObjectField(cls, "L6", "Lorg/orekit/gnss/ObservationType;"));
          L6A = new ObservationType(env->getStaticObjectField(cls, "L6A", "Lorg/orekit/gnss/ObservationType;"));
          L6B = new ObservationType(env->getStaticObjectField(cls, "L6B", "Lorg/orekit/gnss/ObservationType;"));
          L6C = new ObservationType(env->getStaticObjectField(cls, "L6C", "Lorg/orekit/gnss/ObservationType;"));
          L6D = new ObservationType(env->getStaticObjectField(cls, "L6D", "Lorg/orekit/gnss/ObservationType;"));
          L6E = new ObservationType(env->getStaticObjectField(cls, "L6E", "Lorg/orekit/gnss/ObservationType;"));
          L6I = new ObservationType(env->getStaticObjectField(cls, "L6I", "Lorg/orekit/gnss/ObservationType;"));
          L6L = new ObservationType(env->getStaticObjectField(cls, "L6L", "Lorg/orekit/gnss/ObservationType;"));
          L6P = new ObservationType(env->getStaticObjectField(cls, "L6P", "Lorg/orekit/gnss/ObservationType;"));
          L6Q = new ObservationType(env->getStaticObjectField(cls, "L6Q", "Lorg/orekit/gnss/ObservationType;"));
          L6S = new ObservationType(env->getStaticObjectField(cls, "L6S", "Lorg/orekit/gnss/ObservationType;"));
          L6X = new ObservationType(env->getStaticObjectField(cls, "L6X", "Lorg/orekit/gnss/ObservationType;"));
          L6Z = new ObservationType(env->getStaticObjectField(cls, "L6Z", "Lorg/orekit/gnss/ObservationType;"));
          L7 = new ObservationType(env->getStaticObjectField(cls, "L7", "Lorg/orekit/gnss/ObservationType;"));
          L7D = new ObservationType(env->getStaticObjectField(cls, "L7D", "Lorg/orekit/gnss/ObservationType;"));
          L7I = new ObservationType(env->getStaticObjectField(cls, "L7I", "Lorg/orekit/gnss/ObservationType;"));
          L7P = new ObservationType(env->getStaticObjectField(cls, "L7P", "Lorg/orekit/gnss/ObservationType;"));
          L7Q = new ObservationType(env->getStaticObjectField(cls, "L7Q", "Lorg/orekit/gnss/ObservationType;"));
          L7X = new ObservationType(env->getStaticObjectField(cls, "L7X", "Lorg/orekit/gnss/ObservationType;"));
          L7Z = new ObservationType(env->getStaticObjectField(cls, "L7Z", "Lorg/orekit/gnss/ObservationType;"));
          L8 = new ObservationType(env->getStaticObjectField(cls, "L8", "Lorg/orekit/gnss/ObservationType;"));
          L8D = new ObservationType(env->getStaticObjectField(cls, "L8D", "Lorg/orekit/gnss/ObservationType;"));
          L8I = new ObservationType(env->getStaticObjectField(cls, "L8I", "Lorg/orekit/gnss/ObservationType;"));
          L8P = new ObservationType(env->getStaticObjectField(cls, "L8P", "Lorg/orekit/gnss/ObservationType;"));
          L8Q = new ObservationType(env->getStaticObjectField(cls, "L8Q", "Lorg/orekit/gnss/ObservationType;"));
          L8X = new ObservationType(env->getStaticObjectField(cls, "L8X", "Lorg/orekit/gnss/ObservationType;"));
          L9A = new ObservationType(env->getStaticObjectField(cls, "L9A", "Lorg/orekit/gnss/ObservationType;"));
          L9B = new ObservationType(env->getStaticObjectField(cls, "L9B", "Lorg/orekit/gnss/ObservationType;"));
          L9C = new ObservationType(env->getStaticObjectField(cls, "L9C", "Lorg/orekit/gnss/ObservationType;"));
          L9X = new ObservationType(env->getStaticObjectField(cls, "L9X", "Lorg/orekit/gnss/ObservationType;"));
          LA = new ObservationType(env->getStaticObjectField(cls, "LA", "Lorg/orekit/gnss/ObservationType;"));
          LB = new ObservationType(env->getStaticObjectField(cls, "LB", "Lorg/orekit/gnss/ObservationType;"));
          LC = new ObservationType(env->getStaticObjectField(cls, "LC", "Lorg/orekit/gnss/ObservationType;"));
          LD = new ObservationType(env->getStaticObjectField(cls, "LD", "Lorg/orekit/gnss/ObservationType;"));
          P1 = new ObservationType(env->getStaticObjectField(cls, "P1", "Lorg/orekit/gnss/ObservationType;"));
          P2 = new ObservationType(env->getStaticObjectField(cls, "P2", "Lorg/orekit/gnss/ObservationType;"));
          S0 = new ObservationType(env->getStaticObjectField(cls, "S0", "Lorg/orekit/gnss/ObservationType;"));
          S1 = new ObservationType(env->getStaticObjectField(cls, "S1", "Lorg/orekit/gnss/ObservationType;"));
          S1A = new ObservationType(env->getStaticObjectField(cls, "S1A", "Lorg/orekit/gnss/ObservationType;"));
          S1B = new ObservationType(env->getStaticObjectField(cls, "S1B", "Lorg/orekit/gnss/ObservationType;"));
          S1C = new ObservationType(env->getStaticObjectField(cls, "S1C", "Lorg/orekit/gnss/ObservationType;"));
          S1D = new ObservationType(env->getStaticObjectField(cls, "S1D", "Lorg/orekit/gnss/ObservationType;"));
          S1E = new ObservationType(env->getStaticObjectField(cls, "S1E", "Lorg/orekit/gnss/ObservationType;"));
          S1I = new ObservationType(env->getStaticObjectField(cls, "S1I", "Lorg/orekit/gnss/ObservationType;"));
          S1L = new ObservationType(env->getStaticObjectField(cls, "S1L", "Lorg/orekit/gnss/ObservationType;"));
          S1M = new ObservationType(env->getStaticObjectField(cls, "S1M", "Lorg/orekit/gnss/ObservationType;"));
          S1N = new ObservationType(env->getStaticObjectField(cls, "S1N", "Lorg/orekit/gnss/ObservationType;"));
          S1P = new ObservationType(env->getStaticObjectField(cls, "S1P", "Lorg/orekit/gnss/ObservationType;"));
          S1S = new ObservationType(env->getStaticObjectField(cls, "S1S", "Lorg/orekit/gnss/ObservationType;"));
          S1W = new ObservationType(env->getStaticObjectField(cls, "S1W", "Lorg/orekit/gnss/ObservationType;"));
          S1X = new ObservationType(env->getStaticObjectField(cls, "S1X", "Lorg/orekit/gnss/ObservationType;"));
          S1Y = new ObservationType(env->getStaticObjectField(cls, "S1Y", "Lorg/orekit/gnss/ObservationType;"));
          S1Z = new ObservationType(env->getStaticObjectField(cls, "S1Z", "Lorg/orekit/gnss/ObservationType;"));
          S2 = new ObservationType(env->getStaticObjectField(cls, "S2", "Lorg/orekit/gnss/ObservationType;"));
          S2C = new ObservationType(env->getStaticObjectField(cls, "S2C", "Lorg/orekit/gnss/ObservationType;"));
          S2D = new ObservationType(env->getStaticObjectField(cls, "S2D", "Lorg/orekit/gnss/ObservationType;"));
          S2I = new ObservationType(env->getStaticObjectField(cls, "S2I", "Lorg/orekit/gnss/ObservationType;"));
          S2L = new ObservationType(env->getStaticObjectField(cls, "S2L", "Lorg/orekit/gnss/ObservationType;"));
          S2M = new ObservationType(env->getStaticObjectField(cls, "S2M", "Lorg/orekit/gnss/ObservationType;"));
          S2N = new ObservationType(env->getStaticObjectField(cls, "S2N", "Lorg/orekit/gnss/ObservationType;"));
          S2P = new ObservationType(env->getStaticObjectField(cls, "S2P", "Lorg/orekit/gnss/ObservationType;"));
          S2Q = new ObservationType(env->getStaticObjectField(cls, "S2Q", "Lorg/orekit/gnss/ObservationType;"));
          S2S = new ObservationType(env->getStaticObjectField(cls, "S2S", "Lorg/orekit/gnss/ObservationType;"));
          S2W = new ObservationType(env->getStaticObjectField(cls, "S2W", "Lorg/orekit/gnss/ObservationType;"));
          S2X = new ObservationType(env->getStaticObjectField(cls, "S2X", "Lorg/orekit/gnss/ObservationType;"));
          S2Y = new ObservationType(env->getStaticObjectField(cls, "S2Y", "Lorg/orekit/gnss/ObservationType;"));
          S3I = new ObservationType(env->getStaticObjectField(cls, "S3I", "Lorg/orekit/gnss/ObservationType;"));
          S3Q = new ObservationType(env->getStaticObjectField(cls, "S3Q", "Lorg/orekit/gnss/ObservationType;"));
          S3X = new ObservationType(env->getStaticObjectField(cls, "S3X", "Lorg/orekit/gnss/ObservationType;"));
          S4A = new ObservationType(env->getStaticObjectField(cls, "S4A", "Lorg/orekit/gnss/ObservationType;"));
          S4B = new ObservationType(env->getStaticObjectField(cls, "S4B", "Lorg/orekit/gnss/ObservationType;"));
          S4X = new ObservationType(env->getStaticObjectField(cls, "S4X", "Lorg/orekit/gnss/ObservationType;"));
          S5 = new ObservationType(env->getStaticObjectField(cls, "S5", "Lorg/orekit/gnss/ObservationType;"));
          S5A = new ObservationType(env->getStaticObjectField(cls, "S5A", "Lorg/orekit/gnss/ObservationType;"));
          S5B = new ObservationType(env->getStaticObjectField(cls, "S5B", "Lorg/orekit/gnss/ObservationType;"));
          S5C = new ObservationType(env->getStaticObjectField(cls, "S5C", "Lorg/orekit/gnss/ObservationType;"));
          S5D = new ObservationType(env->getStaticObjectField(cls, "S5D", "Lorg/orekit/gnss/ObservationType;"));
          S5I = new ObservationType(env->getStaticObjectField(cls, "S5I", "Lorg/orekit/gnss/ObservationType;"));
          S5P = new ObservationType(env->getStaticObjectField(cls, "S5P", "Lorg/orekit/gnss/ObservationType;"));
          S5Q = new ObservationType(env->getStaticObjectField(cls, "S5Q", "Lorg/orekit/gnss/ObservationType;"));
          S5X = new ObservationType(env->getStaticObjectField(cls, "S5X", "Lorg/orekit/gnss/ObservationType;"));
          S5Z = new ObservationType(env->getStaticObjectField(cls, "S5Z", "Lorg/orekit/gnss/ObservationType;"));
          S6 = new ObservationType(env->getStaticObjectField(cls, "S6", "Lorg/orekit/gnss/ObservationType;"));
          S6A = new ObservationType(env->getStaticObjectField(cls, "S6A", "Lorg/orekit/gnss/ObservationType;"));
          S6B = new ObservationType(env->getStaticObjectField(cls, "S6B", "Lorg/orekit/gnss/ObservationType;"));
          S6C = new ObservationType(env->getStaticObjectField(cls, "S6C", "Lorg/orekit/gnss/ObservationType;"));
          S6D = new ObservationType(env->getStaticObjectField(cls, "S6D", "Lorg/orekit/gnss/ObservationType;"));
          S6E = new ObservationType(env->getStaticObjectField(cls, "S6E", "Lorg/orekit/gnss/ObservationType;"));
          S6I = new ObservationType(env->getStaticObjectField(cls, "S6I", "Lorg/orekit/gnss/ObservationType;"));
          S6L = new ObservationType(env->getStaticObjectField(cls, "S6L", "Lorg/orekit/gnss/ObservationType;"));
          S6P = new ObservationType(env->getStaticObjectField(cls, "S6P", "Lorg/orekit/gnss/ObservationType;"));
          S6Q = new ObservationType(env->getStaticObjectField(cls, "S6Q", "Lorg/orekit/gnss/ObservationType;"));
          S6S = new ObservationType(env->getStaticObjectField(cls, "S6S", "Lorg/orekit/gnss/ObservationType;"));
          S6X = new ObservationType(env->getStaticObjectField(cls, "S6X", "Lorg/orekit/gnss/ObservationType;"));
          S6Z = new ObservationType(env->getStaticObjectField(cls, "S6Z", "Lorg/orekit/gnss/ObservationType;"));
          S7 = new ObservationType(env->getStaticObjectField(cls, "S7", "Lorg/orekit/gnss/ObservationType;"));
          S7D = new ObservationType(env->getStaticObjectField(cls, "S7D", "Lorg/orekit/gnss/ObservationType;"));
          S7I = new ObservationType(env->getStaticObjectField(cls, "S7I", "Lorg/orekit/gnss/ObservationType;"));
          S7P = new ObservationType(env->getStaticObjectField(cls, "S7P", "Lorg/orekit/gnss/ObservationType;"));
          S7Q = new ObservationType(env->getStaticObjectField(cls, "S7Q", "Lorg/orekit/gnss/ObservationType;"));
          S7X = new ObservationType(env->getStaticObjectField(cls, "S7X", "Lorg/orekit/gnss/ObservationType;"));
          S7Z = new ObservationType(env->getStaticObjectField(cls, "S7Z", "Lorg/orekit/gnss/ObservationType;"));
          S8 = new ObservationType(env->getStaticObjectField(cls, "S8", "Lorg/orekit/gnss/ObservationType;"));
          S8D = new ObservationType(env->getStaticObjectField(cls, "S8D", "Lorg/orekit/gnss/ObservationType;"));
          S8I = new ObservationType(env->getStaticObjectField(cls, "S8I", "Lorg/orekit/gnss/ObservationType;"));
          S8P = new ObservationType(env->getStaticObjectField(cls, "S8P", "Lorg/orekit/gnss/ObservationType;"));
          S8Q = new ObservationType(env->getStaticObjectField(cls, "S8Q", "Lorg/orekit/gnss/ObservationType;"));
          S8X = new ObservationType(env->getStaticObjectField(cls, "S8X", "Lorg/orekit/gnss/ObservationType;"));
          S9A = new ObservationType(env->getStaticObjectField(cls, "S9A", "Lorg/orekit/gnss/ObservationType;"));
          S9B = new ObservationType(env->getStaticObjectField(cls, "S9B", "Lorg/orekit/gnss/ObservationType;"));
          S9C = new ObservationType(env->getStaticObjectField(cls, "S9C", "Lorg/orekit/gnss/ObservationType;"));
          S9X = new ObservationType(env->getStaticObjectField(cls, "S9X", "Lorg/orekit/gnss/ObservationType;"));
          SA = new ObservationType(env->getStaticObjectField(cls, "SA", "Lorg/orekit/gnss/ObservationType;"));
          SB = new ObservationType(env->getStaticObjectField(cls, "SB", "Lorg/orekit/gnss/ObservationType;"));
          SC = new ObservationType(env->getStaticObjectField(cls, "SC", "Lorg/orekit/gnss/ObservationType;"));
          SD = new ObservationType(env->getStaticObjectField(cls, "SD", "Lorg/orekit/gnss/ObservationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::Frequency ObservationType::getFrequency(const ::org::orekit::gnss::SatelliteSystem & a0) const
      {
        return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getFrequency_7632034d07c17677], a0.this$));
      }

      ::org::orekit::gnss::MeasurementType ObservationType::getMeasurementType() const
      {
        return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_f61bec61c77ea492]));
      }

      ::org::orekit::gnss::SignalCode ObservationType::getSignalCode() const
      {
        return ::org::orekit::gnss::SignalCode(env->callObjectMethod(this$, mids$[mid_getSignalCode_68cb200aa67370b3]));
      }

      ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cd6cdaa419ccd4cf], a0.this$));
      }

      JArray< ObservationType > ObservationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_8082fc8067062d26]));
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
      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg);
      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self);
      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self);
      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationType_values(PyTypeObject *type);
      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
      static PyGetSetDef t_ObservationType__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationType, measurementType),
        DECLARE_GET_FIELD(t_ObservationType, signalCode),
        DECLARE_GET_FIELD(t_ObservationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationType__methods_[] = {
        DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationType, getFrequency, METH_O),
        DECLARE_METHOD(t_ObservationType, getMeasurementType, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, getSignalCode, METH_NOARGS),
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
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SD)));
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

      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::gnss::Frequency result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
        {
          OBJ_CALL(result = self->object.getFrequency(a0));
          return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrequency", arg);
        return NULL;
      }

      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self)
      {
        ::org::orekit::gnss::MeasurementType result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
      }

      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self)
      {
        ::org::orekit::gnss::SignalCode result((jobject) NULL);
        OBJ_CALL(result = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(result);
      }

      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationType::valueOf(a0));
          return t_ObservationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationType_values(PyTypeObject *type)
      {
        JArray< ObservationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationType::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
      }
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::MeasurementType value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
      }

      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::SignalCode value((jobject) NULL);
        OBJ_CALL(value = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianOrbit::class$ = NULL;
      jmethodID *KeplerianOrbit::mids$ = NULL;
      bool KeplerianOrbit::live$ = false;

      jclass KeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7c6479063e790949] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_5005ce863a640a87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_93fbea8aef52fcb9] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6687db2a115b6393] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAnomaly_20637fb12d17f9d4] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAnomalyDot_20637fb12d17f9d4] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEccentricAnomaly_557b8123390d8d0c] = env->getMethodID(cls, "getEccentricAnomaly", "()D");
          mids$[mid_getEccentricAnomalyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEccentricAnomalyDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomaly_557b8123390d8d0c] = env->getMethodID(cls, "getMeanAnomaly", "()D");
          mids$[mid_getMeanAnomalyDot_557b8123390d8d0c] = env->getMethodID(cls, "getMeanAnomalyDot", "()D");
          mids$[mid_getPerigeeArgument_557b8123390d8d0c] = env->getMethodID(cls, "getPerigeeArgument", "()D");
          mids$[mid_getPerigeeArgumentDot_557b8123390d8d0c] = env->getMethodID(cls, "getPerigeeArgumentDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_557b8123390d8d0c] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_557b8123390d8d0c] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getTrueAnomaly_557b8123390d8d0c] = env->getMethodID(cls, "getTrueAnomaly", "()D");
          mids$[mid_getTrueAnomalyDot_557b8123390d8d0c] = env->getMethodID(cls, "getTrueAnomalyDot", "()D");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_48360cd036a5e97b] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_shiftedBy_470f25348274562f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7c6479063e790949, a0.this$, a1.this$, a2)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5005ce863a640a87, a0.this$, a1.this$, a2.this$, a3)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_93fbea8aef52fcb9, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6687db2a115b6393, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void KeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_9dda16418cc4ed80], a0.this$, a1, a2.this$);
      }

      jdouble KeplerianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomaly_20637fb12d17f9d4], a0.this$);
      }

      jdouble KeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomalyDot_20637fb12d17f9d4], a0.this$);
      }

      ::org::orekit::orbits::PositionAngleType KeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      jdouble KeplerianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEccentricAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomaly_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEccentricAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomalyDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getMeanAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getMeanAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getPerigeeArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getPerigeeArgumentDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgumentDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getTrueAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomaly_557b8123390d8d0c]);
      }

      jdouble KeplerianOrbit::getTrueAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomalyDot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::OrbitType KeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean KeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      KeplerianOrbit KeplerianOrbit::removeRates() const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_48360cd036a5e97b]));
      }

      KeplerianOrbit KeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_470f25348274562f], a0));
      }

      ::java::lang::String KeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data);
      static PyGetSetDef t_KeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_KeplerianOrbit, a),
        DECLARE_GET_FIELD(t_KeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_KeplerianOrbit, e),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, i),
        DECLARE_GET_FIELD(t_KeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_KeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianOrbit)[] = {
        { Py_tp_methods, t_KeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_KeplerianOrbit_init_ },
        { Py_tp_getset, t_KeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(KeplerianOrbit, t_KeplerianOrbit, KeplerianOrbit);

      void t_KeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianOrbit), &PY_TYPE_DEF(KeplerianOrbit), module, "KeplerianOrbit", 0);
      }

      void t_KeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "class_", make_descriptor(KeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "wrapfn_", make_descriptor(t_KeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_KeplerianOrbit::wrap_Object(KeplerianOrbit(((t_KeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = KeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self)
      {
        KeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_KeplerianOrbit::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble a0;
        KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *CommonPhysicalProperties::class$ = NULL;
          jmethodID *CommonPhysicalProperties::mids$ = NULL;
          bool CommonPhysicalProperties::live$ = false;

          jclass CommonPhysicalProperties::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/CommonPhysicalProperties");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getMaxRcs_557b8123390d8d0c] = env->getMethodID(cls, "getMaxRcs", "()D");
              mids$[mid_getMinRcs_557b8123390d8d0c] = env->getMethodID(cls, "getMinRcs", "()D");
              mids$[mid_getOebAreaAlongIntermediate_557b8123390d8d0c] = env->getMethodID(cls, "getOebAreaAlongIntermediate", "()D");
              mids$[mid_getOebAreaAlongMax_557b8123390d8d0c] = env->getMethodID(cls, "getOebAreaAlongMax", "()D");
              mids$[mid_getOebAreaAlongMin_557b8123390d8d0c] = env->getMethodID(cls, "getOebAreaAlongMin", "()D");
              mids$[mid_getOebIntermediate_557b8123390d8d0c] = env->getMethodID(cls, "getOebIntermediate", "()D");
              mids$[mid_getOebMax_557b8123390d8d0c] = env->getMethodID(cls, "getOebMax", "()D");
              mids$[mid_getOebMin_557b8123390d8d0c] = env->getMethodID(cls, "getOebMin", "()D");
              mids$[mid_getOebParentFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getOebParentFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_getOebParentFrameEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getOebParentFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getOebQ_ed563d4dda2b9f62] = env->getMethodID(cls, "getOebQ", "()Lorg/hipparchus/complex/Quaternion;");
              mids$[mid_getRcs_557b8123390d8d0c] = env->getMethodID(cls, "getRcs", "()D");
              mids$[mid_getReflectance_557b8123390d8d0c] = env->getMethodID(cls, "getReflectance", "()D");
              mids$[mid_getVmAbsolute_557b8123390d8d0c] = env->getMethodID(cls, "getVmAbsolute", "()D");
              mids$[mid_getVmApparent_557b8123390d8d0c] = env->getMethodID(cls, "getVmApparent", "()D");
              mids$[mid_getVmApparentMax_557b8123390d8d0c] = env->getMethodID(cls, "getVmApparentMax", "()D");
              mids$[mid_getVmApparentMin_557b8123390d8d0c] = env->getMethodID(cls, "getVmApparentMin", "()D");
              mids$[mid_setMaxRcs_10f281d777284cea] = env->getMethodID(cls, "setMaxRcs", "(D)V");
              mids$[mid_setMinRcs_10f281d777284cea] = env->getMethodID(cls, "setMinRcs", "(D)V");
              mids$[mid_setOebAreaAlongIntermediate_10f281d777284cea] = env->getMethodID(cls, "setOebAreaAlongIntermediate", "(D)V");
              mids$[mid_setOebAreaAlongMax_10f281d777284cea] = env->getMethodID(cls, "setOebAreaAlongMax", "(D)V");
              mids$[mid_setOebAreaAlongMin_10f281d777284cea] = env->getMethodID(cls, "setOebAreaAlongMin", "(D)V");
              mids$[mid_setOebIntermediate_10f281d777284cea] = env->getMethodID(cls, "setOebIntermediate", "(D)V");
              mids$[mid_setOebMax_10f281d777284cea] = env->getMethodID(cls, "setOebMax", "(D)V");
              mids$[mid_setOebMin_10f281d777284cea] = env->getMethodID(cls, "setOebMin", "(D)V");
              mids$[mid_setOebParentFrame_f55eee1236275bb1] = env->getMethodID(cls, "setOebParentFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
              mids$[mid_setOebParentFrameEpoch_20affcbd28542333] = env->getMethodID(cls, "setOebParentFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setOebQ_89aad365fb0ed8da] = env->getMethodID(cls, "setOebQ", "(ID)V");
              mids$[mid_setRcs_10f281d777284cea] = env->getMethodID(cls, "setRcs", "(D)V");
              mids$[mid_setReflectance_10f281d777284cea] = env->getMethodID(cls, "setReflectance", "(D)V");
              mids$[mid_setVmAbsolute_10f281d777284cea] = env->getMethodID(cls, "setVmAbsolute", "(D)V");
              mids$[mid_setVmApparent_10f281d777284cea] = env->getMethodID(cls, "setVmApparent", "(D)V");
              mids$[mid_setVmApparentMax_10f281d777284cea] = env->getMethodID(cls, "setVmApparentMax", "(D)V");
              mids$[mid_setVmApparentMin_10f281d777284cea] = env->getMethodID(cls, "setVmApparentMin", "(D)V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommonPhysicalProperties::CommonPhysicalProperties() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          jdouble CommonPhysicalProperties::getMaxRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxRcs_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getMinRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinRcs_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongIntermediate_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMax_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMin_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebIntermediate_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMax_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getOebMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMin_557b8123390d8d0c]);
          }

          ::org::orekit::files::ccsds::definitions::FrameFacade CommonPhysicalProperties::getOebParentFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getOebParentFrame_98f5fcaff3e3f9d2]));
          }

          ::org::orekit::time::AbsoluteDate CommonPhysicalProperties::getOebParentFrameEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOebParentFrameEpoch_7a97f7e149e79afb]));
          }

          ::org::hipparchus::complex::Quaternion CommonPhysicalProperties::getOebQ() const
          {
            return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getOebQ_ed563d4dda2b9f62]));
          }

          jdouble CommonPhysicalProperties::getRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcs_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getReflectance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getReflectance_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getVmAbsolute() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmAbsolute_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getVmApparent() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparent_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMax_557b8123390d8d0c]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMin_557b8123390d8d0c]);
          }

          void CommonPhysicalProperties::setMaxRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxRcs_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setMinRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMinRcs_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongIntermediate_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMax_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMin_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebIntermediate_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMax_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMin_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrame_f55eee1236275bb1], a0.this$);
          }

          void CommonPhysicalProperties::setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrameEpoch_20affcbd28542333], a0.this$);
          }

          void CommonPhysicalProperties::setOebQ(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebQ_89aad365fb0ed8da], a0, a1);
          }

          void CommonPhysicalProperties::setRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRcs_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setReflectance(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReflectance_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setVmAbsolute(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmAbsolute_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setVmApparent(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparent_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setVmApparentMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMax_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::setVmApparentMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMin_10f281d777284cea], a0);
          }

          void CommonPhysicalProperties::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data);
          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyGetSetDef t_CommonPhysicalProperties__fields_[] = {
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, maxRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, minRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrame),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrameEpoch),
            DECLARE_GET_FIELD(t_CommonPhysicalProperties, oebQ),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, rcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, reflectance),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmAbsolute),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparent),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMin),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommonPhysicalProperties__methods_[] = {
            DECLARE_METHOD(t_CommonPhysicalProperties, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMaxRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMinRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrame, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrameEpoch, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebQ, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getReflectance, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmAbsolute, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparent, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMaxRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMinRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrame, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrameEpoch, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebQ, METH_VARARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setReflectance, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmAbsolute, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparent, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommonPhysicalProperties)[] = {
            { Py_tp_methods, t_CommonPhysicalProperties__methods_ },
            { Py_tp_init, (void *) t_CommonPhysicalProperties_init_ },
            { Py_tp_getset, t_CommonPhysicalProperties__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommonPhysicalProperties)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(CommonPhysicalProperties, t_CommonPhysicalProperties, CommonPhysicalProperties);

          void t_CommonPhysicalProperties::install(PyObject *module)
          {
            installType(&PY_TYPE(CommonPhysicalProperties), &PY_TYPE_DEF(CommonPhysicalProperties), module, "CommonPhysicalProperties", 0);
          }

          void t_CommonPhysicalProperties::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "class_", make_descriptor(CommonPhysicalProperties::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "wrapfn_", make_descriptor(t_CommonPhysicalProperties::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommonPhysicalProperties::initializeClass, 1)))
              return NULL;
            return t_CommonPhysicalProperties::wrap_Object(CommonPhysicalProperties(((t_CommonPhysicalProperties *) arg)->object.this$));
          }
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommonPhysicalProperties::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds)
          {
            CommonPhysicalProperties object((jobject) NULL);

            INT_CALL(object = CommonPhysicalProperties());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self)
          {
            ::org::hipparchus::complex::Quaternion result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getReflectance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparent());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMaxRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMinRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMinRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrame(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrame", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrameEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrameEpoch", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setOebQ(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebQ", args);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setReflectance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReflectance", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmAbsolute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmAbsolute", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparent(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparent", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CommonPhysicalProperties), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMaxRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMinRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "minRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrame(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrame", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrameEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrameEpoch", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::hipparchus::complex::Quaternion value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
          }

          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "rcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getReflectance());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setReflectance(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "reflectance", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmAbsolute(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmAbsolute", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparent());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparent(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparent", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMin", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999Max::class$ = NULL;
              jmethodID *Alfriend1999Max::mids$ = NULL;
              bool Alfriend1999Max::live$ = false;

              jclass Alfriend1999Max::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_computeValue_8d02ba458f22e508] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_d181e731358aa045] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999Max::Alfriend1999Max() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble Alfriend1999Max::computeValue(jdouble a0, jdouble a1, jdouble a2) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeValue_8d02ba458f22e508], a0, a1, a2);
              }

              ::org::hipparchus::CalculusFieldElement Alfriend1999Max::computeValue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeValue_d181e731358aa045], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999Max::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
              }

              jboolean Alfriend1999Max::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1]);
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
              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data);
              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data);
              static PyGetSetDef t_Alfriend1999Max__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999Max, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999Max, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999Max__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999Max, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, computeValue, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999Max)[] = {
                { Py_tp_methods, t_Alfriend1999Max__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999Max_init_ },
                { Py_tp_getset, t_Alfriend1999Max__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999Max)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999Max, t_Alfriend1999Max, Alfriend1999Max);

              void t_Alfriend1999Max::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999Max), &PY_TYPE_DEF(Alfriend1999Max), module, "Alfriend1999Max", 0);
              }

              void t_Alfriend1999Max::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "class_", make_descriptor(Alfriend1999Max::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "wrapfn_", make_descriptor(t_Alfriend1999Max::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999Max::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999Max::wrap_Object(Alfriend1999Max(((t_Alfriend1999Max *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999Max::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999Max object((jobject) NULL);

                INT_CALL(object = Alfriend1999Max());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble result;

                    if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeValue", args);
                return NULL;
              }

              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data)
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
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1c678be6043be8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_4a3e96b6f1af9d91] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getDetector_4e8fbf7207a2f82a] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_create_7b8a81f21fec5a65] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::events::FilterType & a1) : ::org::hipparchus::ode::events::AbstractODEDetector(env->newObject(initializeClass, &mids$, mid_init$_a1c678be6043be8d, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_4a3e96b6f1af9d91], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4e8fbf7207a2f82a]));
        }

        void EventSlopeFilter::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractODEDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldLine::class$ = NULL;
          jmethodID *FieldLine::mids$ = NULL;
          bool FieldLine::live$ = false;

          jclass FieldLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4c55045f6a03c721] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)V");
              mids$[mid_closestPoint_d840ee208e084141] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_contains_7a86ea6adaa11bf8] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
              mids$[mid_contains_7ccf3b3f40d5fcd3] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_e26e605b64a5a41d] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b2798c156647508e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_a22927126b45d148] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_b2798c156647508e] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_a22927126b45d148] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDirection_2d64addf4c3391d9] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getOrigin_2d64addf4c3391d9] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_d840ee208e084141] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_isSimilarTo_6be0c7436f0b164d] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Z");
              mids$[mid_pointAt_9465a023313b1d29] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pointAt_68e9ce281b70d410] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_reset_b2e28a0995250182] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_revert_713655f9399cdc2f] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLine::FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c55045f6a03c721, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::closestPoint(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_d840ee208e084141], a0.this$));
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7a86ea6adaa11bf8], a0.this$);
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7ccf3b3f40d5fcd3], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const FieldLine & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_e26e605b64a5a41d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDirection_2d64addf4c3391d9]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_2d64addf4c3391d9]));
          }

          jdouble FieldLine::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::intersection(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_intersection_d840ee208e084141], a0.this$));
          }

          jboolean FieldLine::isSimilarTo(const FieldLine & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_6be0c7436f0b164d], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_9465a023313b1d29], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_68e9ce281b70d410], a0.this$));
          }

          void FieldLine::reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_b2e28a0995250182], a0.this$, a1.this$);
          }

          FieldLine FieldLine::revert() const
          {
            return FieldLine(env->callObjectMethod(this$, mids$[mid_revert_713655f9399cdc2f]));
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
          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args);
          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getDirection(t_FieldLine *self);
          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self);
          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self);
          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_revert(t_FieldLine *self);
          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data);
          static PyGetSetDef t_FieldLine__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLine, direction),
            DECLARE_GET_FIELD(t_FieldLine, origin),
            DECLARE_GET_FIELD(t_FieldLine, tolerance),
            DECLARE_GET_FIELD(t_FieldLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLine__methods_[] = {
            DECLARE_METHOD(t_FieldLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, closestPoint, METH_O),
            DECLARE_METHOD(t_FieldLine, contains, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getAbscissa, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, intersection, METH_O),
            DECLARE_METHOD(t_FieldLine, isSimilarTo, METH_O),
            DECLARE_METHOD(t_FieldLine, pointAt, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, reset, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLine)[] = {
            { Py_tp_methods, t_FieldLine__methods_ },
            { Py_tp_init, (void *) t_FieldLine_init_ },
            { Py_tp_getset, t_FieldLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldLine, t_FieldLine, FieldLine);
          PyObject *t_FieldLine::wrap_Object(const FieldLine& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLine::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLine::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLine), &PY_TYPE_DEF(FieldLine), module, "FieldLine", 0);
          }

          void t_FieldLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "class_", make_descriptor(FieldLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "wrapfn_", make_descriptor(t_FieldLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLine::initializeClass, 1)))
              return NULL;
            return t_FieldLine::wrap_Object(FieldLine(((t_FieldLine *) arg)->object.this$));
          }
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldLine object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
            {
              INT_CALL(object = FieldLine(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "contains", args);
            return NULL;
          }

          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldLine a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getDirection(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", args);
            return NULL;
          }

          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_FieldLine_revert(t_FieldLine *self)
          {
            FieldLine result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldLine::wrap_Object(result, self->parameters[0]);
          }
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data)
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
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractFieldTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractFieldTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_79d13eb0d6af7c21] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getInterpolationDate_f1fe4daf77c66560] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getNeighborList_0d9551367f7ecdef] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getOne_613c8f46c659f636] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_613c8f46c659f636] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCentralDate_1c21077076c919e2] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableFieldTimeStampedCache AbstractFieldTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableFieldTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_79d13eb0d6af7c21]));
      }

      ::org::hipparchus::Field AbstractFieldTimeInterpolator$InterpolationData::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_f1fe4daf77c66560]));
      }

      ::java::util::List AbstractFieldTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_0d9551367f7ecdef]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getOne() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOne_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getZero() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZero_613c8f46c659f636]));
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
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, field),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, one),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, zero),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getOne, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getZero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator$InterpolationData, t_AbstractFieldTimeInterpolator$InterpolationData, AbstractFieldTimeInterpolator$InterpolationData);
      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData), module, "AbstractFieldTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(AbstractFieldTimeInterpolator$InterpolationData(((t_AbstractFieldTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_generateKeplerianOrbit_b054b91b0896a3aa] = env->getMethodID(cls, "generateKeplerianOrbit", "(Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/KeplerianOrbit;");
                mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAnomaly_557b8123390d8d0c] = env->getMethodID(cls, "getAnomaly", "()D");
                mids$[mid_getAnomalyType_f4984aee71df4c19] = env->getMethodID(cls, "getAnomalyType", "()Lorg/orekit/orbits/PositionAngleType;");
                mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getRaan_557b8123390d8d0c] = env->getMethodID(cls, "getRaan", "()D");
                mids$[mid_setA_10f281d777284cea] = env->getMethodID(cls, "setA", "(D)V");
                mids$[mid_setAnomaly_10f281d777284cea] = env->getMethodID(cls, "setAnomaly", "(D)V");
                mids$[mid_setAnomalyType_44c283653315b1a7] = env->getMethodID(cls, "setAnomalyType", "(Lorg/orekit/orbits/PositionAngleType;)V");
                mids$[mid_setE_10f281d777284cea] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setI_10f281d777284cea] = env->getMethodID(cls, "setI", "(D)V");
                mids$[mid_setMeanMotion_10f281d777284cea] = env->getMethodID(cls, "setMeanMotion", "(D)V");
                mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
                mids$[mid_setPa_10f281d777284cea] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setRaan_10f281d777284cea] = env->getMethodID(cls, "setRaan", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KeplerianElements::KeplerianElements() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::orekit::orbits::KeplerianOrbit KeplerianElements::generateKeplerianOrbit(const ::org::orekit::frames::Frame & a0) const
            {
              return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_b054b91b0896a3aa], a0.this$));
            }

            jdouble KeplerianElements::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
            }

            jdouble KeplerianElements::getAnomaly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAnomaly_557b8123390d8d0c]);
            }

            ::org::orekit::orbits::PositionAngleType KeplerianElements::getAnomalyType() const
            {
              return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getAnomalyType_f4984aee71df4c19]));
            }

            jdouble KeplerianElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate KeplerianElements::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
            }

            jdouble KeplerianElements::getI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
            }

            jdouble KeplerianElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble KeplerianElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
            }

            jdouble KeplerianElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
            }

            jdouble KeplerianElements::getRaan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRaan_557b8123390d8d0c]);
            }

            void KeplerianElements::setA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_10f281d777284cea], a0);
            }

            void KeplerianElements::setAnomaly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomaly_10f281d777284cea], a0);
            }

            void KeplerianElements::setAnomalyType(const ::org::orekit::orbits::PositionAngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomalyType_44c283653315b1a7], a0.this$);
            }

            void KeplerianElements::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_10f281d777284cea], a0);
            }

            void KeplerianElements::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
            }

            void KeplerianElements::setI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI_10f281d777284cea], a0);
            }

            void KeplerianElements::setMeanMotion(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMeanMotion_10f281d777284cea], a0);
            }

            void KeplerianElements::setMu(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMu_10f281d777284cea], a0);
            }

            void KeplerianElements::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_10f281d777284cea], a0);
            }

            void KeplerianElements::setRaan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRaan_10f281d777284cea], a0);
            }

            void KeplerianElements::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OrderedComplexEigenDecomposition::class$ = NULL;
      jmethodID *OrderedComplexEigenDecomposition::mids$ = NULL;
      bool OrderedComplexEigenDecomposition::live$ = false;

      jclass OrderedComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OrderedComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_a1e398644838b5f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_init$_2fdb4175dd8f6fbb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDDLjava/util/Comparator;)V");
          mids$[mid_getVT_1d6b27621d7bea96] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_a1e398644838b5f0, a0.this$, a1, a2, a3)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::Comparator & a4) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_2fdb4175dd8f6fbb, a0.this$, a1, a2, a3, a4.this$)) {}

      ::org::hipparchus::linear::FieldMatrix OrderedComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_1d6b27621d7bea96]));
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
      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args);
      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_OrderedComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_OrderedComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrderedComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, getVT, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrderedComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_OrderedComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_OrderedComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_OrderedComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrderedComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::ComplexEigenDecomposition),
        NULL
      };

      DEFINE_TYPE(OrderedComplexEigenDecomposition, t_OrderedComplexEigenDecomposition, OrderedComplexEigenDecomposition);

      void t_OrderedComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(OrderedComplexEigenDecomposition), &PY_TYPE_DEF(OrderedComplexEigenDecomposition), module, "OrderedComplexEigenDecomposition", 0);
      }

      void t_OrderedComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "class_", make_descriptor(OrderedComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "wrapfn_", make_descriptor(t_OrderedComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_OrderedComplexEigenDecomposition::wrap_Object(OrderedComplexEigenDecomposition(((t_OrderedComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::java::util::Comparator a4((jobject) NULL);
            PyTypeObject **p4;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDDK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3, a4));
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

      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getVT());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        return callSuper(PY_TYPE(OrderedComplexEigenDecomposition), (PyObject *) self, "getVT", args, 2);
      }

      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorBuilder::class$ = NULL;
        jmethodID *PropagatorBuilder::mids$ = NULL;
        bool PropagatorBuilder::live$ = false;

        jclass PropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_9ce0d272477ff7e1] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_7a97f7e149e79afb] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_a53a7513ecedada2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_a9af82a1647a21f3] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel PropagatorBuilder::buildLeastSquaresModel(const JArray< PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_5ad9cbd11735eecd], a0.this$));
        }

        PropagatorBuilder PropagatorBuilder::copy() const
        {
          return PropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_9ce0d272477ff7e1]));
        }

        ::org::orekit::frames::Frame PropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::time::AbsoluteDate PropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_7a97f7e149e79afb]));
        }

        jdouble PropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::OrbitType PropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_467d574a7997e53a]));
        }

        ::org::orekit::orbits::PositionAngleType PropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_467d574a7997e53a]));
        }

        JArray< jdouble > PropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_a53a7513ecedada2]));
        }

        void PropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_a9af82a1647a21f3], a0.this$);
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
        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args);
        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data);
        static PyGetSetDef t_PropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_PropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_PropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_PropagatorBuilder, buildPropagator, METH_O),
          DECLARE_METHOD(t_PropagatorBuilder, copy, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, resetOrbit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorBuilder)[] = {
          { Py_tp_methods, t_PropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorBuilder, t_PropagatorBuilder, PropagatorBuilder);

        void t_PropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorBuilder), &PY_TYPE_DEF(PropagatorBuilder), module, "PropagatorBuilder", 0);
        }

        void t_PropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "class_", make_descriptor(PropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "wrapfn_", make_descriptor(t_PropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PropagatorBuilder::wrap_Object(PropagatorBuilder(((t_PropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args)
        {
          JArray< PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildLeastSquaresModel", args);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildPropagator", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self)
        {
          PropagatorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_PropagatorBuilder::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonPVCoordinatesProvider::mids$ = NULL;
      bool PythonPVCoordinatesProvider::live$ = false;

      jclass PythonPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPVCoordinatesProvider::PythonPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonPVCoordinatesProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self);
      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPVCoordinatesProvider, t_PythonPVCoordinatesProvider, PythonPVCoordinatesProvider);

      void t_PythonPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPVCoordinatesProvider), &PY_TYPE_DEF(PythonPVCoordinatesProvider), module, "PythonPVCoordinatesProvider", 1);
      }

      void t_PythonPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "class_", make_descriptor(PythonPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonPVCoordinatesProvider::wrap_Object(PythonPVCoordinatesProvider(((t_PythonPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data)
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
#include "java/lang/Throwable.h"
#include "java/lang/Throwable.h"
#include "java/io/Serializable.h"
#include "java/lang/StackTraceElement.h"
#include "java/io/PrintWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Throwable::class$ = NULL;
    jmethodID *Throwable::mids$ = NULL;
    bool Throwable::live$ = false;

    jclass Throwable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Throwable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_addSuppressed_7d9320fd2ea36122] = env->getMethodID(cls, "addSuppressed", "(Ljava/lang/Throwable;)V");
        mids$[mid_fillInStackTrace_1541e293f3dffabf] = env->getMethodID(cls, "fillInStackTrace", "()Ljava/lang/Throwable;");
        mids$[mid_getCause_1541e293f3dffabf] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
        mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
        mids$[mid_getStackTrace_8174c106a73a6243] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getSuppressed_42a44538f3fb6b65] = env->getMethodID(cls, "getSuppressed", "()[Ljava/lang/Throwable;");
        mids$[mid_initCause_57bab603b01a2550] = env->getMethodID(cls, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
        mids$[mid_printStackTrace_0640e6acf969ed28] = env->getMethodID(cls, "printStackTrace", "()V");
        mids$[mid_printStackTrace_bbeebf9dbb580a3d] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintStream;)V");
        mids$[mid_printStackTrace_b077047c9598ae7e] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintWriter;)V");
        mids$[mid_setStackTrace_c1f85ec4ff7a3450] = env->getMethodID(cls, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Throwable::Throwable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Throwable::Throwable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Throwable::Throwable(const ::java::lang::String & a0, const Throwable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}

    void Throwable::addSuppressed(const Throwable & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addSuppressed_7d9320fd2ea36122], a0.this$);
    }

    Throwable Throwable::fillInStackTrace() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_fillInStackTrace_1541e293f3dffabf]));
    }

    Throwable Throwable::getCause() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_getCause_1541e293f3dffabf]));
    }

    ::java::lang::String Throwable::getLocalizedMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
    }

    ::java::lang::String Throwable::getMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
    }

    JArray< ::java::lang::StackTraceElement > Throwable::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_8174c106a73a6243]));
    }

    JArray< Throwable > Throwable::getSuppressed() const
    {
      return JArray< Throwable >(env->callObjectMethod(this$, mids$[mid_getSuppressed_42a44538f3fb6b65]));
    }

    Throwable Throwable::initCause(const Throwable & a0) const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_initCause_57bab603b01a2550], a0.this$));
    }

    void Throwable::printStackTrace() const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_0640e6acf969ed28]);
    }

    void Throwable::printStackTrace(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_bbeebf9dbb580a3d], a0.this$);
    }

    void Throwable::printStackTrace(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_b077047c9598ae7e], a0.this$);
    }

    void Throwable::setStackTrace(const JArray< ::java::lang::StackTraceElement > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setStackTrace_c1f85ec4ff7a3450], a0.this$);
    }

    ::java::lang::String Throwable::toString() const
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
    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getCause(t_Throwable *self);
    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self);
    static PyObject *t_Throwable_getMessage(t_Throwable *self);
    static PyObject *t_Throwable_getStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getSuppressed(t_Throwable *self);
    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data);
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data);
    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data);
    static PyGetSetDef t_Throwable__fields_[] = {
      DECLARE_GET_FIELD(t_Throwable, cause),
      DECLARE_GET_FIELD(t_Throwable, localizedMessage),
      DECLARE_GET_FIELD(t_Throwable, message),
      DECLARE_GETSET_FIELD(t_Throwable, stackTrace),
      DECLARE_GET_FIELD(t_Throwable, suppressed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Throwable__methods_[] = {
      DECLARE_METHOD(t_Throwable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, addSuppressed, METH_O),
      DECLARE_METHOD(t_Throwable, fillInStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getCause, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getLocalizedMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getSuppressed, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, initCause, METH_O),
      DECLARE_METHOD(t_Throwable, printStackTrace, METH_VARARGS),
      DECLARE_METHOD(t_Throwable, setStackTrace, METH_O),
      DECLARE_METHOD(t_Throwable, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Throwable)[] = {
      { Py_tp_methods, t_Throwable__methods_ },
      { Py_tp_init, (void *) t_Throwable_init_ },
      { Py_tp_getset, t_Throwable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Throwable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Throwable, t_Throwable, Throwable);

    void t_Throwable::install(PyObject *module)
    {
      installType(&PY_TYPE(Throwable), &PY_TYPE_DEF(Throwable), module, "Throwable", 0);
    }

    void t_Throwable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "class_", make_descriptor(Throwable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "wrapfn_", make_descriptor(t_Throwable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Throwable::initializeClass, 1)))
        return NULL;
      return t_Throwable::wrap_Object(Throwable(((t_Throwable *) arg)->object.this$));
    }
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Throwable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Throwable object((jobject) NULL);

          INT_CALL(object = Throwable());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Throwable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable a1((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "sk", Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Throwable(a0, a1));
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

    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(self->object.addSuppressed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addSuppressed", arg);
      return NULL;
    }

    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.fillInStackTrace());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getCause(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getCause());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocalizedMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getStackTrace(t_Throwable *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Throwable_getSuppressed(t_Throwable *self)
    {
      JArray< Throwable > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuppressed());
      return JArray<jobject>(result.this$).wrap(t_Throwable::wrap_jobject);
    }

    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);
      Throwable result((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.initCause(a0));
        return t_Throwable::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "initCause", arg);
      return NULL;
    }

    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.printStackTrace());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printStackTrace", args);
      return NULL;
    }

    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg)
    {
      JArray< ::java::lang::StackTraceElement > a0((jobject) NULL);

      if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setStackTrace(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setStackTrace", arg);
      return NULL;
    }

    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Throwable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data)
    {
      Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return t_Throwable::wrap_Object(value);
    }

    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocalizedMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data)
    {
      {
        JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
        if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &value))
        {
          INT_CALL(self->object.setStackTrace(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "stackTrace", arg);
      return -1;
    }

    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data)
    {
      JArray< Throwable > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuppressed());
      return JArray<jobject>(value.this$).wrap(t_Throwable::wrap_jobject);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadata::class$ = NULL;
              jmethodID *OcmMetadata::mids$ = NULL;
              bool OcmMetadata::live$ = false;
              jdouble OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH = (jdouble) 0;
              jdouble OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC = (jdouble) 0;

              jclass OcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_23625b258f7a7479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_ae3cca77cff65dd0] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getAdmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getAdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getAlternateNames_0d9551367f7ecdef] = env->getMethodID(cls, "getAlternateNames", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_3cffd47377eca18a] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getCdmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getCdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getCelestialSource_3cffd47377eca18a] = env->getMethodID(cls, "getCelestialSource", "()Ljava/lang/String;");
                  mids$[mid_getConstellation_3cffd47377eca18a] = env->getMethodID(cls, "getConstellation", "()Ljava/lang/String;");
                  mids$[mid_getCountry_3cffd47377eca18a] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
                  mids$[mid_getEopSource_3cffd47377eca18a] = env->getMethodID(cls, "getEopSource", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getInterpMethodEOP_3cffd47377eca18a] = env->getMethodID(cls, "getInterpMethodEOP", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_557b8123390d8d0c] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getNextMessageEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextMessageID_3cffd47377eca18a] = env->getMethodID(cls, "getNextMessageID", "()Ljava/lang/String;");
                  mids$[mid_getObjectDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getObjectType_510913fffa0e993d] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_getOcmDataElements_0d9551367f7ecdef] = env->getMethodID(cls, "getOcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getOperator_3cffd47377eca18a] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
                  mids$[mid_getOpsStatus_b009558e931540f6] = env->getMethodID(cls, "getOpsStatus", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_getOrbitCategory_f4b1ab49e99d867a] = env->getMethodID(cls, "getOrbitCategory", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_getOriginatorAddress_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_3cffd47377eca18a] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getOwner_3cffd47377eca18a] = env->getMethodID(cls, "getOwner", "()Ljava/lang/String;");
                  mids$[mid_getPreviousMessageEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getPreviousMessageID_3cffd47377eca18a] = env->getMethodID(cls, "getPreviousMessageID", "()Ljava/lang/String;");
                  mids$[mid_getPrmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getPrmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getRdmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getRdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getSclkOffsetAtEpoch_557b8123390d8d0c] = env->getMethodID(cls, "getSclkOffsetAtEpoch", "()D");
                  mids$[mid_getSclkSecPerSISec_557b8123390d8d0c] = env->getMethodID(cls, "getSclkSecPerSISec", "()D");
                  mids$[mid_getStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_557b8123390d8d0c] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_getTdmMessageLink_3cffd47377eca18a] = env->getMethodID(cls, "getTdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getTechAddress_3cffd47377eca18a] = env->getMethodID(cls, "getTechAddress", "()Ljava/lang/String;");
                  mids$[mid_getTechEmail_3cffd47377eca18a] = env->getMethodID(cls, "getTechEmail", "()Ljava/lang/String;");
                  mids$[mid_getTechOrg_3cffd47377eca18a] = env->getMethodID(cls, "getTechOrg", "()Ljava/lang/String;");
                  mids$[mid_getTechPOC_3cffd47377eca18a] = env->getMethodID(cls, "getTechPOC", "()Ljava/lang/String;");
                  mids$[mid_getTechPhone_3cffd47377eca18a] = env->getMethodID(cls, "getTechPhone", "()Ljava/lang/String;");
                  mids$[mid_getTechPosition_3cffd47377eca18a] = env->getMethodID(cls, "getTechPosition", "()Ljava/lang/String;");
                  mids$[mid_getTimeSpan_557b8123390d8d0c] = env->getMethodID(cls, "getTimeSpan", "()D");
                  mids$[mid_getUt1mutcT0_557b8123390d8d0c] = env->getMethodID(cls, "getUt1mutcT0", "()D");
                  mids$[mid_setAdmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setAdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setAlternateNames_4ccaedadb068bdeb] = env->getMethodID(cls, "setAlternateNames", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_f5ffdf29129ef90a] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setCdmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setCdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setCelestialSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setCelestialSource", "(Ljava/lang/String;)V");
                  mids$[mid_setConstellation_f5ffdf29129ef90a] = env->getMethodID(cls, "setConstellation", "(Ljava/lang/String;)V");
                  mids$[mid_setCountry_f5ffdf29129ef90a] = env->getMethodID(cls, "setCountry", "(Ljava/lang/String;)V");
                  mids$[mid_setEopSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setEopSource", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_20affcbd28542333] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_f5ffdf29129ef90a] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setInterpMethodEOP_f5ffdf29129ef90a] = env->getMethodID(cls, "setInterpMethodEOP", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_20affcbd28542333] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_10f281d777284cea] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setNextMessageEpoch_20affcbd28542333] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextMessageID_f5ffdf29129ef90a] = env->getMethodID(cls, "setNextMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectDesignator_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setObjectType_bdc34300f6ac541f] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                  mids$[mid_setOcmDataElements_4ccaedadb068bdeb] = env->getMethodID(cls, "setOcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setOperator_f5ffdf29129ef90a] = env->getMethodID(cls, "setOperator", "(Ljava/lang/String;)V");
                  mids$[mid_setOpsStatus_9f6cf20606cadfd3] = env->getMethodID(cls, "setOpsStatus", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;)V");
                  mids$[mid_setOrbitCategory_0041c1b8bf137b18] = env->getMethodID(cls, "setOrbitCategory", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;)V");
                  mids$[mid_setOriginatorAddress_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_f5ffdf29129ef90a] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setOwner_f5ffdf29129ef90a] = env->getMethodID(cls, "setOwner", "(Ljava/lang/String;)V");
                  mids$[mid_setPreviousMessageEpoch_20affcbd28542333] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setPreviousMessageID_f5ffdf29129ef90a] = env->getMethodID(cls, "setPreviousMessageID", "(Ljava/lang/String;)V");
                  mids$[mid_setPrmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setPrmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setRdmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setRdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setSclkOffsetAtEpoch_10f281d777284cea] = env->getMethodID(cls, "setSclkOffsetAtEpoch", "(D)V");
                  mids$[mid_setSclkSecPerSISec_10f281d777284cea] = env->getMethodID(cls, "setSclkSecPerSISec", "(D)V");
                  mids$[mid_setStartTime_20affcbd28542333] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_20affcbd28542333] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_10f281d777284cea] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_setTdmMessageLink_f5ffdf29129ef90a] = env->getMethodID(cls, "setTdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setTechAddress_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setTechEmail_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setTechOrg_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechOrg", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPOC_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPhone_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setTechPosition_f5ffdf29129ef90a] = env->getMethodID(cls, "setTechPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setTimeSpan_10f281d777284cea] = env->getMethodID(cls, "setTimeSpan", "(D)V");
                  mids$[mid_setUt1mutcT0_10f281d777284cea] = env->getMethodID(cls, "setUt1mutcT0", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCLK_OFFSET_AT_EPOCH = env->getStaticDoubleField(cls, "DEFAULT_SCLK_OFFSET_AT_EPOCH");
                  DEFAULT_SCLK_SEC_PER_SI_SEC = env->getStaticDoubleField(cls, "DEFAULT_SCLK_SEC_PER_SI_SEC");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmMetadata::OcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_23625b258f7a7479, a0.this$)) {}

              OcmMetadata OcmMetadata::copy(jdouble a0) const
              {
                return OcmMetadata(env->callObjectMethod(this$, mids$[mid_copy_ae3cca77cff65dd0], a0));
              }

              ::java::lang::String OcmMetadata::getAdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMessageLink_3cffd47377eca18a]));
              }

              ::java::util::List OcmMetadata::getAlternateNames() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlternateNames_0d9551367f7ecdef]));
              }

              ::java::lang::String OcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getCdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCdmMessageLink_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getCelestialSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCelestialSource_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getConstellation() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConstellation_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getCountry() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getEopSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEopSource_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_7a97f7e149e79afb]));
              }

              ::java::lang::String OcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getInterpMethodEOP() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodEOP_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_7a97f7e149e79afb]));
              }

              jdouble OcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getNextMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OcmMetadata::getNextMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNextMessageID_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType OcmMetadata::getObjectType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_510913fffa0e993d]));
              }

              ::java::util::List OcmMetadata::getOcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOcmDataElements_0d9551367f7ecdef]));
              }

              ::java::lang::String OcmMetadata::getOperator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus OcmMetadata::getOpsStatus() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus(env->callObjectMethod(this$, mids$[mid_getOpsStatus_b009558e931540f6]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory OcmMetadata::getOrbitCategory() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory(env->callObjectMethod(this$, mids$[mid_getOrbitCategory_f4b1ab49e99d867a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getOwner() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOwner_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getPreviousMessageEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OcmMetadata::getPreviousMessageID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageID_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getPrmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrmMessageLink_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getRdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRdmMessageLink_3cffd47377eca18a]));
              }

              jdouble OcmMetadata::getSclkOffsetAtEpoch() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkOffsetAtEpoch_557b8123390d8d0c]);
              }

              jdouble OcmMetadata::getSclkSecPerSISec() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSclkSecPerSISec_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_7a97f7e149e79afb]));
              }

              jdouble OcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_557b8123390d8d0c]);
              }

              ::java::lang::String OcmMetadata::getTdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTdmMessageLink_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechAddress_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechEmail_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechOrg() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechOrg_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPOC_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPhone_3cffd47377eca18a]));
              }

              ::java::lang::String OcmMetadata::getTechPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTechPosition_3cffd47377eca18a]));
              }

              jdouble OcmMetadata::getTimeSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSpan_557b8123390d8d0c]);
              }

              jdouble OcmMetadata::getUt1mutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getUt1mutcT0_557b8123390d8d0c]);
              }

              void OcmMetadata::setAdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAdmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setAlternateNames(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlternateNames_4ccaedadb068bdeb], a0.this$);
              }

              void OcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setCdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCdmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setCelestialSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCelestialSource_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setConstellation(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConstellation_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setCountry(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCountry_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setEopSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEopSource_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setInterpMethodEOP(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodEOP_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_10f281d777284cea], a0);
              }

              void OcmMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setNextMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextMessageID_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectType_bdc34300f6ac541f], a0.this$);
              }

              void OcmMetadata::setOcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOcmDataElements_4ccaedadb068bdeb], a0.this$);
              }

              void OcmMetadata::setOperator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOperator_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOpsStatus_9f6cf20606cadfd3], a0.this$);
              }

              void OcmMetadata::setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCategory_0041c1b8bf137b18], a0.this$);
              }

              void OcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setOwner(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOwner_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setPreviousMessageID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPreviousMessageID_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setPrmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setRdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRdmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setSclkOffsetAtEpoch(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkOffsetAtEpoch_10f281d777284cea], a0);
              }

              void OcmMetadata::setSclkSecPerSISec(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSclkSecPerSISec_10f281d777284cea], a0);
              }

              void OcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_20affcbd28542333], a0.this$);
              }

              void OcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_10f281d777284cea], a0);
              }

              void OcmMetadata::setTdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTdmMessageLink_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechAddress_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechEmail_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechOrg(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechOrg_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPOC_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPhone_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTechPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTechPosition_f5ffdf29129ef90a], a0.this$);
              }

              void OcmMetadata::setTimeSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSpan_10f281d777284cea], a0);
              }

              void OcmMetadata::setUt1mutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUt1mutcT0_10f281d777284cea], a0);
              }

              void OcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self);
              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg);
              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args);
              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data);
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OcmMetadata, admMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, alternateNames),
                DECLARE_GETSET_FIELD(t_OcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_OcmMetadata, cdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, celestialSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, constellation),
                DECLARE_GETSET_FIELD(t_OcmMetadata, country),
                DECLARE_GETSET_FIELD(t_OcmMetadata, eopSource),
                DECLARE_GETSET_FIELD(t_OcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, interpMethodEOP),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, nextMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, objectType),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ocmDataElements),
                DECLARE_GETSET_FIELD(t_OcmMetadata, operator),
                DECLARE_GETSET_FIELD(t_OcmMetadata, opsStatus),
                DECLARE_GETSET_FIELD(t_OcmMetadata, orbitCategory),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, owner),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, previousMessageID),
                DECLARE_GETSET_FIELD(t_OcmMetadata, prmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, rdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkOffsetAtEpoch),
                DECLARE_GETSET_FIELD(t_OcmMetadata, sclkSecPerSISec),
                DECLARE_GETSET_FIELD(t_OcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OcmMetadata, taimutcT0),
                DECLARE_GETSET_FIELD(t_OcmMetadata, tdmMessageLink),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techAddress),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techEmail),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techOrg),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPOC),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPhone),
                DECLARE_GETSET_FIELD(t_OcmMetadata, techPosition),
                DECLARE_GETSET_FIELD(t_OcmMetadata, timeSpan),
                DECLARE_GETSET_FIELD(t_OcmMetadata, ut1mutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadata__methods_[] = {
                DECLARE_METHOD(t_OcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadata, copy, METH_O),
                DECLARE_METHOD(t_OcmMetadata, getAdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getAlternateNames, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCelestialSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getConstellation, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getCountry, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEopSource, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getInterpMethodEOP, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getNextMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getObjectType, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOperator, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOpsStatus, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOrbitCategory, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getOwner, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPreviousMessageID, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getPrmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getRdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkOffsetAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getSclkSecPerSISec, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechAddress, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechEmail, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechOrg, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPOC, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPhone, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTechPosition, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getTimeSpan, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, getUt1mutcT0, METH_NOARGS),
                DECLARE_METHOD(t_OcmMetadata, setAdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setAlternateNames, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCelestialSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setConstellation, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setCountry, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEopSource, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setInterpMethodEOP, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setNextMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setObjectType, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOcmDataElements, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOperator, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOpsStatus, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOrbitCategory, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setOwner, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPreviousMessageID, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setPrmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setRdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkOffsetAtEpoch, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setSclkSecPerSISec, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTdmMessageLink, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechAddress, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechEmail, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechOrg, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPOC, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPhone, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTechPosition, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setTimeSpan, METH_O),
                DECLARE_METHOD(t_OcmMetadata, setUt1mutcT0, METH_O),
                DECLARE_METHOD(t_OcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadata)[] = {
                { Py_tp_methods, t_OcmMetadata__methods_ },
                { Py_tp_init, (void *) t_OcmMetadata_init_ },
                { Py_tp_getset, t_OcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
                NULL
              };

              DEFINE_TYPE(OcmMetadata, t_OcmMetadata, OcmMetadata);

              void t_OcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadata), &PY_TYPE_DEF(OcmMetadata), module, "OcmMetadata", 0);
              }

              void t_OcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "class_", make_descriptor(OcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "wrapfn_", make_descriptor(t_OcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_OFFSET_AT_EPOCH", make_descriptor(OcmMetadata::DEFAULT_SCLK_OFFSET_AT_EPOCH));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadata), "DEFAULT_SCLK_SEC_PER_SI_SEC", make_descriptor(OcmMetadata::DEFAULT_SCLK_SEC_PER_SI_SEC));
              }

              static PyObject *t_OcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadata::wrap_Object(OcmMetadata(((t_OcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmMetadata_init_(t_OcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                OcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = OcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmMetadata_copy(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;
                OcmMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_OcmMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_getAdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getAlternateNames(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OcmMetadata_getCatalogName(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCelestialSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getConstellation(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getConstellation());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getCountry(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCountry());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEopSource(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getEopSource());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getEpochT0(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getInternationalDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getInterpMethodEOP(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodEOP());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextLeapTaimutc(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getNextMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getNextMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectDesignator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getObjectType(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOcmDataElements(t_OcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmElements));
              }

              static PyObject *t_OcmMetadata_getOperator(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOperator());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOpsStatus(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus result((jobject) NULL);
                OBJ_CALL(result = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOrbitCategory(t_OcmMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOriginatorPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getOwner(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOwner());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageEpoch(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getPreviousMessageID(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPreviousMessageID());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getPrmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getRdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getRdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getSclkOffsetAtEpoch(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getSclkSecPerSISec(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getStartTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getStopTime(t_OcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmMetadata_getTaimutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getTdmMessageLink(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechAddress(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechAddress());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechEmail(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechEmail());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechOrg(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechOrg());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPOC(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPOC());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPhone(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPhone());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTechPosition(t_OcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTechPosition());
                return j2p(result);
              }

              static PyObject *t_OcmMetadata_getTimeSpan(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_getUt1mutcT0(t_OcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmMetadata_setAdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setAlternateNames(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAlternateNames(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlternateNames", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCatalogName(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setCdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCelestialSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCelestialSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCelestialSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setConstellation(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setConstellation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConstellation", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setCountry(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCountry(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCountry", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEopSource(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setEopSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEopSource", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setEpochT0(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setInternationalDesignator(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setInterpMethodEOP(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodEOP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodEOP", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextLeapEpoch(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setNextLeapTaimutc(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setNextMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setNextMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setNextMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setObjectDesignator(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setObjectType(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
                {
                  OBJ_CALL(self->object.setObjectType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOcmDataElements(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setOcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOperator(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOperator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOperator", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOpsStatus(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::parameters_))
                {
                  OBJ_CALL(self->object.setOpsStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOpsStatus", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOrbitCategory(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::parameters_))
                {
                  OBJ_CALL(self->object.setOrbitCategory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCategory", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setOriginatorAddress(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOriginatorEmail(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOriginatorPOC(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOriginatorPhone(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOriginatorPosition(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setOwner(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOwner(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOwner", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPreviousMessageID(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPreviousMessageID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPreviousMessageID", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setPrmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setRdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setRdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkOffsetAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkOffsetAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setSclkSecPerSISec(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSclkSecPerSISec(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSclkSecPerSISec", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setStartTime(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setStopTime(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setTaimutcT0(t_OcmMetadata *self, PyObject *arg)
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

              static PyObject *t_OcmMetadata_setTdmMessageLink(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechAddress(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechAddress", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechEmail(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechEmail", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechOrg(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechOrg(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechOrg", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPOC(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPOC", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPhone(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPhone", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTechPosition(t_OcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTechPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTechPosition", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setTimeSpan(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSpan", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_setUt1mutcT0(t_OcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setUt1mutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUt1mutcT0", arg);
                return NULL;
              }

              static PyObject *t_OcmMetadata_validate(t_OcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OcmMetadata_get__admMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__admMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "admMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__alternateNames(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlternateNames());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__alternateNames(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAlternateNames(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "alternateNames", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__catalogName(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_OcmMetadata_set__catalogName(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__cdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__cdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__celestialSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCelestialSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__celestialSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCelestialSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "celestialSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__constellation(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getConstellation());
                return j2p(value);
              }
              static int t_OcmMetadata_set__constellation(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setConstellation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "constellation", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__country(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCountry());
                return j2p(value);
              }
              static int t_OcmMetadata_set__country(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCountry(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "country", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__eopSource(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getEopSource());
                return j2p(value);
              }
              static int t_OcmMetadata_set__eopSource(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setEopSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eopSource", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__epochT0(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__epochT0(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__internationalDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__internationalDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__interpMethodEOP(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodEOP());
                return j2p(value);
              }
              static int t_OcmMetadata_set__interpMethodEOP(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodEOP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodEOP", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextLeapEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextLeapEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__nextLeapTaimutc(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__nextLeapTaimutc(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__nextMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__nextMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__nextMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__nextMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setNextMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__objectDesignator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__objectDesignator(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__objectType(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
              }
              static int t_OcmMetadata_set__objectType(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setObjectType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectType", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__ocmDataElements(t_OcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getOcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OcmMetadata_set__ocmDataElements(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ocmDataElements", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__operator(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOperator());
                return j2p(value);
              }
              static int t_OcmMetadata_set__operator(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOperator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "operator", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__opsStatus(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                OBJ_CALL(value = self->object.getOpsStatus());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OpsStatus::wrap_Object(value);
              }
              static int t_OcmMetadata_set__opsStatus(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOpsStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "opsStatus", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__orbitCategory(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCategory());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCategory::wrap_Object(value);
              }
              static int t_OcmMetadata_set__orbitCategory(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCategory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCategory", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__originatorAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorAddress(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__originatorEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorEmail(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__originatorPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPOC(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__originatorPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPhone(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__originatorPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__originatorPosition(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__owner(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOwner());
                return j2p(value);
              }
              static int t_OcmMetadata_set__owner(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOwner(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "owner", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageEpoch(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__previousMessageEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setPreviousMessageEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__previousMessageID(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPreviousMessageID());
                return j2p(value);
              }
              static int t_OcmMetadata_set__previousMessageID(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPreviousMessageID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "previousMessageID", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__prmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__prmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__rdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getRdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__rdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setRdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkOffsetAtEpoch(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkOffsetAtEpoch());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkOffsetAtEpoch(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkOffsetAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkOffsetAtEpoch", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__sclkSecPerSISec(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSclkSecPerSISec());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__sclkSecPerSISec(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSclkSecPerSISec(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sclkSecPerSISec", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__startTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__startTime(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__stopTime(t_OcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OcmMetadata_set__stopTime(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__taimutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__taimutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OcmMetadata_get__tdmMessageLink(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTdmMessageLink());
                return j2p(value);
              }
              static int t_OcmMetadata_set__tdmMessageLink(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tdmMessageLink", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techAddress(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechAddress());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techAddress(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techAddress", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techEmail(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechEmail());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techEmail(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techEmail", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techOrg(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechOrg());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techOrg(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechOrg(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techOrg", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPOC(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPOC());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPOC(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPOC", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPhone(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPhone());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPhone(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPhone", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__techPosition(t_OcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTechPosition());
                return j2p(value);
              }
              static int t_OcmMetadata_set__techPosition(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTechPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "techPosition", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__timeSpan(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__timeSpan(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSpan", arg);
                return -1;
              }

              static PyObject *t_OcmMetadata_get__ut1mutcT0(t_OcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getUt1mutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OcmMetadata_set__ut1mutcT0(t_OcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setUt1mutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ut1mutcT0", arg);
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
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
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
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_writeEphemerisLine_72ab8dadb04e6687] = env->getMethodID(cls, "writeEphemerisLine", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StreamingCpfWriter$Segment::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
        }

        void StreamingCpfWriter$Segment::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_8655761ebf04b503], a0.this$);
        }

        void StreamingCpfWriter$Segment::writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_writeEphemerisLine_72ab8dadb04e6687], a0.this$);
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
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorChangingVisitor::class$ = NULL;
      jmethodID *FieldVectorChangingVisitor::mids$ = NULL;
      bool FieldVectorChangingVisitor::live$ = false;

      jclass FieldVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_3796b665437eba81] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_06c2173622ecd7b1] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void FieldVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_3796b665437eba81], a0, a1, a2);
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_06c2173622ecd7b1], a0, a1.this$));
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
      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self);
      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorChangingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorChangingVisitor, t_FieldVectorChangingVisitor, FieldVectorChangingVisitor);
      PyObject *t_FieldVectorChangingVisitor::wrap_Object(const FieldVectorChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorChangingVisitor), &PY_TYPE_DEF(FieldVectorChangingVisitor), module, "FieldVectorChangingVisitor", 0);
      }

      void t_FieldVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "class_", make_descriptor(FieldVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "wrapfn_", make_descriptor(t_FieldVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorChangingVisitor::wrap_Object(FieldVectorChangingVisitor(((t_FieldVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args)
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

      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeExtremumDetector::class$ = NULL;
        jmethodID *LatitudeExtremumDetector::mids$ = NULL;
        bool LatitudeExtremumDetector::live$ = false;

        jclass LatitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fee9aa8bf77f755f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_9c6b45b00f88cd51] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_f166528db337c659] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_a5ae8afde810b907] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeExtremumDetector::LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fee9aa8bf77f755f, a0.this$)) {}

        LatitudeExtremumDetector::LatitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9c6b45b00f88cd51, a0, a1, a2.this$)) {}

        jdouble LatitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LatitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_f166528db337c659]));
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
        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args);
        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self);
        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data);
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LatitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LatitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LatitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeExtremumDetector, t_LatitudeExtremumDetector, LatitudeExtremumDetector);
        PyObject *t_LatitudeExtremumDetector::wrap_Object(const LatitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeExtremumDetector), &PY_TYPE_DEF(LatitudeExtremumDetector), module, "LatitudeExtremumDetector", 0);
        }

        void t_LatitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "class_", make_descriptor(LatitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "wrapfn_", make_descriptor(t_LatitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeExtremumDetector::wrap_Object(LatitudeExtremumDetector(((t_LatitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
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

        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractCycleSlipDetector::class$ = NULL;
          jmethodID *PythonAbstractCycleSlipDetector::mids$ = NULL;
          bool PythonAbstractCycleSlipDetector::live$ = false;

          jclass PythonAbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cycleSlipDataSet_7660552c05323b39] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getMaxTimeBeetween2Measurement_557b8123390d8d0c] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getResults_0d9551367f7ecdef] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_manageData_7cae3eafa8e6978c] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_setName_3232b7e9138747dc] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void PythonAbstractCycleSlipDetector::cycleSlipDataSet(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::gnss::Frequency & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_cycleSlipDataSet_7660552c05323b39], a0.this$, a1.this$, a2, a3.this$);
          }

          void PythonAbstractCycleSlipDetector::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jdouble PythonAbstractCycleSlipDetector::getMaxTimeBeetween2Measurement() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxTimeBeetween2Measurement_557b8123390d8d0c]);
          }

          jint PythonAbstractCycleSlipDetector::getMinMeasurementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getMinMeasurementNumber_412668abc8d889e9]);
          }

          ::java::util::List PythonAbstractCycleSlipDetector::getResults() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getResults_0d9551367f7ecdef]));
          }

          jlong PythonAbstractCycleSlipDetector::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractCycleSlipDetector::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }

          ::java::lang::String PythonAbstractCycleSlipDetector::setName(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_setName_3232b7e9138747dc], a0, a1.this$));
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
          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyGetSetDef t_PythonAbstractCycleSlipDetector__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, maxTimeBeetween2Measurement),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, minMeasurementNumber),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, results),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cycleSlipDataSet, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMaxTimeBeetween2Measurement, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMinMeasurementNumber, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getResults, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, setName, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_PythonAbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PythonAbstractCycleSlipDetector__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PythonAbstractCycleSlipDetector, t_PythonAbstractCycleSlipDetector, PythonAbstractCycleSlipDetector);

          void t_PythonAbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractCycleSlipDetector), &PY_TYPE_DEF(PythonAbstractCycleSlipDetector), module, "PythonAbstractCycleSlipDetector", 1);
          }

          void t_PythonAbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "class_", make_descriptor(PythonAbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_PythonAbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractCycleSlipDetector::initializeClass);
            JNINativeMethod methods[] = {
              { "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V", (void *) t_PythonAbstractCycleSlipDetector_manageData0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractCycleSlipDetector_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractCycleSlipDetector::wrap_Object(PythonAbstractCycleSlipDetector(((t_PythonAbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::gnss::Frequency a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "skDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::Frequency::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.cycleSlipDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "cycleSlipDataSet", args);
            return NULL;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getResults());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.setName(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setName", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "manageData", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getResults());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationData::class$ = NULL;
          jmethodID *CombinedObservationData::mids$ = NULL;
          bool CombinedObservationData::live$ = false;

          jclass CombinedObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e33a53c7689ac28c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/MeasurementType;DDLjava/util/List;)V");
              mids$[mid_getCombinationType_ad3ea7f7acc4745a] = env->getMethodID(cls, "getCombinationType", "()Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_getCombinedMHzFrequency_557b8123390d8d0c] = env->getMethodID(cls, "getCombinedMHzFrequency", "()D");
              mids$[mid_getMeasurementType_f61bec61c77ea492] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
              mids$[mid_getUsedObservationData_0d9551367f7ecdef] = env->getMethodID(cls, "getUsedObservationData", "()Ljava/util/List;");
              mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationData::CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::MeasurementType & a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e33a53c7689ac28c, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::gnss::CombinationType CombinedObservationData::getCombinationType() const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinationType(env->callObjectMethod(this$, mids$[mid_getCombinationType_ad3ea7f7acc4745a]));
          }

          jdouble CombinedObservationData::getCombinedMHzFrequency() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCombinedMHzFrequency_557b8123390d8d0c]);
          }

          ::org::orekit::gnss::MeasurementType CombinedObservationData::getMeasurementType() const
          {
            return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_f61bec61c77ea492]));
          }

          ::java::util::List CombinedObservationData::getUsedObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUsedObservationData_0d9551367f7ecdef]));
          }

          jdouble CombinedObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
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
          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data);
          static PyGetSetDef t_CombinedObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationData, combinationType),
            DECLARE_GET_FIELD(t_CombinedObservationData, combinedMHzFrequency),
            DECLARE_GET_FIELD(t_CombinedObservationData, measurementType),
            DECLARE_GET_FIELD(t_CombinedObservationData, usedObservationData),
            DECLARE_GET_FIELD(t_CombinedObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationData__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinationType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinedMHzFrequency, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getMeasurementType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getUsedObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationData)[] = {
            { Py_tp_methods, t_CombinedObservationData__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationData_init_ },
            { Py_tp_getset, t_CombinedObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationData, t_CombinedObservationData, CombinedObservationData);

          void t_CombinedObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationData), &PY_TYPE_DEF(CombinedObservationData), module, "CombinedObservationData", 0);
          }

          void t_CombinedObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "class_", make_descriptor(CombinedObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "wrapfn_", make_descriptor(t_CombinedObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationData::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationData::wrap_Object(CombinedObservationData(((t_CombinedObservationData *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::MeasurementType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationData object((jobject) NULL);

            if (!parseArgs(args, "KKDDK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_MeasurementType::parameters_, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationData(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self)
          {
            ::org::orekit::gnss::MeasurementType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::gnss::MeasurementType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeVectorFunction::class$ = NULL;
      jmethodID *TimeVectorFunction::mids$ = NULL;
      bool TimeVectorFunction::live$ = false;

      jclass TimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_89e8b78e4211e023] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_f77452810420dd04] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > TimeVectorFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_89e8b78e4211e023], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > TimeVectorFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_f77452810420dd04], a0.this$));
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
      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args);

      static PyMethodDef t_TimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_TimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeVectorFunction)[] = {
        { Py_tp_methods, t_TimeVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeVectorFunction, t_TimeVectorFunction, TimeVectorFunction);

      void t_TimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeVectorFunction), &PY_TYPE_DEF(TimeVectorFunction), module, "TimeVectorFunction", 0);
      }

      void t_TimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "class_", make_descriptor(TimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "wrapfn_", make_descriptor(t_TimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_TimeVectorFunction::wrap_Object(TimeVectorFunction(((t_TimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Utils.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Utils::class$ = NULL;
        jmethodID *SP3Utils::mids$ = NULL;
        bool SP3Utils::live$ = false;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_UNIT = NULL;
        jdouble SP3Utils::DEFAULT_CLOCK_RATE_VALUE = (jdouble) 0;
        jdouble SP3Utils::DEFAULT_CLOCK_VALUE = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_UNIT = NULL;
        jdouble SP3Utils::POS_VEL_BASE_ACCURACY = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_UNIT = NULL;

        jclass SP3Utils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Utils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_indexAccuracy_f6d42204526fd863] = env->getStaticMethodID(cls, "indexAccuracy", "(Lorg/orekit/utils/units/Unit;DD)I");
            mids$[mid_siAccuracy_7ba5056cf424cd00] = env->getStaticMethodID(cls, "siAccuracy", "(Lorg/orekit/utils/units/Unit;DI)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_UNIT", "Lorg/orekit/utils/units/Unit;"));
            DEFAULT_CLOCK_RATE_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_RATE_VALUE");
            DEFAULT_CLOCK_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_VALUE");
            POSITION_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POSITION_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POS_VEL_BASE_ACCURACY = env->getStaticDoubleField(cls, "POS_VEL_BASE_ACCURACY");
            VELOCITY_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VELOCITY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint SP3Utils::indexAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticIntMethod(cls, mids$[mid_indexAccuracy_f6d42204526fd863], a0.this$, a1, a2);
        }

        jdouble SP3Utils::siAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_siAccuracy_7ba5056cf424cd00], a0.this$, a1, a2);
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
        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_SP3Utils__methods_[] = {
          DECLARE_METHOD(t_SP3Utils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, indexAccuracy, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, siAccuracy, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Utils)[] = {
          { Py_tp_methods, t_SP3Utils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Utils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Utils, t_SP3Utils, SP3Utils);

        void t_SP3Utils::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Utils), &PY_TYPE_DEF(SP3Utils), module, "SP3Utils", 0);
        }

        void t_SP3Utils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "class_", make_descriptor(SP3Utils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "wrapfn_", make_descriptor(t_SP3Utils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Utils::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_RATE_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_RATE_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POS_VEL_BASE_ACCURACY", make_descriptor(SP3Utils::POS_VEL_BASE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_UNIT)));
        }

        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Utils::initializeClass, 1)))
            return NULL;
          return t_SP3Utils::wrap_Object(SP3Utils(((t_SP3Utils *) arg)->object.this$));
        }
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Utils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint result;

          if (!parseArgs(args, "kDD", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::indexAccuracy(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError(type, "indexAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "kDI", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::siAccuracy(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "siAccuracy", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularTroposphericDelayModifier::class$ = NULL;
          jmethodID *AngularTroposphericDelayModifier::mids$ = NULL;
          bool AngularTroposphericDelayModifier::live$ = false;

          jclass AngularTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularTroposphericDelayModifier::AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          ::java::util::List AngularTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void AngularTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self);
          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularTroposphericDelayModifier, t_AngularTroposphericDelayModifier, AngularTroposphericDelayModifier);

          void t_AngularTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularTroposphericDelayModifier), &PY_TYPE_DEF(AngularTroposphericDelayModifier), module, "AngularTroposphericDelayModifier", 0);
          }

          void t_AngularTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "class_", make_descriptor(AngularTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "wrapfn_", make_descriptor(t_AngularTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularTroposphericDelayModifier::wrap_Object(AngularTroposphericDelayModifier(((t_AngularTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            AngularTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeCrossingDetector::class$ = NULL;
        jmethodID *LatitudeCrossingDetector::mids$ = NULL;
        bool LatitudeCrossingDetector::live$ = false;

        jclass LatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cee3325573481ef4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_732c94d692efbcdf] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_e988773803ca1687] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeCrossingDetector::LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cee3325573481ef4, a0.this$, a1)) {}

        LatitudeCrossingDetector::LatitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_732c94d692efbcdf, a0, a1, a2.this$, a3)) {}

        jdouble LatitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
        }

        jdouble LatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_557b8123390d8d0c]);
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
        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args);
        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeCrossingDetector, t_LatitudeCrossingDetector, LatitudeCrossingDetector);
        PyObject *t_LatitudeCrossingDetector::wrap_Object(const LatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeCrossingDetector), &PY_TYPE_DEF(LatitudeCrossingDetector), module, "LatitudeCrossingDetector", 0);
        }

        void t_LatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "class_", make_descriptor(LatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "wrapfn_", make_descriptor(t_LatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeCrossingDetector::wrap_Object(LatitudeCrossingDetector(((t_LatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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

        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$RawPVProvider::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$RawPVProvider::mids$ = NULL;
      bool JPLEphemeridesLoader$RawPVProvider::live$ = false;

      jclass JPLEphemeridesLoader$RawPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawPV_f00f0e7ea285c370] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getRawPV_47281698929ef375] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getRawPosition_3df461fe15362b2b] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRawPosition_3343973a86caeaa4] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_f00f0e7ea285c370], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_47281698929ef375], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_3df461fe15362b2b], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_3343973a86caeaa4], a0.this$));
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
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);

      static PyMethodDef t_JPLEphemeridesLoader$RawPVProvider__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPV, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$RawPVProvider)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$RawPVProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$RawPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$RawPVProvider, t_JPLEphemeridesLoader$RawPVProvider, JPLEphemeridesLoader$RawPVProvider);

      void t_JPLEphemeridesLoader$RawPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$RawPVProvider), &PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider), module, "JPLEphemeridesLoader$RawPVProvider", 0);
      }

      void t_JPLEphemeridesLoader$RawPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "class_", make_descriptor(JPLEphemeridesLoader$RawPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$RawPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$RawPVProvider::wrap_Object(JPLEphemeridesLoader$RawPVProvider(((t_JPLEphemeridesLoader$RawPVProvider *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPV", args);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AbstractConvexHullGenerator2D::class$ = NULL;
            jmethodID *AbstractConvexHullGenerator2D::mids$ = NULL;
            bool AbstractConvexHullGenerator2D::live$ = false;

            jclass AbstractConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_b7d73bd07a9bc56d] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");
                mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
                mids$[mid_isIncludeCollinearPoints_89b302893bdbe1f1] = env->getMethodID(cls, "isIncludeCollinearPoints", "()Z");
                mids$[mid_findHullVertices_6472a4633751d554] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D AbstractConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_b7d73bd07a9bc56d], a0.this$));
            }

            jdouble AbstractConvexHullGenerator2D::getTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
            }

            jboolean AbstractConvexHullGenerator2D::isIncludeCollinearPoints() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isIncludeCollinearPoints_89b302893bdbe1f1]);
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyGetSetDef t_AbstractConvexHullGenerator2D__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, includeCollinearPoints),
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, tolerance),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, generate, METH_O),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, getTolerance, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, isIncludeCollinearPoints, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_AbstractConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConvexHullGenerator2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractConvexHullGenerator2D, t_AbstractConvexHullGenerator2D, AbstractConvexHullGenerator2D);

            void t_AbstractConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConvexHullGenerator2D), &PY_TYPE_DEF(AbstractConvexHullGenerator2D), module, "AbstractConvexHullGenerator2D", 0);
            }

            void t_AbstractConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "class_", make_descriptor(AbstractConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "wrapfn_", make_descriptor(t_AbstractConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_AbstractConvexHullGenerator2D::wrap_Object(AbstractConvexHullGenerator2D(((t_AbstractConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generate", arg);
              return NULL;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data)
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
}
