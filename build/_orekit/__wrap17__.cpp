#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue$Event::class$ = NULL;
          jmethodID *RecordAndContinue$Event::mids$ = NULL;
          bool RecordAndContinue$Event::live$ = false;

          jclass RecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_ebd847a60689999d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
              mids$[mid_getState_8fbfa58855031235] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_isIncreasing_eee3de00fe971136] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::EventDetector RecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ebd847a60689999d]));
          }

          ::org::orekit::propagation::SpacecraftState RecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_8fbfa58855031235]));
          }

          jboolean RecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_eee3de00fe971136]);
          }

          ::java::lang::String RecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_RecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, state),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue$Event)[] = {
            { Py_tp_methods, t_RecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue$Event, t_RecordAndContinue$Event, RecordAndContinue$Event);

          void t_RecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue$Event), &PY_TYPE_DEF(RecordAndContinue$Event), module, "RecordAndContinue$Event", 0);
          }

          void t_RecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "class_", make_descriptor(RecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "wrapfn_", make_descriptor(t_RecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue$Event::wrap_Object(RecordAndContinue$Event(((t_RecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedPCVS::class$ = NULL;
        jmethodID *AppliedPCVS::mids$ = NULL;
        bool AppliedPCVS::live$ = false;

        jclass AppliedPCVS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedPCVS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa93d9a85da578d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgPCVS_d2c8eb4129821f0e] = env->getMethodID(cls, "getProgPCVS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourcePCVS_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourcePCVS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedPCVS::AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa93d9a85da578d5, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedPCVS::getProgPCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgPCVS_d2c8eb4129821f0e]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedPCVS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
        }

        ::java::lang::String AppliedPCVS::getSourcePCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourcePCVS_d2c8eb4129821f0e]));
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
        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data);
        static PyGetSetDef t_AppliedPCVS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedPCVS, progPCVS),
          DECLARE_GET_FIELD(t_AppliedPCVS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedPCVS, sourcePCVS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedPCVS__methods_[] = {
          DECLARE_METHOD(t_AppliedPCVS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, getProgPCVS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSourcePCVS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedPCVS)[] = {
          { Py_tp_methods, t_AppliedPCVS__methods_ },
          { Py_tp_init, (void *) t_AppliedPCVS_init_ },
          { Py_tp_getset, t_AppliedPCVS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedPCVS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedPCVS, t_AppliedPCVS, AppliedPCVS);

        void t_AppliedPCVS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedPCVS), &PY_TYPE_DEF(AppliedPCVS), module, "AppliedPCVS", 0);
        }

        void t_AppliedPCVS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "class_", make_descriptor(AppliedPCVS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "wrapfn_", make_descriptor(t_AppliedPCVS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedPCVS::initializeClass, 1)))
            return NULL;
          return t_AppliedPCVS::wrap_Object(AppliedPCVS(((t_AppliedPCVS *) arg)->object.this$));
        }
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedPCVS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedPCVS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedPCVS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgPCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourcePCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgPCVS());
          return j2p(value);
        }

        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourcePCVS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase$Status::class$ = NULL;
        jmethodID *EstimatedMeasurementBase$Status::mids$ = NULL;
        bool EstimatedMeasurementBase$Status::live$ = false;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::PROCESSED = NULL;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::REJECTED = NULL;

        jclass EstimatedMeasurementBase$Status::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase$Status");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_c7251c8717dc84bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_values_a0abe770f275def8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PROCESSED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "PROCESSED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            REJECTED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "REJECTED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase$Status EstimatedMeasurementBase$Status::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EstimatedMeasurementBase$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c7251c8717dc84bc], a0.this$));
        }

        JArray< EstimatedMeasurementBase$Status > EstimatedMeasurementBase$Status::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EstimatedMeasurementBase$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_a0abe770f275def8]));
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
        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type);
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase$Status__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase$Status, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase$Status__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase$Status)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase$Status__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimatedMeasurementBase$Status__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase$Status)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase$Status, t_EstimatedMeasurementBase$Status, EstimatedMeasurementBase$Status);
        PyObject *t_EstimatedMeasurementBase$Status::wrap_Object(const EstimatedMeasurementBase$Status& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase$Status::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase$Status), &PY_TYPE_DEF(EstimatedMeasurementBase$Status), module, "EstimatedMeasurementBase$Status", 0);
        }

        void t_EstimatedMeasurementBase$Status::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "class_", make_descriptor(EstimatedMeasurementBase$Status::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedMeasurementBase$Status::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "PROCESSED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::PROCESSED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "REJECTED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::REJECTED)));
        }

        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase$Status::wrap_Object(EstimatedMeasurementBase$Status(((t_EstimatedMeasurementBase$Status *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EstimatedMeasurementBase$Status result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::valueOf(a0));
            return t_EstimatedMeasurementBase$Status::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type)
        {
          JArray< EstimatedMeasurementBase$Status > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::values());
          return JArray<jobject>(result.this$).wrap(t_EstimatedMeasurementBase$Status::wrap_jobject);
        }
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinates::class$ = NULL;
      jmethodID *FieldPVCoordinates::mids$ = NULL;
      bool FieldPVCoordinates::live$ = false;

      jclass FieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1344cdbf3f0498af] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_45d220651e48f081] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_9eb1493b94e6a981] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_47164bb8c8ecc825] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a8a1b054e88c8ec4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_9a097f6b1f51eb0d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_9ef45704d38d42b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c44724ef5fc47f15] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_5362353bb80d573f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_bb6fd142d08cc8a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_221411688a1f30a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_3e23a780d70a9499] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_5aaeea0d9dd59987] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_72fc4b6b13fab078] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c2436c086842bb0d] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_03d19cf6bcbd31dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_fade8cfc0be6514d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_a2af71d3a8247277] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_crossProduct_1bd1ef8a7bbb7399] = env->getMethodID(cls, "crossProduct", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_estimateVelocity_7f41566731f83459] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAcceleration_d1b42a6748e907f9] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngularVelocity_d1b42a6748e907f9] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getMomentum_d1b42a6748e907f9] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_d1b42a6748e907f9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_d1b42a6748e907f9] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZero_aab2b71a889b2b8a] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_negate_345fc9bafd1687ff] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_normalize_345fc9bafd1687ff] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_positionShiftedBy_c2b058e1eb7a8988] = env->getMethodID(cls, "positionShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_7c72f45dd6c2303a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_shiftedBy_7e165dafecad92c1] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructurePV_608e82d3b6abf5f8] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_bd593b3379529ee5] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toPVCoordinates_78e01095d7eced90] = env->getMethodID(cls, "toPVCoordinates", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_345fc9bafd1687ff] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_d1b42a6748e907f9] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_345fc9bafd1687ff] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_d1b42a6748e907f9] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1344cdbf3f0498af, a0.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45d220651e48f081, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const FieldPVCoordinates & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9eb1493b94e6a981, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47164bb8c8ecc825, a0, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8a1b054e88c8ec4, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a097f6b1f51eb0d, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ef45704d38d42b3, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c44724ef5fc47f15, a0.this$, a1.this$, a2.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5362353bb80d573f, a0, a1.this$, a2, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb6fd142d08cc8a8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_221411688a1f30a8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e23a780d70a9499, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5aaeea0d9dd59987, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72fc4b6b13fab078, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5, jdouble a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c2436c086842bb0d, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03d19cf6bcbd31dc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::orekit::utils::PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fade8cfc0be6514d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates FieldPVCoordinates::blendArithmeticallyWith(const FieldPVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_a2af71d3a8247277], a0.this$, a1.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::crossProduct(const FieldPVCoordinates & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_crossProduct_1bd1ef8a7bbb7399], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_7f41566731f83459], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d1b42a6748e907f9]));
      }

      FieldPVCoordinates FieldPVCoordinates::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getZero_aab2b71a889b2b8a], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::negate() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_345fc9bafd1687ff]));
      }

      FieldPVCoordinates FieldPVCoordinates::normalize() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_345fc9bafd1687ff]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::positionShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_c2b058e1eb7a8988], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7c72f45dd6c2303a], a0));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7e165dafecad92c1], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_608e82d3b6abf5f8], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_bd593b3379529ee5], a0));
      }

      ::org::orekit::utils::PVCoordinates FieldPVCoordinates::toPVCoordinates() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_toPVCoordinates_78e01095d7eced90]));
      }

      ::java::lang::String FieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative1PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_345fc9bafd1687ff]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_d1b42a6748e907f9]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative2PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_345fc9bafd1687ff]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_d1b42a6748e907f9]));
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
      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args);
      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data);
      static PyGetSetDef t_FieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, momentum),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, position),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, velocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, crossProduct, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toPVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinates)[] = {
        { Py_tp_methods, t_FieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldPVCoordinates_init_ },
        { Py_tp_getset, t_FieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinates, t_FieldPVCoordinates, FieldPVCoordinates);
      PyObject *t_FieldPVCoordinates::wrap_Object(const FieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinates), &PY_TYPE_DEF(FieldPVCoordinates), module, "FieldPVCoordinates", 0);
      }

      void t_FieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "class_", make_descriptor(FieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "wrapfn_", make_descriptor(t_FieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinates::wrap_Object(FieldPVCoordinates(((t_FieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DK", FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::utils::PVCoordinates a7((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.crossProduct(a0));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::getZero(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toPVCoordinates());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *OsculatingToMeanElementsConverter::class$ = NULL;
        jmethodID *OsculatingToMeanElementsConverter::mids$ = NULL;
        bool OsculatingToMeanElementsConverter::live$ = false;

        jclass OsculatingToMeanElementsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/OsculatingToMeanElementsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_73bfa0df23e443ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/propagation/Propagator;D)V");
            mids$[mid_convert_8fbfa58855031235] = env->getMethodID(cls, "convert", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OsculatingToMeanElementsConverter::OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::propagation::Propagator & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73bfa0df23e443ab, a0.this$, a1, a2.this$, a3)) {}

        ::org::orekit::propagation::SpacecraftState OsculatingToMeanElementsConverter::convert() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_convert_8fbfa58855031235]));
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
        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self);

        static PyMethodDef t_OsculatingToMeanElementsConverter__methods_[] = {
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, convert, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OsculatingToMeanElementsConverter)[] = {
          { Py_tp_methods, t_OsculatingToMeanElementsConverter__methods_ },
          { Py_tp_init, (void *) t_OsculatingToMeanElementsConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OsculatingToMeanElementsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OsculatingToMeanElementsConverter, t_OsculatingToMeanElementsConverter, OsculatingToMeanElementsConverter);

        void t_OsculatingToMeanElementsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(OsculatingToMeanElementsConverter), &PY_TYPE_DEF(OsculatingToMeanElementsConverter), module, "OsculatingToMeanElementsConverter", 0);
        }

        void t_OsculatingToMeanElementsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "class_", make_descriptor(OsculatingToMeanElementsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "wrapfn_", make_descriptor(t_OsculatingToMeanElementsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 1)))
            return NULL;
          return t_OsculatingToMeanElementsConverter::wrap_Object(OsculatingToMeanElementsConverter(((t_OsculatingToMeanElementsConverter *) arg)->object.this$));
        }
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          ::org::orekit::propagation::Propagator a2((jobject) NULL);
          jdouble a3;
          OsculatingToMeanElementsConverter object((jobject) NULL);

          if (!parseArgs(args, "kIkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = OsculatingToMeanElementsConverter(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.convert());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPHistory::class$ = NULL;
      jmethodID *EOPHistory::mids$ = NULL;
      bool EOPHistory::live$ = false;
      jint EOPHistory::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;

      jclass EOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5f09d8608893e5f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;ILjava/util/Collection;ZLorg/orekit/time/TimeScales;)V");
          mids$[mid_cachesTidalCorrection_eee3de00fe971136] = env->getMethodID(cls, "cachesTidalCorrection", "()Z");
          mids$[mid_checkEOPContinuity_1ad26e8c8c0cd65b] = env->getMethodID(cls, "checkEOPContinuity", "(D)V");
          mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_867110817f590882] = env->getMethodID(cls, "getEOPHistoryWithoutCachedTidalCorrection", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEndDate_80e11148db499dda] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEntries_d751c1a57012b438] = env->getMethodID(cls, "getEntries", "()Ljava/util/List;");
          mids$[mid_getEquinoxNutationCorrection_9b63d19c31941c0f] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getEquinoxNutationCorrection_977531d905f4ab3f] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getITRFVersion_6251f357bd0da5fd] = env->getMethodID(cls, "getITRFVersion", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationDegree", "()I");
          mids$[mid_getLOD_209f08246d708042] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLOD_cf010978f3c5a913] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNonRotatinOriginNutationCorrection_9b63d19c31941c0f] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getNonRotatinOriginNutationCorrection_977531d905f4ab3f] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPoleCorrection_b04b0c9b6ced5b0a] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/PoleCorrection;");
          mids$[mid_getPoleCorrection_06a314d42c0939e2] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldPoleCorrection;");
          mids$[mid_getStartDate_80e11148db499dda] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTimeScales_796d09eb9f0f96ef] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_getUT1MinusUTC_209f08246d708042] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getUT1MinusUTC_cf010978f3c5a913] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_isSimpleEop_eee3de00fe971136] = env->getMethodID(cls, "isSimpleEop", "()Z");
          mids$[mid_getNeighbors_ad75bac85cbb88e7] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_hasDataFor_b16e79ba1b2830a1] = env->getMethodID(cls, "hasDataFor", "(Lorg/orekit/time/AbsoluteDate;)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPHistory::EOPHistory(const ::org::orekit::utils::IERSConventions & a0, jint a1, const ::java::util::Collection & a2, jboolean a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f09d8608893e5f9, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      jboolean EOPHistory::cachesTidalCorrection() const
      {
        return env->callBooleanMethod(this$, mids$[mid_cachesTidalCorrection_eee3de00fe971136]);
      }

      void EOPHistory::checkEOPContinuity(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_checkEOPContinuity_1ad26e8c8c0cd65b], a0);
      }

      ::org::orekit::utils::IERSConventions EOPHistory::getConventions() const
      {
        return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_635853a14837ea6f]));
      }

      EOPHistory EOPHistory::getEOPHistoryWithoutCachedTidalCorrection() const
      {
        return EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_867110817f590882]));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getEndDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_80e11148db499dda]));
      }

      ::java::util::List EOPHistory::getEntries() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEntries_d751c1a57012b438]));
      }

      JArray< jdouble > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_9b63d19c31941c0f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_977531d905f4ab3f], a0.this$));
      }

      ::org::orekit::frames::ITRFVersion EOPHistory::getITRFVersion(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_6251f357bd0da5fd], a0.this$));
      }

      jint EOPHistory::getInterpolationDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_d6ab429752e7c267]);
      }

      jdouble EOPHistory::getLOD(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getLOD(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLOD_cf010978f3c5a913], a0.this$));
      }

      JArray< jdouble > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_9b63d19c31941c0f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_977531d905f4ab3f], a0.this$));
      }

      ::org::orekit::frames::PoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::PoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_b04b0c9b6ced5b0a], a0.this$));
      }

      ::org::orekit::frames::FieldPoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldPoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_06a314d42c0939e2], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getStartDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_80e11148db499dda]));
      }

      ::org::orekit::time::TimeScales EOPHistory::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_796d09eb9f0f96ef]));
      }

      jdouble EOPHistory::getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUT1MinusUTC_cf010978f3c5a913], a0.this$));
      }

      jboolean EOPHistory::isSimpleEop() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSimpleEop_eee3de00fe971136]);
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
      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self);
      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data);
      static PyGetSetDef t_EOPHistory__fields_[] = {
        DECLARE_GET_FIELD(t_EOPHistory, conventions),
        DECLARE_GET_FIELD(t_EOPHistory, eOPHistoryWithoutCachedTidalCorrection),
        DECLARE_GET_FIELD(t_EOPHistory, endDate),
        DECLARE_GET_FIELD(t_EOPHistory, entries),
        DECLARE_GET_FIELD(t_EOPHistory, interpolationDegree),
        DECLARE_GET_FIELD(t_EOPHistory, simpleEop),
        DECLARE_GET_FIELD(t_EOPHistory, startDate),
        DECLARE_GET_FIELD(t_EOPHistory, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPHistory__methods_[] = {
        DECLARE_METHOD(t_EOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, cachesTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, checkEOPContinuity, METH_O),
        DECLARE_METHOD(t_EOPHistory, getConventions, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEOPHistoryWithoutCachedTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEndDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEquinoxNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getITRFVersion, METH_O),
        DECLARE_METHOD(t_EOPHistory, getInterpolationDegree, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getLOD, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getNonRotatinOriginNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getPoleCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getStartDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getUT1MinusUTC, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, isSimpleEop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPHistory)[] = {
        { Py_tp_methods, t_EOPHistory__methods_ },
        { Py_tp_init, (void *) t_EOPHistory_init_ },
        { Py_tp_getset, t_EOPHistory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPHistory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPHistory, t_EOPHistory, EOPHistory);

      void t_EOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPHistory), &PY_TYPE_DEF(EOPHistory), module, "EOPHistory", 0);
      }

      void t_EOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "class_", make_descriptor(EOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "wrapfn_", make_descriptor(t_EOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "boxfn_", make_descriptor(boxObject));
        env->getClass(EOPHistory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(EOPHistory::DEFAULT_INTERPOLATION_DEGREE));
      }

      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPHistory::initializeClass, 1)))
          return NULL;
        return t_EOPHistory::wrap_Object(EOPHistory(((t_EOPHistory *) arg)->object.this$));
      }
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::java::util::Collection a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean a3;
        ::org::orekit::time::TimeScales a4((jobject) NULL);
        EOPHistory object((jobject) NULL);

        if (!parseArgs(args, "KIKZk", ::org::orekit::utils::IERSConventions::initializeClass, ::java::util::Collection::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
        {
          INT_CALL(object = EOPHistory(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.cachesTidalCorrection());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.checkEOPContinuity(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "checkEOPContinuity", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self)
      {
        ::org::orekit::utils::IERSConventions result((jobject) NULL);
        OBJ_CALL(result = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self)
      {
        EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
      }

      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEquinoxNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getITRFVersion(a0));
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFVersion", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLOD", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNonRotatinOriginNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::PoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_PoleCorrection::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldPoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_FieldPoleCorrection::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoleCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1MinusUTC", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSimpleEop());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data)
      {
        ::org::orekit::utils::IERSConventions value((jobject) NULL);
        OBJ_CALL(value = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data)
      {
        EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSimpleEop());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008::class$ = NULL;
          jmethodID *JB2008::mids$ = NULL;
          bool JB2008::live$ = false;

          jclass JB2008::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_484c8e9da5fa8d7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_5bd6ec19bbd33cac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_5e992d22425b7e63] = env->getMethodID(cls, "getDensity", "(DDDDDDDDDDDDDDD)D");
              mids$[mid_getDensity_87efe855fe9ad812] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDDDDDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484c8e9da5fa8d7b, a0.this$, a1.this$, a2.this$)) {}

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bd6ec19bbd33cac, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble JB2008::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          jdouble JB2008::getDensity(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_5e992d22425b7e63], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_87efe855fe9ad812], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          }

          ::org::orekit::frames::Frame JB2008::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args);
          static PyObject *t_JB2008_getFrame(t_JB2008 *self);
          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data);
          static PyGetSetDef t_JB2008__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008__methods_[] = {
            DECLARE_METHOD(t_JB2008, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_JB2008, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008)[] = {
            { Py_tp_methods, t_JB2008__methods_ },
            { Py_tp_init, (void *) t_JB2008_init_ },
            { Py_tp_getset, t_JB2008__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JB2008, t_JB2008, JB2008);

          void t_JB2008::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008), &PY_TYPE_DEF(JB2008), module, "JB2008", 0);
          }

          void t_JB2008::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "class_", make_descriptor(JB2008::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "wrapfn_", make_descriptor(t_JB2008::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008::initializeClass, 1)))
              return NULL;
            return t_JB2008::wrap_Object(JB2008(((t_JB2008 *) arg)->object.this$));
          }
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = JB2008(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = JB2008(a0, a1, a2, a3));
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

          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 15:
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
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble result;

                if (!parseArgs(args, "DDDDDDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
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
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKKKDDDDDDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_JB2008_getFrame(t_JB2008 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays::class$ = NULL;
      jmethodID *MathArrays::mids$ = NULL;
      bool MathArrays::live$ = false;

      jclass MathArrays::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildArray_d626a1d766d66b94] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_537724343e50c1ea] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_780237ee7f6e7279] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;III)[[[Lorg/hipparchus/FieldElement;");
          mids$[mid_checkEqualLength_64100e41ba74de8f] = env->getStaticMethodID(cls, "checkEqualLength", "([D[D)V");
          mids$[mid_checkEqualLength_6e41e5beb7528b4b] = env->getStaticMethodID(cls, "checkEqualLength", "([I[I)V");
          mids$[mid_checkEqualLength_7709cb51638b2622] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkEqualLength_a57658a844146040] = env->getStaticMethodID(cls, "checkEqualLength", "([D[DZ)Z");
          mids$[mid_checkEqualLength_a0dee156b4957108] = env->getStaticMethodID(cls, "checkEqualLength", "([I[IZ)Z");
          mids$[mid_checkEqualLength_1a8d7eef37b613ce] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Z)Z");
          mids$[mid_checkNonNegative_22b2c2bc86e56cb0] = env->getStaticMethodID(cls, "checkNonNegative", "([J)V");
          mids$[mid_checkNonNegative_ae7006da23625df1] = env->getStaticMethodID(cls, "checkNonNegative", "([[J)V");
          mids$[mid_checkNotNaN_a71c45509eaf92d1] = env->getStaticMethodID(cls, "checkNotNaN", "([D)V");
          mids$[mid_checkOrder_a71c45509eaf92d1] = env->getStaticMethodID(cls, "checkOrder", "([D)V");
          mids$[mid_checkOrder_77e61a645c496adc] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkOrder_621daf0814da4ad9] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_399a4de0a26a5a0e] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_ac761f2af37da295] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkOrder_a6a5e5a824e78547] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkPositive_a71c45509eaf92d1] = env->getStaticMethodID(cls, "checkPositive", "([D)V");
          mids$[mid_checkRectangular_ae7006da23625df1] = env->getStaticMethodID(cls, "checkRectangular", "([[J)V");
          mids$[mid_concatenate_fb70975f75a3a1b5] = env->getStaticMethodID(cls, "concatenate", "([[D)[D");
          mids$[mid_convolve_8238c1ebef563b00] = env->getStaticMethodID(cls, "convolve", "([D[D)[D");
          mids$[mid_cosAngle_b01af8a77d4df96f] = env->getStaticMethodID(cls, "cosAngle", "([D[D)D");
          mids$[mid_distance_b01af8a77d4df96f] = env->getStaticMethodID(cls, "distance", "([D[D)D");
          mids$[mid_distance_0cf4f7e770b28a5d] = env->getStaticMethodID(cls, "distance", "([I[I)D");
          mids$[mid_distance1_b01af8a77d4df96f] = env->getStaticMethodID(cls, "distance1", "([D[D)D");
          mids$[mid_distance1_b444938e9c64511a] = env->getStaticMethodID(cls, "distance1", "([I[I)I");
          mids$[mid_distanceInf_b01af8a77d4df96f] = env->getStaticMethodID(cls, "distanceInf", "([D[D)D");
          mids$[mid_distanceInf_b444938e9c64511a] = env->getStaticMethodID(cls, "distanceInf", "([I[I)I");
          mids$[mid_ebeAdd_8238c1ebef563b00] = env->getStaticMethodID(cls, "ebeAdd", "([D[D)[D");
          mids$[mid_ebeDivide_8238c1ebef563b00] = env->getStaticMethodID(cls, "ebeDivide", "([D[D)[D");
          mids$[mid_ebeMultiply_8238c1ebef563b00] = env->getStaticMethodID(cls, "ebeMultiply", "([D[D)[D");
          mids$[mid_ebeSubtract_8238c1ebef563b00] = env->getStaticMethodID(cls, "ebeSubtract", "([D[D)[D");
          mids$[mid_equals_7f0e96d531737149] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
          mids$[mid_equals_ae9ef40b81aa3737] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
          mids$[mid_equals_a03930c526253e6a] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
          mids$[mid_equals_f92b869f534c4ff0] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
          mids$[mid_equals_f0a71ca3a8bba19c] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
          mids$[mid_equals_ae43abd99d1296a0] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
          mids$[mid_equalsIncludingNaN_ae9ef40b81aa3737] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([D[D)Z");
          mids$[mid_equalsIncludingNaN_a03930c526253e6a] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([F[F)Z");
          mids$[mid_isMonotonic_31a3c12e09c5659f] = env->getStaticMethodID(cls, "isMonotonic", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_isMonotonic_a21de30dd73fe271] = env->getStaticMethodID(cls, "isMonotonic", "([Ljava/lang/Comparable;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_linearCombination_b01af8a77d4df96f] = env->getStaticMethodID(cls, "linearCombination", "([D[D)D");
          mids$[mid_linearCombination_45d926aea7231320] = env->getStaticMethodID(cls, "linearCombination", "(DDDD)D");
          mids$[mid_linearCombination_79d84db2e9af7a7b] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDD)D");
          mids$[mid_linearCombination_c5f64c12ff28e41f] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDDDD)D");
          mids$[mid_natural_adb0f0485f08dbd0] = env->getStaticMethodID(cls, "natural", "(I)[I");
          mids$[mid_normalizeArray_8c3d418d3dab4cd1] = env->getStaticMethodID(cls, "normalizeArray", "([DD)[D");
          mids$[mid_safeNorm_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "safeNorm", "([D)D");
          mids$[mid_scale_bfc955188bf36f2c] = env->getStaticMethodID(cls, "scale", "(D[D)[D");
          mids$[mid_scaleInPlace_bb630ae4b8ab9248] = env->getStaticMethodID(cls, "scaleInPlace", "(D[D)V");
          mids$[mid_sequence_50ae6a9c9fe285e4] = env->getStaticMethodID(cls, "sequence", "(III)[I");
          mids$[mid_shuffle_d43202153dd284f7] = env->getStaticMethodID(cls, "shuffle", "([I)V");
          mids$[mid_shuffle_b1406e8980554e56] = env->getStaticMethodID(cls, "shuffle", "([ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_shuffle_ba62e577109fe8bf] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;)V");
          mids$[mid_shuffle_68dad20f8ed9d9fb] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_sortInPlace_ef9c3ec1d213ea68] = env->getStaticMethodID(cls, "sortInPlace", "([D[[D)V");
          mids$[mid_sortInPlace_f41709706ab996fb] = env->getStaticMethodID(cls, "sortInPlace", "([DLorg/hipparchus/util/MathArrays$OrderDirection;[[D)V");
          mids$[mid_unique_51f624c89851da7e] = env->getStaticMethodID(cls, "unique", "([D)[D");
          mids$[mid_verifyValues_afec43a80d5dabc9] = env->getStaticMethodID(cls, "verifyValues", "([DII)Z");
          mids$[mid_verifyValues_adbb86270596edb0] = env->getStaticMethodID(cls, "verifyValues", "([D[DII)Z");
          mids$[mid_verifyValues_69212e0bd876f633] = env->getStaticMethodID(cls, "verifyValues", "([DIIZ)Z");
          mids$[mid_verifyValues_2f00057a4c517fed] = env->getStaticMethodID(cls, "verifyValues", "([D[DIIZ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::FieldElement > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::FieldElement >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_d626a1d766d66b94], a0.this$, a1));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_537724343e50c1ea], a0.this$, a1, a2));
      }

      JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< JArray< ::org::hipparchus::FieldElement > > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_780237ee7f6e7279], a0.this$, a1, a2, a3));
      }

      void MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_64100e41ba74de8f], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_6e41e5beb7528b4b], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_7709cb51638b2622], a0.this$, a1.this$);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_a57658a844146040], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_a0dee156b4957108], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_1a8d7eef37b613ce], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkNonNegative(const JArray< jlong > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_22b2c2bc86e56cb0], a0.this$);
      }

      void MathArrays::checkNonNegative(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_ae7006da23625df1], a0.this$);
      }

      void MathArrays::checkNotNaN(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNaN_a71c45509eaf92d1], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_a71c45509eaf92d1], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_77e61a645c496adc], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_621daf0814da4ad9], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_399a4de0a26a5a0e], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_ac761f2af37da295], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_a6a5e5a824e78547], a0.this$, a1.this$, a2, a3);
      }

      void MathArrays::checkPositive(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkPositive_a71c45509eaf92d1], a0.this$);
      }

      void MathArrays::checkRectangular(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRectangular_ae7006da23625df1], a0.this$);
      }

      JArray< jdouble > MathArrays::concatenate(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_concatenate_fb70975f75a3a1b5], a0.this$));
      }

      JArray< jdouble > MathArrays::convolve(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_convolve_8238c1ebef563b00], a0.this$, a1.this$));
      }

      jdouble MathArrays::cosAngle(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosAngle_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_0cf4f7e770b28a5d], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance1(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance1_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jint MathArrays::distance1(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distance1_b444938e9c64511a], a0.this$, a1.this$);
      }

      jdouble MathArrays::distanceInf(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jint MathArrays::distanceInf(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distanceInf_b444938e9c64511a], a0.this$, a1.this$);
      }

      JArray< jdouble > MathArrays::ebeAdd(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeAdd_8238c1ebef563b00], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeDivide(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeDivide_8238c1ebef563b00], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeMultiply(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeMultiply_8238c1ebef563b00], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeSubtract(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeSubtract_8238c1ebef563b00], a0.this$, a1.this$));
      }

      jboolean MathArrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_7f0e96d531737149], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae9ef40b81aa3737], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_a03930c526253e6a], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f92b869f534c4ff0], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f0a71ca3a8bba19c], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae43abd99d1296a0], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_ae9ef40b81aa3737], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_a03930c526253e6a], a0.this$, a1.this$);
      }

      jboolean MathArrays::isMonotonic(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_31a3c12e09c5659f], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::isMonotonic(const JArray< ::java::lang::Comparable > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_a21de30dd73fe271], a0.this$, a1.this$, a2);
      }

      jdouble MathArrays::linearCombination(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_45d926aea7231320], a0, a1, a2, a3);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_79d84db2e9af7a7b], a0, a1, a2, a3, a4, a5);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_c5f64c12ff28e41f], a0, a1, a2, a3, a4, a5, a6, a7);
      }

      JArray< jint > MathArrays::natural(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_natural_adb0f0485f08dbd0], a0));
      }

      JArray< jdouble > MathArrays::normalizeArray(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalizeArray_8c3d418d3dab4cd1], a0.this$, a1));
      }

      jdouble MathArrays::safeNorm(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_safeNorm_a40ce4fdf6559ac0], a0.this$);
      }

      JArray< jdouble > MathArrays::scale(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_scale_bfc955188bf36f2c], a0, a1.this$));
      }

      void MathArrays::scaleInPlace(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_scaleInPlace_bb630ae4b8ab9248], a0, a1.this$);
      }

      JArray< jint > MathArrays::sequence(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_sequence_50ae6a9c9fe285e4], a0, a1, a2));
      }

      void MathArrays::shuffle(const JArray< jint > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_d43202153dd284f7], a0.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, const ::org::hipparchus::random::RandomGenerator & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_b1406e8980554e56], a0.this$, a1.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_ba62e577109fe8bf], a0.this$, a1, a2.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2, const ::org::hipparchus::random::RandomGenerator & a3)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_68dad20f8ed9d9fb], a0.this$, a1, a2.this$, a3.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_ef9c3ec1d213ea68], a0.this$, a1.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, const JArray< JArray< jdouble > > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_f41709706ab996fb], a0.this$, a1.this$, a2.this$);
      }

      JArray< jdouble > MathArrays::unique(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_unique_51f624c89851da7e], a0.this$));
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_afec43a80d5dabc9], a0.this$, a1, a2);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_adbb86270596edb0], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_69212e0bd876f633], a0.this$, a1, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3, jboolean a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_2f00057a4c517fed], a0.this$, a1.this$, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathArrays__methods_[] = {
        DECLARE_METHOD(t_MathArrays, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, buildArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkEqualLength, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNonNegative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNotNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkOrder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkPositive, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkRectangular, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, concatenate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, convolve, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, cosAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distanceInf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeAdd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeDivide, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeMultiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeSubtract, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, isMonotonic, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, linearCombination, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, natural, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, normalizeArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, safeNorm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scale, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scaleInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sequence, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, shuffle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sortInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, unique, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, verifyValues, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays)[] = {
        { Py_tp_methods, t_MathArrays__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays, t_MathArrays, MathArrays);

      void t_MathArrays::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays), &PY_TYPE_DEF(MathArrays), module, "MathArrays", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Position", make_descriptor(&PY_TYPE_DEF(MathArrays$Position)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "OrderDirection", make_descriptor(&PY_TYPE_DEF(MathArrays$OrderDirection)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Function", make_descriptor(&PY_TYPE_DEF(MathArrays$Function)));
      }

      void t_MathArrays::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "class_", make_descriptor(MathArrays::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "wrapfn_", make_descriptor(t_MathArrays::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays::initializeClass, 1)))
          return NULL;
        return t_MathArrays::wrap_Object(MathArrays(((t_MathArrays *) arg)->object.this$));
      }
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > result((jobject) NULL);

            if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError(type, "buildArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[I[IZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[K[KZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkEqualLength", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jlong > a0((jobject) NULL);

            if (!parseArgs(args, "[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< JArray< jlong > > a0((jobject) NULL);

            if (!parseArgs(args, "[[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNonNegative", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkNotNaN(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkNotNaN", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[KKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DKZZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[KKZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkOrder", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkPositive(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkPositive", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jlong > > a0((jobject) NULL);

        if (!parseArg(arg, "[[J", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkRectangular(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRectangular", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::concatenate(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "concatenate", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::convolve(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "convolve", args);
        return NULL;
      }

      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::cosAngle(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "cosAngle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance1", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distanceInf", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeAdd(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeAdd", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeDivide(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeMultiply(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeSubtract(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeSubtract", args);
        return NULL;
      }

      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jbyte > a0((jobject) NULL);
            JArray< jbyte > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jlong > a0((jobject) NULL);
            JArray< jlong > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[J[J", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jshort > a0((jobject) NULL);
            JArray< jshort > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[S[S", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::java::lang::Comparable > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[KKZ", ::java::lang::Comparable::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMonotonic", args);
        return NULL;
      }

      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 6:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble result;

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 8:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble result;

            if (!parseArgs(args, "DDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::natural(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "natural", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble a1;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::normalizeArray(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalizeArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::safeNorm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "safeNorm", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::scale(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "scale", args);
        return NULL;
      }

      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::scaleInPlace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "scaleInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::sequence(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sequence", args);
        return NULL;
      }

      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);

            if (!parseArgs(args, "[Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[IIK", ::org::hipparchus::util::MathArrays$Position::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::random::RandomGenerator a3((jobject) NULL);

            if (!parseArgs(args, "[IIKk", ::org::hipparchus::util::MathArrays$Position::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_, &a3))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "shuffle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);

            if (!parseArgs(args, "[D[[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[DK[[D", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "sortInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::unique(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "unique", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean result;

            if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DIIZ", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 5:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean a4;
            jboolean result;

            if (!parseArgs(args, "[D[DIIZ", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3, a4));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "verifyValues", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *FieldMatrixChangingVisitor::mids$ = NULL;
      bool FieldMatrixChangingVisitor::live$ = false;

      jclass FieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_be2f38076167f47f] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void FieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_be2f38076167f47f], a0, a1, a2.this$));
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
      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self);
      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixChangingVisitor, t_FieldMatrixChangingVisitor, FieldMatrixChangingVisitor);
      PyObject *t_FieldMatrixChangingVisitor::wrap_Object(const FieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixChangingVisitor), &PY_TYPE_DEF(FieldMatrixChangingVisitor), module, "FieldMatrixChangingVisitor", 0);
      }

      void t_FieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "class_", make_descriptor(FieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixChangingVisitor::wrap_Object(FieldMatrixChangingVisitor(((t_FieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractSet::class$ = NULL;
    jmethodID *AbstractSet::mids$ = NULL;
    bool AbstractSet::live$ = false;

    jclass AbstractSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractSet::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint AbstractSet::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean AbstractSet::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data);
    static PyGetSetDef t_AbstractSet__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractSet__methods_[] = {
      DECLARE_METHOD(t_AbstractSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, removeAll, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractSet)[] = {
      { Py_tp_methods, t_AbstractSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractSet, t_AbstractSet, AbstractSet);
    PyObject *t_AbstractSet::wrap_Object(const AbstractSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractSet::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractSet), &PY_TYPE_DEF(AbstractSet), module, "AbstractSet", 0);
    }

    void t_AbstractSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "class_", make_descriptor(AbstractSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "wrapfn_", make_descriptor(t_AbstractSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractSet::initializeClass, 1)))
        return NULL;
      return t_AbstractSet::wrap_Object(AbstractSet(((t_AbstractSet *) arg)->object.this$));
    }
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "removeAll", args, 2);
    }
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
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
                  mids$[mid_init$_fb7eee24392891a4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045::Rtcm1045(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_fb7eee24392891a4, a0, a1.this$)) {}
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmSatelliteEphemeris::class$ = NULL;
              jmethodID *AcmSatelliteEphemeris::mids$ = NULL;
              bool AcmSatelliteEphemeris::live$ = false;

              jclass AcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d6d7b1002c69c04a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmSatelliteEphemeris::AcmSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6d7b1002c69c04a, a0.this$, a1.this$)) {}

              ::java::lang::String AcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              ::java::util::List AcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmSatelliteEphemeris, t_AcmSatelliteEphemeris, AcmSatelliteEphemeris);

              void t_AcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmSatelliteEphemeris), &PY_TYPE_DEF(AcmSatelliteEphemeris), module, "AcmSatelliteEphemeris", 0);
              }

              void t_AcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "class_", make_descriptor(AcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_AcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AcmSatelliteEphemeris::wrap_Object(AcmSatelliteEphemeris(((t_AcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AcmSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data)
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
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatelliteSystem::class$ = NULL;
      jmethodID *SatelliteSystem::mids$ = NULL;
      bool SatelliteSystem::live$ = false;
      SatelliteSystem *SatelliteSystem::BEIDOU = NULL;
      SatelliteSystem *SatelliteSystem::GALILEO = NULL;
      SatelliteSystem *SatelliteSystem::GLONASS = NULL;
      SatelliteSystem *SatelliteSystem::GPS = NULL;
      SatelliteSystem *SatelliteSystem::IRNSS = NULL;
      SatelliteSystem *SatelliteSystem::MIXED = NULL;
      SatelliteSystem *SatelliteSystem::QZSS = NULL;
      SatelliteSystem *SatelliteSystem::SBAS = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_A = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_B = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_D = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_F = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_H = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_K = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_L = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_N = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_O = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_P = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Q = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_T = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_U = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_V = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_W = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_X = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Y = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Z = NULL;

      jclass SatelliteSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatelliteSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_153df32fe8b51cb6] = env->getMethodID(cls, "getKey", "()C");
          mids$[mid_getObservationTimeScale_ff4c3be08329916c] = env->getMethodID(cls, "getObservationTimeScale", "()Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_parseSatelliteSystem_d285b168dff0f6e9] = env->getStaticMethodID(cls, "parseSatelliteSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_parseSatelliteSystemWithGPSDefault_d285b168dff0f6e9] = env->getStaticMethodID(cls, "parseSatelliteSystemWithGPSDefault", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_valueOf_d285b168dff0f6e9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_values_4371533a164a4841] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SatelliteSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new SatelliteSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/SatelliteSystem;"));
          GALILEO = new SatelliteSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/SatelliteSystem;"));
          GLONASS = new SatelliteSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/SatelliteSystem;"));
          GPS = new SatelliteSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/SatelliteSystem;"));
          IRNSS = new SatelliteSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          MIXED = new SatelliteSystem(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/gnss/SatelliteSystem;"));
          QZSS = new SatelliteSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          SBAS = new SatelliteSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_A = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_A", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_B = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_B", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_D = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_D", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_F = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_F", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_H = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_H", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_K = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_K", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_L = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_L", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_N = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_N", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_O = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_O", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_P = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_P", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Q = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Q", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_T = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_T", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_U = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_U", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_V = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_V", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_W = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_W", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_X = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_X", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Y = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Y", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Z = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Z", "Lorg/orekit/gnss/SatelliteSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jchar SatelliteSystem::getKey() const
      {
        return env->callCharMethod(this$, mids$[mid_getKey_153df32fe8b51cb6]);
      }

      ::org::orekit::gnss::ObservationTimeScale SatelliteSystem::getObservationTimeScale() const
      {
        return ::org::orekit::gnss::ObservationTimeScale(env->callObjectMethod(this$, mids$[mid_getObservationTimeScale_ff4c3be08329916c]));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystem_d285b168dff0f6e9], a0.this$));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystemWithGPSDefault(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystemWithGPSDefault_d285b168dff0f6e9], a0.this$));
      }

      SatelliteSystem SatelliteSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d285b168dff0f6e9], a0.this$));
      }

      JArray< SatelliteSystem > SatelliteSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SatelliteSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_4371533a164a4841]));
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
      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args);
      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SatelliteSystem_values(PyTypeObject *type);
      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data);
      static PyGetSetDef t_SatelliteSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteSystem, key),
        DECLARE_GET_FIELD(t_SatelliteSystem, observationTimeScale),
        DECLARE_GET_FIELD(t_SatelliteSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteSystem__methods_[] = {
        DECLARE_METHOD(t_SatelliteSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, getObservationTimeScale, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystemWithGPSDefault, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteSystem)[] = {
        { Py_tp_methods, t_SatelliteSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SatelliteSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SatelliteSystem, t_SatelliteSystem, SatelliteSystem);
      PyObject *t_SatelliteSystem::wrap_Object(const SatelliteSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SatelliteSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SatelliteSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteSystem), &PY_TYPE_DEF(SatelliteSystem), module, "SatelliteSystem", 0);
      }

      void t_SatelliteSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "class_", make_descriptor(SatelliteSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "wrapfn_", make_descriptor(t_SatelliteSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(SatelliteSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "BEIDOU", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GALILEO", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GLONASS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GPS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "IRNSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "MIXED", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::MIXED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "QZSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "SBAS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_A", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_B", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_D", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_F", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_F)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_H", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_H)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_K", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_L", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_N", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_O", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_O)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_P", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Q", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_T", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_T)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_U", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_U)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_V", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_V)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_W", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_X", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Y", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Z", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Z)));
      }

      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteSystem::initializeClass, 1)))
          return NULL;
        return t_SatelliteSystem::wrap_Object(SatelliteSystem(((t_SatelliteSystem *) arg)->object.this$));
      }
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self)
      {
        jchar result;
        OBJ_CALL(result = self->object.getKey());
        return c2p(result);
      }

      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self)
      {
        ::org::orekit::gnss::ObservationTimeScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(result);
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystem(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystem", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystemWithGPSDefault(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystemWithGPSDefault", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::valueOf(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SatelliteSystem_values(PyTypeObject *type)
      {
        JArray< SatelliteSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::values());
        return JArray<jobject>(result.this$).wrap(t_SatelliteSystem::wrap_jobject);
      }
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data)
      {
        jchar value;
        OBJ_CALL(value = self->object.getKey());
        return c2p(value);
      }

      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data)
      {
        ::org::orekit::gnss::ObservationTimeScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter::class$ = NULL;
      jmethodID *GaussianCurveFitter::mids$ = NULL;
      bool GaussianCurveFitter::live$ = false;

      jclass GaussianCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_8047aff32283b88f] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withMaxIterations_fba3238d06175ca8] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withStartPoint_1a3a91948b0a70b8] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_getProblem_51e01b60016ab388] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter GaussianCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return GaussianCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_8047aff32283b88f]));
      }

      GaussianCurveFitter GaussianCurveFitter::withMaxIterations(jint a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_fba3238d06175ca8], a0));
      }

      GaussianCurveFitter GaussianCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_1a3a91948b0a70b8], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type);
      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg);

      static PyMethodDef t_GaussianCurveFitter__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_GaussianCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter)[] = {
        { Py_tp_methods, t_GaussianCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter, t_GaussianCurveFitter, GaussianCurveFitter);

      void t_GaussianCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter), &PY_TYPE_DEF(GaussianCurveFitter), module, "GaussianCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser)));
      }

      void t_GaussianCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "class_", make_descriptor(GaussianCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "wrapfn_", make_descriptor(t_GaussianCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter::wrap_Object(GaussianCurveFitter(((t_GaussianCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type)
      {
        GaussianCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::GaussianCurveFitter::create());
        return t_GaussianCurveFitter::wrap_Object(result);
      }

      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg)
      {
        jint a0;
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProvider::mids$ = NULL;
      bool ExtendedPVCoordinatesProvider::live$ = false;

      jclass ExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_bfce50434b755ecb] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toFieldPVCoordinatesProvider_36db2fb93843b2c3] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates ExtendedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ExtendedPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_bfce50434b755ecb], a0.this$, a1.this$));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider ExtendedPVCoordinatesProvider::toFieldPVCoordinatesProvider(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toFieldPVCoordinatesProvider_36db2fb93843b2c3], a0.this$));
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
      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg);

      static PyMethodDef t_ExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, toFieldPVCoordinatesProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProvider, t_ExtendedPVCoordinatesProvider, ExtendedPVCoordinatesProvider);

      void t_ExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProvider), &PY_TYPE_DEF(ExtendedPVCoordinatesProvider), module, "ExtendedPVCoordinatesProvider", 0);
      }

      void t_ExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "class_", make_descriptor(ExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProvider::wrap_Object(ExtendedPVCoordinatesProvider(((t_ExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPVCoordinates", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toFieldPVCoordinatesProvider(a0));
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toFieldPVCoordinatesProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/File.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource::class$ = NULL;
      jmethodID *DataSource::mids$ = NULL;
      bool DataSource::live$ = false;

      jclass DataSource::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4b615a7a39d2b02a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$ReaderOpener;)V");
          mids$[mid_init$_58e6f3d903187c31] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$StreamOpener;)V");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getOpener_de9fac3997e0c67b] = env->getMethodID(cls, "getOpener", "()Lorg/orekit/data/DataSource$Opener;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataSource::DataSource(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$ReaderOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b615a7a39d2b02a, a0.this$, a1.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$StreamOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_58e6f3d903187c31, a0.this$, a1.this$)) {}

      ::java::lang::String DataSource::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::orekit::data::DataSource$Opener DataSource::getOpener() const
      {
        return ::org::orekit::data::DataSource$Opener(env->callObjectMethod(this$, mids$[mid_getOpener_de9fac3997e0c67b]));
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
      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataSource_getName(t_DataSource *self);
      static PyObject *t_DataSource_getOpener(t_DataSource *self);
      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data);
      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data);
      static PyGetSetDef t_DataSource__fields_[] = {
        DECLARE_GET_FIELD(t_DataSource, name),
        DECLARE_GET_FIELD(t_DataSource, opener),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataSource__methods_[] = {
        DECLARE_METHOD(t_DataSource, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, getName, METH_NOARGS),
        DECLARE_METHOD(t_DataSource, getOpener, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource)[] = {
        { Py_tp_methods, t_DataSource__methods_ },
        { Py_tp_init, (void *) t_DataSource_init_ },
        { Py_tp_getset, t_DataSource__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource, t_DataSource, DataSource);

      void t_DataSource::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource), &PY_TYPE_DEF(DataSource), module, "DataSource", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "Opener", make_descriptor(&PY_TYPE_DEF(DataSource$Opener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "ReaderOpener", make_descriptor(&PY_TYPE_DEF(DataSource$ReaderOpener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "StreamOpener", make_descriptor(&PY_TYPE_DEF(DataSource$StreamOpener)));
      }

      void t_DataSource::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "class_", make_descriptor(DataSource::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "wrapfn_", make_descriptor(t_DataSource::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource::initializeClass, 1)))
          return NULL;
        return t_DataSource::wrap_Object(DataSource(((t_DataSource *) arg)->object.this$));
      }
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$ReaderOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$ReaderOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$StreamOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$StreamOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
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

      static PyObject *t_DataSource_getName(t_DataSource *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_DataSource_getOpener(t_DataSource *self)
      {
        ::org::orekit::data::DataSource$Opener result((jobject) NULL);
        OBJ_CALL(result = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(result);
      }

      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data)
      {
        ::org::orekit::data::DataSource$Opener value((jobject) NULL);
        OBJ_CALL(value = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1066::class$ = NULL;
              jmethodID *Rtcm1066::mids$ = NULL;
              bool Rtcm1066::live$ = false;

              jclass Rtcm1066::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1066::Rtcm1066(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args);
              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data);
              static PyGetSetDef t_Rtcm1066__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1066, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1066__methods_[] = {
                DECLARE_METHOD(t_Rtcm1066, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1066)[] = {
                { Py_tp_methods, t_Rtcm1066__methods_ },
                { Py_tp_init, (void *) t_Rtcm1066_init_ },
                { Py_tp_getset, t_Rtcm1066__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1066)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1066, t_Rtcm1066, Rtcm1066);
              PyObject *t_Rtcm1066::wrap_Object(const Rtcm1066& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1066::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1066::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1066), &PY_TYPE_DEF(Rtcm1066), module, "Rtcm1066", 0);
              }

              void t_Rtcm1066::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "class_", make_descriptor(Rtcm1066::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "wrapfn_", make_descriptor(t_Rtcm1066::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1066::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1066::wrap_Object(Rtcm1066(((t_Rtcm1066 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1066::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1066 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1066(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEPropagator::class$ = NULL;
          jmethodID *TLEPropagator::mids$ = NULL;
          bool TLEPropagator::live$ = false;

          jclass TLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDefaultTleGenerationAlgorithm_5842c70c474d9e85] = env->getStaticMethodID(cls, "getDefaultTleGenerationAlgorithm", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_9981f74b2d109da6] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_37ec40ec795d4b0a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_getTLE_dacb215ad36dee42] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_selectExtrapolator_0bab2cb0eccfecad] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_83d74849e34f0409] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_456551486bc4e83a] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_bdb6e20df60d7e73] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_sxpInitialize_ff7cb6c242604316] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm TLEPropagator::getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm(env->callStaticObjectMethod(cls, mids$[mid_getDefaultTleGenerationAlgorithm_5842c70c474d9e85], a0.this$, a1.this$));
          }

          ::org::orekit::frames::Frame TLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          jdouble TLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_9981f74b2d109da6]);
          }

          ::org::orekit::utils::PVCoordinates TLEPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_37ec40ec795d4b0a], a0.this$));
          }

          ::org::orekit::propagation::analytical::tle::TLE TLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTLE_dacb215ad36dee42]));
          }

          void TLEPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_0bab2cb0eccfecad], a0.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_83d74849e34f0409], a0.this$, a1.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_456551486bc4e83a], a0.this$, a1.this$, a2));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_bdb6e20df60d7e73], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self);
          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data);
          static PyGetSetDef t_TLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_TLEPropagator, frame),
            DECLARE_GET_FIELD(t_TLEPropagator, mU),
            DECLARE_GET_FIELD(t_TLEPropagator, tLE),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLEPropagator__methods_[] = {
            DECLARE_METHOD(t_TLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getDefaultTleGenerationAlgorithm, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_TLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEPropagator)[] = {
            { Py_tp_methods, t_TLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(TLEPropagator, t_TLEPropagator, TLEPropagator);

          void t_TLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEPropagator), &PY_TYPE_DEF(TLEPropagator), module, "TLEPropagator", 0);
          }

          void t_TLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "class_", make_descriptor(TLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "wrapfn_", make_descriptor(t_TLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEPropagator::initializeClass, 1)))
              return NULL;
            return t_TLEPropagator::wrap_Object(TLEPropagator(((t_TLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getDefaultTleGenerationAlgorithm(a0, a1));
              return ::org::orekit::propagation::analytical::tle::generation::t_TleGenerationAlgorithm::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDefaultTleGenerationAlgorithm", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }

          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeSystem::class$ = NULL;
          jmethodID *TimeSystem::mids$ = NULL;
          bool TimeSystem::live$ = false;
          TimeSystem *TimeSystem::GMST = NULL;
          TimeSystem *TimeSystem::GPS = NULL;
          TimeSystem *TimeSystem::MET = NULL;
          TimeSystem *TimeSystem::MRT = NULL;
          TimeSystem *TimeSystem::SCLK = NULL;
          TimeSystem *TimeSystem::TAI = NULL;
          TimeSystem *TimeSystem::TCB = NULL;
          TimeSystem *TimeSystem::TCG = NULL;
          TimeSystem *TimeSystem::TDB = NULL;
          TimeSystem *TimeSystem::TT = NULL;
          TimeSystem *TimeSystem::UT1 = NULL;
          TimeSystem *TimeSystem::UTC = NULL;

          jclass TimeSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConverter_ac0c3940bd6a894e] = env->getMethodID(cls, "getConverter", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)Lorg/orekit/files/ccsds/definitions/TimeConverter;");
              mids$[mid_parse_2830b2fcf1ea07ad] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_valueOf_2830b2fcf1ea07ad] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_values_61675bd8fde9f409] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/TimeSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GMST = new TimeSystem(env->getStaticObjectField(cls, "GMST", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MET = new TimeSystem(env->getStaticObjectField(cls, "MET", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MRT = new TimeSystem(env->getStaticObjectField(cls, "MRT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              SCLK = new TimeSystem(env->getStaticObjectField(cls, "SCLK", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCB = new TimeSystem(env->getStaticObjectField(cls, "TCB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCG = new TimeSystem(env->getStaticObjectField(cls, "TCG", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TDB = new TimeSystem(env->getStaticObjectField(cls, "TDB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TT = new TimeSystem(env->getStaticObjectField(cls, "TT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UT1 = new TimeSystem(env->getStaticObjectField(cls, "UT1", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeConverter TimeSystem::getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
          {
            return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getConverter_ac0c3940bd6a894e], a0.this$));
          }

          TimeSystem TimeSystem::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_2830b2fcf1ea07ad], a0.this$));
          }

          TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2830b2fcf1ea07ad], a0.this$));
          }

          JArray< TimeSystem > TimeSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_61675bd8fde9f409]));
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
          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg);
          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TimeSystem_values(PyTypeObject *type);
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
          static PyGetSetDef t_TimeSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystem__methods_[] = {
            DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TimeSystem, getConverter, METH_O),
            DECLARE_METHOD(t_TimeSystem, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
            { Py_tp_methods, t_TimeSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TimeSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
          PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TimeSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
          }

          void t_TimeSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMST", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MET", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MRT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MRT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SCLK", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SCLK)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCG", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TDB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TDB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UT1", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UT1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
          }

          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
              return NULL;
            return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
          }
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getConverter(a0));
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConverter", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::parse(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::valueOf(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TimeSystem_values(PyTypeObject *type)
          {
            JArray< TimeSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
          }
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
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
#include "org/hipparchus/fraction/FractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionField::class$ = NULL;
      jmethodID *FractionField::mids$ = NULL;
      bool FractionField::live$ = false;

      jclass FractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_d1ee112cc568c3bb] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getOne_8e8b2db4820cf02e] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_8e8b2db4820cf02e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      FractionField FractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_d1ee112cc568c3bb]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getOne() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getOne_8e8b2db4820cf02e]));
      }

      ::java::lang::Class FractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getZero() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getZero_8e8b2db4820cf02e]));
      }

      jint FractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_getInstance(PyTypeObject *type);
      static PyObject *t_FractionField_getOne(t_FractionField *self);
      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self);
      static PyObject *t_FractionField_getZero(t_FractionField *self);
      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data);
      static PyGetSetDef t_FractionField__fields_[] = {
        DECLARE_GET_FIELD(t_FractionField, instance),
        DECLARE_GET_FIELD(t_FractionField, one),
        DECLARE_GET_FIELD(t_FractionField, runtimeClass),
        DECLARE_GET_FIELD(t_FractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionField__methods_[] = {
        DECLARE_METHOD(t_FractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionField)[] = {
        { Py_tp_methods, t_FractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FractionField, t_FractionField, FractionField);

      void t_FractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionField), &PY_TYPE_DEF(FractionField), module, "FractionField", 0);
      }

      void t_FractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "class_", make_descriptor(FractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "wrapfn_", make_descriptor(t_FractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionField::initializeClass, 1)))
          return NULL;
        return t_FractionField::wrap_Object(FractionField(((t_FractionField *) arg)->object.this$));
      }
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FractionField_getInstance(PyTypeObject *type)
      {
        FractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::FractionField::getInstance());
        return t_FractionField::wrap_Object(result);
      }

      static PyObject *t_FractionField_getOne(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
      }

      static PyObject *t_FractionField_getZero(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data)
      {
        FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_FractionField::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonCovarianceMatrixProvider::mids$ = NULL;
        bool PythonCovarianceMatrixProvider::live$ = false;

        jclass PythonCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getInitialCovarianceMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_70abd86226561523] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonCovarianceMatrixProvider::PythonCovarianceMatrixProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonCovarianceMatrixProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self);
        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonCovarianceMatrixProvider, t_PythonCovarianceMatrixProvider, PythonCovarianceMatrixProvider);

        void t_PythonCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonCovarianceMatrixProvider), &PY_TYPE_DEF(PythonCovarianceMatrixProvider), module, "PythonCovarianceMatrixProvider", 1);
        }

        void t_PythonCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "class_", make_descriptor(PythonCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0 },
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1 },
            { "pythonDecRef", "()V", (void *) t_PythonCovarianceMatrixProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonCovarianceMatrixProvider::wrap_Object(PythonCovarianceMatrixProvider(((t_PythonCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonCovarianceMatrixProvider object((jobject) NULL);

          INT_CALL(object = PythonCovarianceMatrixProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInitialCovarianceMatrix", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getInitialCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/utils/LegendrePolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LegendrePolynomials::class$ = NULL;
      jmethodID *LegendrePolynomials::mids$ = NULL;
      bool LegendrePolynomials::live$ = false;

      jclass LegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e98d7b3e971b6087] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_getPnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getPnm", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LegendrePolynomials::LegendrePolynomials(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e98d7b3e971b6087, a0, a1, a2)) {}

      jdouble LegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPnm_6d920aab27f0a3d2], a0, a1);
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
      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args);

      static PyMethodDef t_LegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_LegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LegendrePolynomials)[] = {
        { Py_tp_methods, t_LegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_LegendrePolynomials_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LegendrePolynomials, t_LegendrePolynomials, LegendrePolynomials);

      void t_LegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(LegendrePolynomials), &PY_TYPE_DEF(LegendrePolynomials), module, "LegendrePolynomials", 0);
      }

      void t_LegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "class_", make_descriptor(LegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "wrapfn_", make_descriptor(t_LegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_LegendrePolynomials::wrap_Object(LegendrePolynomials(((t_LegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        jdouble a2;
        LegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          INT_CALL(object = LegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagator::class$ = NULL;
          jmethodID *GNSSPropagator::mids$ = NULL;
          bool GNSSPropagator::live$ = false;

          jclass GNSSPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_cb151471db4570f0] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_cb151471db4570f0] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_9981f74b2d109da6] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getOrbitalElements_13476697309f7107] = env->getMethodID(cls, "getOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;");
              mids$[mid_propagateInEcef_37ec40ec795d4b0a] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          jdouble GNSSPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_9981f74b2d109da6]);
          }

          ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements GNSSPropagator::getOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getOrbitalElements_13476697309f7107]));
          }

          ::org::orekit::utils::PVCoordinates GNSSPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_37ec40ec795d4b0a], a0.this$));
          }

          void GNSSPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg);
          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data);
          static PyGetSetDef t_GNSSPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GNSSPropagator, eCEF),
            DECLARE_GET_FIELD(t_GNSSPropagator, eCI),
            DECLARE_GET_FIELD(t_GNSSPropagator, frame),
            DECLARE_GET_FIELD(t_GNSSPropagator, mU),
            DECLARE_GET_FIELD(t_GNSSPropagator, orbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GNSSPropagator__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GNSSPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GNSSPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagator)[] = {
            { Py_tp_methods, t_GNSSPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GNSSPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GNSSPropagator, t_GNSSPropagator, GNSSPropagator);

          void t_GNSSPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagator), &PY_TYPE_DEF(GNSSPropagator), module, "GNSSPropagator", 0);
          }

          void t_GNSSPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "class_", make_descriptor(GNSSPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "wrapfn_", make_descriptor(t_GNSSPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagator::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagator::wrap_Object(GNSSPropagator(((t_GNSSPropagator *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedInternalError::class$ = NULL;
        jmethodID *RuggedInternalError::mids$ = NULL;
        bool RuggedInternalError::live$ = false;

        jclass RuggedInternalError::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedInternalError");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
            mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedInternalError::RuggedInternalError(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

        ::java::lang::String RuggedInternalError::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
        }

        ::java::lang::String RuggedInternalError::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
        }

        ::java::lang::String RuggedInternalError::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedInternalError::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
        }

        ::org::hipparchus::exception::Localizable RuggedInternalError::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      namespace errors {
        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data);
        static PyGetSetDef t_RuggedInternalError__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedInternalError, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedInternalError, message),
          DECLARE_GET_FIELD(t_RuggedInternalError, parts),
          DECLARE_GET_FIELD(t_RuggedInternalError, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedInternalError__methods_[] = {
          DECLARE_METHOD(t_RuggedInternalError, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedInternalError, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedInternalError)[] = {
          { Py_tp_methods, t_RuggedInternalError__methods_ },
          { Py_tp_init, (void *) t_RuggedInternalError_init_ },
          { Py_tp_getset, t_RuggedInternalError__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedInternalError)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedInternalError, t_RuggedInternalError, RuggedInternalError);

        void t_RuggedInternalError::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedInternalError), &PY_TYPE_DEF(RuggedInternalError), module, "RuggedInternalError", 0);
        }

        void t_RuggedInternalError::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "class_", make_descriptor(RuggedInternalError::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "wrapfn_", make_descriptor(t_RuggedInternalError::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedInternalError::initializeClass, 1)))
            return NULL;
          return t_RuggedInternalError::wrap_Object(RuggedInternalError(((t_RuggedInternalError *) arg)->object.this$));
        }
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedInternalError::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuggedInternalError object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuggedInternalError(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args)
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

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScales::class$ = NULL;
      jmethodID *PythonTimeScales::mids$ = NULL;
      bool PythonTimeScales::live$ = false;

      jclass PythonTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_9d93fd70217d9218] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_80e11148db499dda] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_80e11148db499dda] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_80e11148db499dda] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_80e11148db499dda] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_98a4c7e041a431de] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_3a2e75d759160885] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_bfc706ac1880dab6] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_03bea9e4eca66482] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_80e11148db499dda] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_80e11148db499dda] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_80e11148db499dda] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_4011a9310ce86043] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_80e11148db499dda] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_80e11148db499dda] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_80e11148db499dda] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_80e11148db499dda] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_af6710830d0f02e7] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_80e11148db499dda] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_617450d859ecaf8d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_0a0f63c3aa49765d] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_d96035eea3611111] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_cfeb575714faef31] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_3b674fc7b42c8f62] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_ff99e037ad2c3870] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_bdbc31f45ed399a7] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScales::PythonTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeScales::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self);
      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data);
      static PyGetSetDef t_PythonTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScales)[] = {
        { Py_tp_methods, t_PythonTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScales_init_ },
        { Py_tp_getset, t_PythonTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScales, t_PythonTimeScales, PythonTimeScales);

      void t_PythonTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScales), &PY_TYPE_DEF(PythonTimeScales), module, "PythonTimeScales", 1);
      }

      void t_PythonTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "class_", make_descriptor(PythonTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "wrapfn_", make_descriptor(t_PythonTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createBesselianEpoch0 },
          { "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createJulianEpoch1 },
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonTimeScales_getBDT2 },
          { "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getBeidouEpoch3 },
          { "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getCcsdsEpoch4 },
          { "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFiftiesEpoch5 },
          { "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFutureInfinity6 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonTimeScales_getGLONASS7 },
          { "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;", (void *) t_PythonTimeScales_getGMST8 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonTimeScales_getGPS9 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonTimeScales_getGST10 },
          { "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGalileoEpoch11 },
          { "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGlonassEpoch12 },
          { "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGpsEpoch13 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonTimeScales_getIRNSS14 },
          { "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getIrnssEpoch15 },
          { "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJ2000Epoch16 },
          { "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJavaEpoch17 },
          { "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJulianEpoch18 },
          { "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getModifiedJulianEpoch19 },
          { "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getPastInfinity20 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonTimeScales_getQZSS21 },
          { "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getQzssEpoch22 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonTimeScales_getTAI23 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonTimeScales_getTCB24 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonTimeScales_getTCG25 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonTimeScales_getTDB26 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonTimeScales_getTT27 },
          { "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;", (void *) t_PythonTimeScales_getUT128 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonTimeScales_getUTC29 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScales_pythonDecRef30 },
        };
        env->registerNatives(cls, methods, 31);
      }

      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScales::wrap_Object(PythonTimeScales(((t_PythonTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScales object((jobject) NULL);

        INT_CALL(object = PythonTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createBesselianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createBesselianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createJulianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBeidouEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getBeidouEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCcsdsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getCcsdsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFiftiesEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFiftiesEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFutureInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFutureInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GMSTScale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGMST", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GMSTScale::initializeClass, &value))
        {
          throwTypeError("getGMST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGalileoEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGalileoEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGlonassEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGlonassEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGpsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGpsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIrnssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getIrnssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJ2000Epoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJ2000Epoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJavaEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJavaEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getModifiedJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getModifiedJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPastInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getPastInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQzssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getQzssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UT1Scale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getUT1", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UT1Scale::initializeClass, &value))
        {
          throwTypeError("getUT1", result);
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

      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonIntegrator::mids$ = NULL;
        bool AdamsMoultonIntegrator::live$ = false;

        jclass AdamsMoultonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cf4807ec2bf81436] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_a1282fa5ba2ed7b2] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_37b70b019b7ede26] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_26e1f9270ed9200b] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cf4807ec2bf81436, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1282fa5ba2ed7b2, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsMoultonIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegrator, t_AdamsMoultonIntegrator, AdamsMoultonIntegrator);

        void t_AdamsMoultonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegrator), &PY_TYPE_DEF(AdamsMoultonIntegrator), module, "AdamsMoultonIntegrator", 0);
        }

        void t_AdamsMoultonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "class_", make_descriptor(AdamsMoultonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegrator::wrap_Object(AdamsMoultonIntegrator(((t_AdamsMoultonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Data::class$ = NULL;
              jmethodID *SsrIgm07Data::mids$ = NULL;
              bool SsrIgm07Data::live$ = false;

              jclass SsrIgm07Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSsrUra_9981f74b2d109da6] = env->getMethodID(cls, "getSsrUra", "()D");
                  mids$[mid_setSsrUra_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSsrUra", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Data::SsrIgm07Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble SsrIgm07Data::getSsrUra() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSsrUra_9981f74b2d109da6]);
              }

              void SsrIgm07Data::setSsrUra(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUra_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self);
              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg);
              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data);
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm07Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm07Data, ssrUra),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, getSsrUra, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm07Data, setSsrUra, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Data)[] = {
                { Py_tp_methods, t_SsrIgm07Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Data_init_ },
                { Py_tp_getset, t_SsrIgm07Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Data, t_SsrIgm07Data, SsrIgm07Data);

              void t_SsrIgm07Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Data), &PY_TYPE_DEF(SsrIgm07Data), module, "SsrIgm07Data", 0);
              }

              void t_SsrIgm07Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "class_", make_descriptor(SsrIgm07Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "wrapfn_", make_descriptor(t_SsrIgm07Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Data::wrap_Object(SsrIgm07Data(((t_SsrIgm07Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Data object((jobject) NULL);

                INT_CALL(object = SsrIgm07Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSsrUra());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSsrUra(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUra", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSsrUra());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSsrUra(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUra", arg);
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
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCycleSlipDetector::class$ = NULL;
          jmethodID *GeometryFreeCycleSlipDetector::mids$ = NULL;
          bool GeometryFreeCycleSlipDetector::live$ = false;

          jclass GeometryFreeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
              mids$[mid_manageData_d75e9b743ecf20cb] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometryFreeCycleSlipDetector::GeometryFreeCycleSlipDetector(jdouble a0, jdouble a1, jint a2) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}
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
          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_GeometryFreeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCycleSlipDetector)[] = {
            { Py_tp_methods, t_GeometryFreeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_GeometryFreeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCycleSlipDetector, t_GeometryFreeCycleSlipDetector, GeometryFreeCycleSlipDetector);

          void t_GeometryFreeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCycleSlipDetector), &PY_TYPE_DEF(GeometryFreeCycleSlipDetector), module, "GeometryFreeCycleSlipDetector", 0);
          }

          void t_GeometryFreeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "class_", make_descriptor(GeometryFreeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "wrapfn_", make_descriptor(t_GeometryFreeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCycleSlipDetector::wrap_Object(GeometryFreeCycleSlipDetector(((t_GeometryFreeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            GeometryFreeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = GeometryFreeCycleSlipDetector(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposer::class$ = NULL;
      jmethodID *QRDecomposer::mids$ = NULL;
      bool QRDecomposer::live$ = false;

      jclass QRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_b099faee6eb73725] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposer::QRDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver QRDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b099faee6eb73725], a0.this$));
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
      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg);

      static PyMethodDef t_QRDecomposer__methods_[] = {
        DECLARE_METHOD(t_QRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposer)[] = {
        { Py_tp_methods, t_QRDecomposer__methods_ },
        { Py_tp_init, (void *) t_QRDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposer, t_QRDecomposer, QRDecomposer);

      void t_QRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposer), &PY_TYPE_DEF(QRDecomposer), module, "QRDecomposer", 0);
      }

      void t_QRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "class_", make_descriptor(QRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "wrapfn_", make_descriptor(t_QRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposer::initializeClass, 1)))
          return NULL;
        return t_QRDecomposer::wrap_Object(QRDecomposer(((t_QRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        QRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = QRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *BasicScanAlgorithm::class$ = NULL;
        jmethodID *BasicScanAlgorithm::mids$ = NULL;
        bool BasicScanAlgorithm::live$ = false;

        jclass BasicScanAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/BasicScanAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f10a69e726e4177] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BasicScanAlgorithm::BasicScanAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f10a69e726e4177, a0.this$, a1)) {}

        ::org::orekit::rugged::api::AlgorithmId BasicScanAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
        }

        jdouble BasicScanAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_82f92590f4247da1], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_5c14acfe95406f7d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_1feab13663326a32], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self);
        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data);
        static PyGetSetDef t_BasicScanAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_BasicScanAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BasicScanAlgorithm__methods_[] = {
          DECLARE_METHOD(t_BasicScanAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BasicScanAlgorithm)[] = {
          { Py_tp_methods, t_BasicScanAlgorithm__methods_ },
          { Py_tp_init, (void *) t_BasicScanAlgorithm_init_ },
          { Py_tp_getset, t_BasicScanAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BasicScanAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BasicScanAlgorithm, t_BasicScanAlgorithm, BasicScanAlgorithm);

        void t_BasicScanAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(BasicScanAlgorithm), &PY_TYPE_DEF(BasicScanAlgorithm), module, "BasicScanAlgorithm", 0);
        }

        void t_BasicScanAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "class_", make_descriptor(BasicScanAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "wrapfn_", make_descriptor(t_BasicScanAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BasicScanAlgorithm::initializeClass, 1)))
            return NULL;
          return t_BasicScanAlgorithm::wrap_Object(BasicScanAlgorithm(((t_BasicScanAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BasicScanAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          BasicScanAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BasicScanAlgorithm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *EventBasedScheduler::class$ = NULL;
          jmethodID *EventBasedScheduler::mids$ = NULL;
          bool EventBasedScheduler::live$ = false;

          jclass EventBasedScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/EventBasedScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fed56dbe8df3f5eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;Lorg/orekit/propagation/Propagator;Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/estimation/measurements/generation/SignSemantic;)V");
              mids$[mid_measurementIsFeasible_b16e79ba1b2830a1] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventBasedScheduler::EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1, const ::org::orekit::propagation::Propagator & a2, const ::org::orekit::propagation::events::EventDetector & a3, const ::org::orekit::estimation::measurements::generation::SignSemantic & a4) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_fed56dbe8df3f5eb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          jboolean EventBasedScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
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
          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args);
          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg);
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data);
          static PyGetSetDef t_EventBasedScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_EventBasedScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventBasedScheduler__methods_[] = {
            DECLARE_METHOD(t_EventBasedScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_EventBasedScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventBasedScheduler)[] = {
            { Py_tp_methods, t_EventBasedScheduler__methods_ },
            { Py_tp_init, (void *) t_EventBasedScheduler_init_ },
            { Py_tp_getset, t_EventBasedScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventBasedScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(EventBasedScheduler, t_EventBasedScheduler, EventBasedScheduler);
          PyObject *t_EventBasedScheduler::wrap_Object(const EventBasedScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_EventBasedScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_EventBasedScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventBasedScheduler), &PY_TYPE_DEF(EventBasedScheduler), module, "EventBasedScheduler", 0);
          }

          void t_EventBasedScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "class_", make_descriptor(EventBasedScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "wrapfn_", make_descriptor(t_EventBasedScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventBasedScheduler::initializeClass, 1)))
              return NULL;
            return t_EventBasedScheduler::wrap_Object(EventBasedScheduler(((t_EventBasedScheduler *) arg)->object.this$));
          }
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventBasedScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ::org::orekit::propagation::Propagator a2((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a3((jobject) NULL);
            ::org::orekit::estimation::measurements::generation::SignSemantic a4((jobject) NULL);
            PyTypeObject **p4;
            EventBasedScheduler object((jobject) NULL);

            if (!parseArgs(args, "KkkkK", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::estimation::measurements::generation::SignSemantic::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::estimation::measurements::generation::t_SignSemantic::parameters_))
            {
              INT_CALL(object = EventBasedScheduler(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg)
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
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data)
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
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *SpearmansCorrelation::class$ = NULL;
        jmethodID *SpearmansCorrelation::mids$ = NULL;
        bool SpearmansCorrelation::live$ = false;

        jclass SpearmansCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/SpearmansCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_7c82bee8641041b5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_init$_fa062ba757b6dac9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_computeCorrelationMatrix_a50478fa84afaa43] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b01af8a77d4df96f] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getRankCorrelation_448a70db688c59e3] = env->getMethodID(cls, "getRankCorrelation", "()Lorg/hipparchus/stat/correlation/PearsonsCorrelation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpearmansCorrelation::SpearmansCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c82bee8641041b5, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::stat::ranking::RankingAlgorithm & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa062ba757b6dac9, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_a50478fa84afaa43], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7], a0.this$));
        }

        jdouble SpearmansCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::stat::correlation::PearsonsCorrelation SpearmansCorrelation::getRankCorrelation() const
        {
          return ::org::hipparchus::stat::correlation::PearsonsCorrelation(env->callObjectMethod(this$, mids$[mid_getRankCorrelation_448a70db688c59e3]));
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
      namespace correlation {
        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data);
        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data);
        static PyGetSetDef t_SpearmansCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_SpearmansCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_SpearmansCorrelation, rankCorrelation),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpearmansCorrelation__methods_[] = {
          DECLARE_METHOD(t_SpearmansCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getRankCorrelation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpearmansCorrelation)[] = {
          { Py_tp_methods, t_SpearmansCorrelation__methods_ },
          { Py_tp_init, (void *) t_SpearmansCorrelation_init_ },
          { Py_tp_getset, t_SpearmansCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpearmansCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpearmansCorrelation, t_SpearmansCorrelation, SpearmansCorrelation);

        void t_SpearmansCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(SpearmansCorrelation), &PY_TYPE_DEF(SpearmansCorrelation), module, "SpearmansCorrelation", 0);
        }

        void t_SpearmansCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "class_", make_descriptor(SpearmansCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "wrapfn_", make_descriptor(t_SpearmansCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpearmansCorrelation::initializeClass, 1)))
            return NULL;
          return t_SpearmansCorrelation::wrap_Object(SpearmansCorrelation(((t_SpearmansCorrelation *) arg)->object.this$));
        }
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpearmansCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SpearmansCorrelation object((jobject) NULL);

              INT_CALL(object = SpearmansCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::RankingAlgorithm a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::stat::ranking::RankingAlgorithm a1((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SpearmansCorrelation(a0, a1));
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

        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation result((jobject) NULL);
          OBJ_CALL(result = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation value((jobject) NULL);
          OBJ_CALL(value = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(value);
        }
      }
    }
  }
}
