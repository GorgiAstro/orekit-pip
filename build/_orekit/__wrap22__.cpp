#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SystemTimeOffsetMessage::class$ = NULL;
          jmethodID *SystemTimeOffsetMessage::mids$ = NULL;
          bool SystemTimeOffsetMessage::live$ = false;

          jclass SystemTimeOffsetMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SystemTimeOffsetMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getA0_557b8123390d8d0c] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_557b8123390d8d0c] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getA2_557b8123390d8d0c] = env->getMethodID(cls, "getA2", "()D");
              mids$[mid_getDefinedTimeSystem_2700635415605e4d] = env->getMethodID(cls, "getDefinedTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getReferenceEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceTimeSystem_2700635415605e4d] = env->getMethodID(cls, "getReferenceTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getSbasId_f14deef4f5ae913f] = env->getMethodID(cls, "getSbasId", "()Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_getTransmissionTime_557b8123390d8d0c] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getUtcId_1187194f96ded63f] = env->getMethodID(cls, "getUtcId", "()Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_setA0_10f281d777284cea] = env->getMethodID(cls, "setA0", "(D)V");
              mids$[mid_setA1_10f281d777284cea] = env->getMethodID(cls, "setA1", "(D)V");
              mids$[mid_setA2_10f281d777284cea] = env->getMethodID(cls, "setA2", "(D)V");
              mids$[mid_setDefinedTimeSystem_562aaa7511f66c1c] = env->getMethodID(cls, "setDefinedTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setReferenceEpoch_20affcbd28542333] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setReferenceTimeSystem_562aaa7511f66c1c] = env->getMethodID(cls, "setReferenceTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setSbasId_631a985e246bff70] = env->getMethodID(cls, "setSbasId", "(Lorg/orekit/files/rinex/navigation/SbasId;)V");
              mids$[mid_setTransmissionTime_10f281d777284cea] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setUtcId_43c2027d5aaa2ca7] = env->getMethodID(cls, "setUtcId", "(Lorg/orekit/files/rinex/navigation/UtcId;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SystemTimeOffsetMessage::SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          jdouble SystemTimeOffsetMessage::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_557b8123390d8d0c]);
          }

          jdouble SystemTimeOffsetMessage::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_557b8123390d8d0c]);
          }

          jdouble SystemTimeOffsetMessage::getA2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA2_557b8123390d8d0c]);
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getDefinedTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getDefinedTimeSystem_2700635415605e4d]));
          }

          ::org::orekit::time::AbsoluteDate SystemTimeOffsetMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_7a97f7e149e79afb]));
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getReferenceTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getReferenceTimeSystem_2700635415605e4d]));
          }

          ::org::orekit::files::rinex::navigation::SbasId SystemTimeOffsetMessage::getSbasId() const
          {
            return ::org::orekit::files::rinex::navigation::SbasId(env->callObjectMethod(this$, mids$[mid_getSbasId_f14deef4f5ae913f]));
          }

          jdouble SystemTimeOffsetMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_557b8123390d8d0c]);
          }

          ::org::orekit::files::rinex::navigation::UtcId SystemTimeOffsetMessage::getUtcId() const
          {
            return ::org::orekit::files::rinex::navigation::UtcId(env->callObjectMethod(this$, mids$[mid_getUtcId_1187194f96ded63f]));
          }

          void SystemTimeOffsetMessage::setA0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA0_10f281d777284cea], a0);
          }

          void SystemTimeOffsetMessage::setA1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA1_10f281d777284cea], a0);
          }

          void SystemTimeOffsetMessage::setA2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA2_10f281d777284cea], a0);
          }

          void SystemTimeOffsetMessage::setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDefinedTimeSystem_562aaa7511f66c1c], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_20affcbd28542333], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceTimeSystem_562aaa7511f66c1c], a0.this$);
          }

          void SystemTimeOffsetMessage::setSbasId(const ::org::orekit::files::rinex::navigation::SbasId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSbasId_631a985e246bff70], a0.this$);
          }

          void SystemTimeOffsetMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_10f281d777284cea], a0);
          }

          void SystemTimeOffsetMessage::setUtcId(const ::org::orekit::files::rinex::navigation::UtcId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setUtcId_43c2027d5aaa2ca7], a0.this$);
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
          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_SystemTimeOffsetMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a0),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a1),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a2),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, definedTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, sbasId),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, utcId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SystemTimeOffsetMessage__methods_[] = {
            DECLARE_METHOD(t_SystemTimeOffsetMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA2, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getDefinedTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getSbasId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getUtcId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA0, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA1, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA2, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setDefinedTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setSbasId, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setUtcId, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SystemTimeOffsetMessage)[] = {
            { Py_tp_methods, t_SystemTimeOffsetMessage__methods_ },
            { Py_tp_init, (void *) t_SystemTimeOffsetMessage_init_ },
            { Py_tp_getset, t_SystemTimeOffsetMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SystemTimeOffsetMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(SystemTimeOffsetMessage, t_SystemTimeOffsetMessage, SystemTimeOffsetMessage);

          void t_SystemTimeOffsetMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(SystemTimeOffsetMessage), &PY_TYPE_DEF(SystemTimeOffsetMessage), module, "SystemTimeOffsetMessage", 0);
          }

          void t_SystemTimeOffsetMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "class_", make_descriptor(SystemTimeOffsetMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "wrapfn_", make_descriptor(t_SystemTimeOffsetMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SystemTimeOffsetMessage::initializeClass, 1)))
              return NULL;
            return t_SystemTimeOffsetMessage::wrap_Object(SystemTimeOffsetMessage(((t_SystemTimeOffsetMessage *) arg)->object.this$));
          }
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SystemTimeOffsetMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            SystemTimeOffsetMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = SystemTimeOffsetMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::SbasId result((jobject) NULL);
            OBJ_CALL(result = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::UtcId result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA0", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA1", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA2", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setDefinedTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDefinedTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setReferenceTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SbasId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_SbasId::parameters_))
            {
              OBJ_CALL(self->object.setSbasId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSbasId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::UtcId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_UtcId::parameters_))
            {
              OBJ_CALL(self->object.setUtcId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setUtcId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a0", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a1", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a2", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setDefinedTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "definedTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
            OBJ_CALL(value = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &value))
              {
                INT_CALL(self->object.setSbasId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sbasId", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &value))
              {
                INT_CALL(self->object.setUtcId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "utcId", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposer::class$ = NULL;
      jmethodID *LUDecomposer::mids$ = NULL;
      bool LUDecomposer::live$ = false;

      jclass LUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_3f89101650640015] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposer::LUDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver LUDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_3f89101650640015], a0.this$));
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
      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg);

      static PyMethodDef t_LUDecomposer__methods_[] = {
        DECLARE_METHOD(t_LUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposer)[] = {
        { Py_tp_methods, t_LUDecomposer__methods_ },
        { Py_tp_init, (void *) t_LUDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposer, t_LUDecomposer, LUDecomposer);

      void t_LUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposer), &PY_TYPE_DEF(LUDecomposer), module, "LUDecomposer", 0);
      }

      void t_LUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "class_", make_descriptor(LUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "wrapfn_", make_descriptor(t_LUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposer::initializeClass, 1)))
          return NULL;
        return t_LUDecomposer::wrap_Object(LUDecomposer(((t_LUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        LUDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = LUDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg)
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
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateNormalDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateNormalDistribution::mids$ = NULL;
        bool MixtureMultivariateNormalDistribution::live$ = false;

        jclass MixtureMultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_6ec0adca852af91a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_init$_afdc84ae249d04a9] = env->getMethodID(cls, "<init>", "([D[[D[[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_6ec0adca852af91a, a0.this$, a1.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< JArray< jdouble > > > & a2) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_afdc84ae249d04a9, a0.this$, a1.this$, a2.this$)) {}
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args);
        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateNormalDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateNormalDistribution, t_MixtureMultivariateNormalDistribution, MixtureMultivariateNormalDistribution);
        PyObject *t_MixtureMultivariateNormalDistribution::wrap_Object(const MixtureMultivariateNormalDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateNormalDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateNormalDistribution), &PY_TYPE_DEF(MixtureMultivariateNormalDistribution), module, "MixtureMultivariateNormalDistribution", 0);
        }

        void t_MixtureMultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "class_", make_descriptor(MixtureMultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateNormalDistribution::wrap_Object(MixtureMultivariateNormalDistribution(((t_MixtureMultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< JArray< jdouble > > > a2((jobject) NULL);
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D[[[D", &a0, &a1, &a2))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
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
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *SmallManeuverAnalyticalModel::class$ = NULL;
        jmethodID *SmallManeuverAnalyticalModel::mids$ = NULL;
        bool SmallManeuverAnalyticalModel::live$ = false;

        jclass SmallManeuverAnalyticalModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_76b1012746817507] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_5e6ac11ce0e39e22] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_apply_f66341a46b0a495a] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_2c4cc16b11f79a6c] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialDV_f88961cca75a2c0a] = env->getMethodID(cls, "getInertialDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getJacobian_032b4d4d2c7f6c6c] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[[D)V");
            mids$[mid_updateMass_7e960cd6eee376d8] = env->getMethodID(cls, "updateMass", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76b1012746817507, a0.this$, a1.this$, a2)) {}

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e6ac11ce0e39e22, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::orbits::Orbit SmallManeuverAnalyticalModel::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_f66341a46b0a495a], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState SmallManeuverAnalyticalModel::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_2c4cc16b11f79a6c], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SmallManeuverAnalyticalModel::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmallManeuverAnalyticalModel::getInertialDV() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getInertialDV_f88961cca75a2c0a]));
        }

        ::org::orekit::frames::Frame SmallManeuverAnalyticalModel::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
        }

        void SmallManeuverAnalyticalModel::getJacobian(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_getJacobian_032b4d4d2c7f6c6c], a0.this$, a1.this$, a2.this$);
        }

        jdouble SmallManeuverAnalyticalModel::updateMass(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_updateMass_7e960cd6eee376d8], a0);
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
        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyGetSetDef t_SmallManeuverAnalyticalModel__fields_[] = {
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, date),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialDV),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialFrame),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmallManeuverAnalyticalModel__methods_[] = {
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, apply, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialDV, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getJacobian, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, updateMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmallManeuverAnalyticalModel)[] = {
          { Py_tp_methods, t_SmallManeuverAnalyticalModel__methods_ },
          { Py_tp_init, (void *) t_SmallManeuverAnalyticalModel_init_ },
          { Py_tp_getset, t_SmallManeuverAnalyticalModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmallManeuverAnalyticalModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmallManeuverAnalyticalModel, t_SmallManeuverAnalyticalModel, SmallManeuverAnalyticalModel);

        void t_SmallManeuverAnalyticalModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SmallManeuverAnalyticalModel), &PY_TYPE_DEF(SmallManeuverAnalyticalModel), module, "SmallManeuverAnalyticalModel", 0);
        }

        void t_SmallManeuverAnalyticalModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "class_", make_descriptor(SmallManeuverAnalyticalModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "wrapfn_", make_descriptor(t_SmallManeuverAnalyticalModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 1)))
            return NULL;
          return t_SmallManeuverAnalyticalModel::wrap_Object(SmallManeuverAnalyticalModel(((t_SmallManeuverAnalyticalModel *) arg)->object.this$));
        }
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2, a3));
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

        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "kK[[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
          {
            OBJ_CALL(self->object.getJacobian(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.updateMass(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateMass", arg);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Data::class$ = NULL;
              jmethodID *SsrIgm02Data::mids$ = NULL;
              bool SsrIgm02Data::live$ = false;

              jclass SsrIgm02Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_96d5462b84e1a874] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_cf572ee5ddb143ac] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Data::SsrIgm02Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm02Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_96d5462b84e1a874]));
              }

              void SsrIgm02Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_cf572ee5ddb143ac], a0.this$);
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
              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self);
              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg);
              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data);
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm02Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm02Data, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm02Data, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Data)[] = {
                { Py_tp_methods, t_SsrIgm02Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Data_init_ },
                { Py_tp_getset, t_SsrIgm02Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Data, t_SsrIgm02Data, SsrIgm02Data);

              void t_SsrIgm02Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Data), &PY_TYPE_DEF(SsrIgm02Data), module, "SsrIgm02Data", 0);
              }

              void t_SsrIgm02Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "class_", make_descriptor(SsrIgm02Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "wrapfn_", make_descriptor(t_SsrIgm02Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Data::wrap_Object(SsrIgm02Data(((t_SsrIgm02Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Data object((jobject) NULL);

                INT_CALL(object = SsrIgm02Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
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
#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "java/lang/Class.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *AbstractFieldOfView::class$ = NULL;
        jmethodID *AbstractFieldOfView::mids$ = NULL;
        bool AbstractFieldOfView::live$ = false;

        jclass AbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/AbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMargin_557b8123390d8d0c] = env->getMethodID(cls, "getMargin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractFieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_557b8123390d8d0c]);
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
        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self);
        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data);
        static PyGetSetDef t_AbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, getMargin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOfView)[] = {
          { Py_tp_methods, t_AbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldOfView, t_AbstractFieldOfView, AbstractFieldOfView);

        void t_AbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldOfView), &PY_TYPE_DEF(AbstractFieldOfView), module, "AbstractFieldOfView", 0);
        }

        void t_AbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "class_", make_descriptor(AbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "wrapfn_", make_descriptor(t_AbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldOfView::wrap_Object(AbstractFieldOfView(((t_AbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/PoleCorrection.h"
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
          mids$[mid_init$_fab96ebbb42599e8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;ILjava/util/Collection;ZLorg/orekit/time/TimeScales;)V");
          mids$[mid_cachesTidalCorrection_89b302893bdbe1f1] = env->getMethodID(cls, "cachesTidalCorrection", "()Z");
          mids$[mid_checkEOPContinuity_10f281d777284cea] = env->getMethodID(cls, "checkEOPContinuity", "(D)V");
          mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_9a64cc378cf7ab6b] = env->getMethodID(cls, "getEOPHistoryWithoutCachedTidalCorrection", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEndDate_7a97f7e149e79afb] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEntries_0d9551367f7ecdef] = env->getMethodID(cls, "getEntries", "()Ljava/util/List;");
          mids$[mid_getEquinoxNutationCorrection_89e8b78e4211e023] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getEquinoxNutationCorrection_f77452810420dd04] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getITRFVersion_df72f6fe6d5dd352] = env->getMethodID(cls, "getITRFVersion", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationDegree", "()I");
          mids$[mid_getLOD_b0b988f941da47d8] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLOD_b884068a2c99f6ca] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNonRotatinOriginNutationCorrection_89e8b78e4211e023] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getNonRotatinOriginNutationCorrection_f77452810420dd04] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPoleCorrection_2c5aebecdb63e56e] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/PoleCorrection;");
          mids$[mid_getPoleCorrection_edfb8c5443b93454] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldPoleCorrection;");
          mids$[mid_getStartDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTimeScales_ac9ef17f951ae11a] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_getUT1MinusUTC_b0b988f941da47d8] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getUT1MinusUTC_b884068a2c99f6ca] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_isSimpleEop_89b302893bdbe1f1] = env->getMethodID(cls, "isSimpleEop", "()Z");
          mids$[mid_hasDataFor_981023bfa4a8a093] = env->getMethodID(cls, "hasDataFor", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_getNeighbors_b9470a4d1609cf1f] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPHistory::EOPHistory(const ::org::orekit::utils::IERSConventions & a0, jint a1, const ::java::util::Collection & a2, jboolean a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fab96ebbb42599e8, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      jboolean EOPHistory::cachesTidalCorrection() const
      {
        return env->callBooleanMethod(this$, mids$[mid_cachesTidalCorrection_89b302893bdbe1f1]);
      }

      void EOPHistory::checkEOPContinuity(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_checkEOPContinuity_10f281d777284cea], a0);
      }

      ::org::orekit::utils::IERSConventions EOPHistory::getConventions() const
      {
        return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_690653480c12ac72]));
      }

      EOPHistory EOPHistory::getEOPHistoryWithoutCachedTidalCorrection() const
      {
        return EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_9a64cc378cf7ab6b]));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getEndDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_7a97f7e149e79afb]));
      }

      ::java::util::List EOPHistory::getEntries() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEntries_0d9551367f7ecdef]));
      }

      JArray< jdouble > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_89e8b78e4211e023], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_f77452810420dd04], a0.this$));
      }

      ::org::orekit::frames::ITRFVersion EOPHistory::getITRFVersion(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_df72f6fe6d5dd352], a0.this$));
      }

      jint EOPHistory::getInterpolationDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_412668abc8d889e9]);
      }

      jdouble EOPHistory::getLOD(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getLOD(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLOD_b884068a2c99f6ca], a0.this$));
      }

      JArray< jdouble > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_89e8b78e4211e023], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_f77452810420dd04], a0.this$));
      }

      ::org::orekit::frames::PoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::PoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_2c5aebecdb63e56e], a0.this$));
      }

      ::org::orekit::frames::FieldPoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldPoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_edfb8c5443b93454], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getStartDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::TimeScales EOPHistory::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_ac9ef17f951ae11a]));
      }

      jdouble EOPHistory::getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUT1MinusUTC_b884068a2c99f6ca], a0.this$));
      }

      jboolean EOPHistory::isSimpleEop() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSimpleEop_89b302893bdbe1f1]);
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
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouGeo::class$ = NULL;
        jmethodID *BeidouGeo::mids$ = NULL;
        bool BeidouGeo::live$ = false;

        jclass BeidouGeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouGeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9803b569bb20b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouGeo::BeidouGeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c9803b569bb20b21, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouGeo__methods_[] = {
          DECLARE_METHOD(t_BeidouGeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouGeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouGeo)[] = {
          { Py_tp_methods, t_BeidouGeo__methods_ },
          { Py_tp_init, (void *) t_BeidouGeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouGeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouGeo, t_BeidouGeo, BeidouGeo);

        void t_BeidouGeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouGeo), &PY_TYPE_DEF(BeidouGeo), module, "BeidouGeo", 0);
        }

        void t_BeidouGeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "class_", make_descriptor(BeidouGeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "wrapfn_", make_descriptor(t_BeidouGeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouGeo::initializeClass, 1)))
            return NULL;
          return t_BeidouGeo::wrap_Object(BeidouGeo(((t_BeidouGeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouGeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouGeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouGeo(a0, a1, a2, a3));
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
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLowestAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getLowestAltitude", "()D");
            mids$[mid_getRefractiveIndex_557b8123390d8d0c] = env->getMethodID(cls, "getRefractiveIndex", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRefractionLayer::ConstantRefractionLayer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble ConstantRefractionLayer::getLowestAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowestAltitude_557b8123390d8d0c]);
        }

        jdouble ConstantRefractionLayer::getRefractiveIndex() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefractiveIndex_557b8123390d8d0c]);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4C::class$ = NULL;
          jmethodID *SubFrame4C::mids$ = NULL;
          bool SubFrame4C::live$ = false;
          jint SubFrame4C::NB_ERD = (jint) 0;

          jclass SubFrame4C::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4C");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getERD_0092017e99012694] = env->getMethodID(cls, "getERD", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_ERD = env->getStaticIntField(cls, "NB_ERD");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4C::getERD(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getERD_0092017e99012694], a0);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg);

          static PyMethodDef t_SubFrame4C__methods_[] = {
            DECLARE_METHOD(t_SubFrame4C, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, getERD, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4C)[] = {
            { Py_tp_methods, t_SubFrame4C__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4C)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4C, t_SubFrame4C, SubFrame4C);

          void t_SubFrame4C::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4C), &PY_TYPE_DEF(SubFrame4C), module, "SubFrame4C", 0);
          }

          void t_SubFrame4C::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "class_", make_descriptor(SubFrame4C::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "wrapfn_", make_descriptor(t_SubFrame4C::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4C::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "NB_ERD", make_descriptor(SubFrame4C::NB_ERD));
          }

          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4C::initializeClass, 1)))
              return NULL;
            return t_SubFrame4C::wrap_Object(SubFrame4C(((t_SubFrame4C *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4C::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getERD(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getERD", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonFieldSDP4::class$ = NULL;
          jmethodID *PythonFieldSDP4::mids$ = NULL;
          bool PythonFieldSDP4::live$ = false;

          jclass PythonFieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonFieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_09515132f38e5487] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepSecularEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_luniSolarTermsComputation_0640e6acf969ed28] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldSDP4::PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_09515132f38e5487, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          void PythonFieldSDP4::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonFieldSDP4::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonFieldSDP4::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args);
          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self);
          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args);
          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data);
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data);
          static PyGetSetDef t_PythonFieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldSDP4, self),
            DECLARE_GET_FIELD(t_PythonFieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldSDP4__methods_[] = {
            DECLARE_METHOD(t_PythonFieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldSDP4)[] = {
            { Py_tp_methods, t_PythonFieldSDP4__methods_ },
            { Py_tp_init, (void *) t_PythonFieldSDP4_init_ },
            { Py_tp_getset, t_PythonFieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(PythonFieldSDP4, t_PythonFieldSDP4, PythonFieldSDP4);
          PyObject *t_PythonFieldSDP4::wrap_Object(const PythonFieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldSDP4), &PY_TYPE_DEF(PythonFieldSDP4), module, "PythonFieldSDP4", 1);
          }

          void t_PythonFieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "class_", make_descriptor(PythonFieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "wrapfn_", make_descriptor(t_PythonFieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldSDP4::initializeClass);
            JNINativeMethod methods[] = {
              { "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepPeriodicEffects0 },
              { "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepSecularEffects1 },
              { "luniSolarTermsComputation", "()V", (void *) t_PythonFieldSDP4_luniSolarTermsComputation2 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldSDP4_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldSDP4::initializeClass, 1)))
              return NULL;
            return t_PythonFieldSDP4::wrap_Object(PythonFieldSDP4(((t_PythonFieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
            PyTypeObject **p4;
            PythonFieldSDP4 object((jobject) NULL);

            if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = PythonFieldSDP4(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args)
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

          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepPeriodicEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepSecularEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "luniSolarTermsComputation", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data)
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
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadata::class$ = NULL;
            jmethodID *OdmMetadata::mids$ = NULL;
            bool OdmMetadata::live$ = false;

            jclass OdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getObjectName_3cffd47377eca18a] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setObjectName_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String OdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_3cffd47377eca18a]));
            }

            void OdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_f5ffdf29129ef90a], a0.this$);
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
            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self);
            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg);
            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data);
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_OdmMetadata, setObjectName, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadata)[] = {
              { Py_tp_methods, t_OdmMetadata__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(OdmMetadata, t_OdmMetadata, OdmMetadata);

            void t_OdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadata), &PY_TYPE_DEF(OdmMetadata), module, "OdmMetadata", 0);
            }

            void t_OdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "class_", make_descriptor(OdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "wrapfn_", make_descriptor(t_OdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmMetadata::wrap_Object(OdmMetadata(((t_OdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
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
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVector::class$ = NULL;
      jmethodID *FieldVector::mids$ = NULL;
      bool FieldVector::live$ = false;

      jclass FieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_a7c6926a425759ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9c0263b78fe30ac4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a7c6926a425759ad] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_f39e0d3c1ce991ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_3954878560819a96] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_a7c6926a425759ad] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_a7c6926a425759ad] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_d40ba91356b6a058] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_6244d57986a4c96a] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
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
          mids$[mid_outerProduct_2284af949fc5e425] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_a7c6926a425759ad] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_b906415fb0b2ba27] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_d23b1b48c6bca206] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_502f8ed205bebebd] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_a7c6926a425759ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_7a985a773168dff8] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldVector FieldVector::add(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_add_a7c6926a425759ad], a0.this$));
      }

      FieldVector FieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::append(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_a7c6926a425759ad], a0.this$));
      }

      FieldVector FieldVector::copy() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_copy_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::FieldElement FieldVector::dotProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_3954878560819a96], a0.this$));
      }

      FieldVector FieldVector::ebeDivide(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a7c6926a425759ad], a0.this$));
      }

      FieldVector FieldVector::ebeMultiply(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a7c6926a425759ad], a0.this$));
      }

      jint FieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::FieldElement FieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d40ba91356b6a058], a0));
      }

      ::org::hipparchus::Field FieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      FieldVector FieldVector::getSubVector(jint a0, jint a1) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_6244d57986a4c96a], a0, a1));
      }

      FieldVector FieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapInv() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_f39e0d3c1ce991ac]));
      }

      FieldVector FieldVector::mapInvToSelf() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_f39e0d3c1ce991ac]));
      }

      FieldVector FieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9c0263b78fe30ac4], a0.this$));
      }

      FieldVector FieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix FieldVector::outerProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_2284af949fc5e425], a0.this$));
      }

      FieldVector FieldVector::projection(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a7c6926a425759ad], a0.this$));
      }

      void FieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_b906415fb0b2ba27], a0.this$);
      }

      void FieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d23b1b48c6bca206], a0, a1.this$);
      }

      void FieldVector::setSubVector(jint a0, const FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_502f8ed205bebebd], a0, a1.this$);
      }

      FieldVector FieldVector::subtract(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a7c6926a425759ad], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_7a985a773168dff8]));
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
      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_copy(t_FieldVector *self);
      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getDimension(t_FieldVector *self);
      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getField(t_FieldVector *self);
      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapInv(t_FieldVector *self);
      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self);
      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_toArray(t_FieldVector *self);
      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data);
      static PyGetSetDef t_FieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVector, dimension),
        DECLARE_GET_FIELD(t_FieldVector, field),
        DECLARE_GET_FIELD(t_FieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVector__methods_[] = {
        DECLARE_METHOD(t_FieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, add, METH_O),
        DECLARE_METHOD(t_FieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_FieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_FieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, outerProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, projection, METH_O),
        DECLARE_METHOD(t_FieldVector, set, METH_O),
        DECLARE_METHOD(t_FieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, subtract, METH_O),
        DECLARE_METHOD(t_FieldVector, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVector)[] = {
        { Py_tp_methods, t_FieldVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVector, t_FieldVector, FieldVector);
      PyObject *t_FieldVector::wrap_Object(const FieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVector), &PY_TYPE_DEF(FieldVector), module, "FieldVector", 0);
      }

      void t_FieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "class_", make_descriptor(FieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "wrapfn_", make_descriptor(t_FieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVector::initializeClass, 1)))
          return NULL;
        return t_FieldVector::wrap_Object(FieldVector(((t_FieldVector *) arg)->object.this$));
      }
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_FieldVector_copy(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getDimension(t_FieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg)
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

      static PyObject *t_FieldVector_getField(t_FieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapInv(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg)
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

      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args)
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

      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldVector::initializeClass, &a0, &a1, &p1, t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_toArray(t_FieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data)
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
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraint::class$ = NULL;
        jmethodID *LinearConstraint::mids$ = NULL;
        bool LinearConstraint::live$ = false;

        jclass LinearConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cfaeb259ce53994e] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_d64ce658cd967d2e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_5e18566fee7e8405] = env->getMethodID(cls, "<init>", "([DDLorg/hipparchus/optim/linear/Relationship;[DD)V");
            mids$[mid_init$_14d5aa8adb640a48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;DLorg/hipparchus/optim/linear/Relationship;Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_75d50d73180655b4] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getRelationship_c55cd9ad2e6d5653] = env->getMethodID(cls, "getRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfaeb259ce53994e, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d64ce658cd967d2e, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const JArray< jdouble > & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e18566fee7e8405, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14d5aa8adb640a48, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        jboolean LinearConstraint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearConstraint::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_75d50d73180655b4]));
        }

        ::org::hipparchus::optim::linear::Relationship LinearConstraint::getRelationship() const
        {
          return ::org::hipparchus::optim::linear::Relationship(env->callObjectMethod(this$, mids$[mid_getRelationship_c55cd9ad2e6d5653]));
        }

        jdouble LinearConstraint::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint LinearConstraint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      namespace linear {
        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data);
        static PyGetSetDef t_LinearConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraint, coefficients),
          DECLARE_GET_FIELD(t_LinearConstraint, relationship),
          DECLARE_GET_FIELD(t_LinearConstraint, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraint__methods_[] = {
          DECLARE_METHOD(t_LinearConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearConstraint, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getRelationship, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getValue, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraint)[] = {
          { Py_tp_methods, t_LinearConstraint__methods_ },
          { Py_tp_init, (void *) t_LinearConstraint_init_ },
          { Py_tp_getset, t_LinearConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraint, t_LinearConstraint, LinearConstraint);

        void t_LinearConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraint), &PY_TYPE_DEF(LinearConstraint), module, "LinearConstraint", 0);
        }

        void t_LinearConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "class_", make_descriptor(LinearConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "wrapfn_", make_descriptor(t_LinearConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraint::initializeClass, 1)))
            return NULL;
          return t_LinearConstraint::wrap_Object(LinearConstraint(((t_LinearConstraint *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DKD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DDK[DD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::linear::RealVector a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kDKkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
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

        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self)
        {
          ::org::hipparchus::optim::linear::Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::optim::linear::Relationship value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/List.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Double.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToSensorMapping::class$ = NULL;
          jmethodID *SensorToSensorMapping::mids$ = NULL;
          bool SensorToSensorMapping::live$ = false;

          jclass SensorToSensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToSensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_9547058464ed819e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_init$_31dd4a79e86cd8aa] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_5bc8249ae26456ff] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_addMapping_72201d4561b44b99] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;)V");
              mids$[mid_addMapping_e7a41d3af7fb492f] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;Ljava/lang/Double;)V");
              mids$[mid_getBodyConstraintWeight_557b8123390d8d0c] = env->getMethodID(cls, "getBodyConstraintWeight", "()D");
              mids$[mid_getBodyDistance_1503150ef9654792] = env->getMethodID(cls, "getBodyDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getBodyDistances_0d9551367f7ecdef] = env->getMethodID(cls, "getBodyDistances", "()Ljava/util/List;");
              mids$[mid_getLosDistance_1503150ef9654792] = env->getMethodID(cls, "getLosDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getLosDistances_0d9551367f7ecdef] = env->getMethodID(cls, "getLosDistances", "()Ljava/util/List;");
              mids$[mid_getMapping_2dfcbd371d62f4e1] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedNameA_3cffd47377eca18a] = env->getMethodID(cls, "getRuggedNameA", "()Ljava/lang/String;");
              mids$[mid_getRuggedNameB_3cffd47377eca18a] = env->getMethodID(cls, "getRuggedNameB", "()Ljava/lang/String;");
              mids$[mid_getSensorNameA_3cffd47377eca18a] = env->getMethodID(cls, "getSensorNameA", "()Ljava/lang/String;");
              mids$[mid_getSensorNameB_3cffd47377eca18a] = env->getMethodID(cls, "getSensorNameB", "()Ljava/lang/String;");
              mids$[mid_setBodyConstraintWeight_10f281d777284cea] = env->getMethodID(cls, "setBodyConstraintWeight", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9547058464ed819e, a0.this$, a1.this$, a2)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31dd4a79e86cd8aa, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bc8249ae26456ff, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_72201d4561b44b99], a0.this$, a1.this$, a2.this$);
          }

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2, const ::java::lang::Double & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_e7a41d3af7fb492f], a0.this$, a1.this$, a2.this$, a3.this$);
          }

          jdouble SensorToSensorMapping::getBodyConstraintWeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBodyConstraintWeight_557b8123390d8d0c]);
          }

          ::java::lang::Double SensorToSensorMapping::getBodyDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getBodyDistance_1503150ef9654792], a0));
          }

          ::java::util::List SensorToSensorMapping::getBodyDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBodyDistances_0d9551367f7ecdef]));
          }

          ::java::lang::Double SensorToSensorMapping::getLosDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getLosDistance_1503150ef9654792], a0));
          }

          ::java::util::List SensorToSensorMapping::getLosDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLosDistances_0d9551367f7ecdef]));
          }

          ::java::util::Set SensorToSensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_2dfcbd371d62f4e1]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameA_3cffd47377eca18a]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameB_3cffd47377eca18a]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameA_3cffd47377eca18a]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameB_3cffd47377eca18a]));
          }

          void SensorToSensorMapping::setBodyConstraintWeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setBodyConstraintWeight_10f281d777284cea], a0);
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args);
          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data);
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data);
          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data);
          static PyGetSetDef t_SensorToSensorMapping__fields_[] = {
            DECLARE_GETSET_FIELD(t_SensorToSensorMapping, bodyConstraintWeight),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, bodyDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, losDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameB),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameB),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToSensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToSensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyConstraintWeight, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, setBodyConstraintWeight, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToSensorMapping)[] = {
            { Py_tp_methods, t_SensorToSensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToSensorMapping_init_ },
            { Py_tp_getset, t_SensorToSensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToSensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToSensorMapping, t_SensorToSensorMapping, SensorToSensorMapping);

          void t_SensorToSensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToSensorMapping), &PY_TYPE_DEF(SensorToSensorMapping), module, "SensorToSensorMapping", 0);
          }

          void t_SensorToSensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "class_", make_descriptor(SensorToSensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "wrapfn_", make_descriptor(t_SensorToSensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToSensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToSensorMapping::wrap_Object(SensorToSensorMapping(((t_SensorToSensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToSensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                jdouble a2;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                jdouble a4;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssssD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3, a4));
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

          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);

                if (!parseArgs(args, "kkO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 4:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);
                ::java::lang::Double a3((jobject) NULL);

                if (!parseArgs(args, "kkOO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), ::java::lang::PY_TYPE(Double), &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2, a3));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getBodyDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBodyDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getLosDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getLosDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setBodyConstraintWeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBodyConstraintWeight", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setBodyConstraintWeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "bodyConstraintWeight", arg);
            return -1;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameB());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameB());
            return j2p(value);
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
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
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
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader$Parser::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader$Parser::mids$ = NULL;
      bool AGILeapSecondFilesLoader$Parser::live$ = false;

      jclass AGILeapSecondFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader$Parser::AGILeapSecondFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::java::util::List AGILeapSecondFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_e3101d06c7a1bcab], a0.this$, a1.this$));
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
      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_AGILeapSecondFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader$Parser)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader$Parser, t_AGILeapSecondFilesLoader$Parser, AGILeapSecondFilesLoader$Parser);

      void t_AGILeapSecondFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader$Parser), &PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser), module, "AGILeapSecondFilesLoader$Parser", 0);
      }

      void t_AGILeapSecondFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "class_", make_descriptor(AGILeapSecondFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader$Parser::wrap_Object(AGILeapSecondFilesLoader$Parser(((t_AGILeapSecondFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        AGILeapSecondFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = AGILeapSecondFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *SubOrientedPoint::class$ = NULL;
          jmethodID *SubOrientedPoint::mids$ = NULL;
          bool SubOrientedPoint::live$ = false;

          jclass SubOrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/SubOrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_08c86faf9fec8eaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubOrientedPoint::SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_08c86faf9fec8eaa, a0.this$, a1.this$)) {}

          jdouble SubOrientedPoint::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
          }

          jboolean SubOrientedPoint::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubOrientedPoint::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args);
          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data);
          static PyGetSetDef t_SubOrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_SubOrientedPoint, empty),
            DECLARE_GET_FIELD(t_SubOrientedPoint, size),
            DECLARE_GET_FIELD(t_SubOrientedPoint, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubOrientedPoint__methods_[] = {
            DECLARE_METHOD(t_SubOrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubOrientedPoint)[] = {
            { Py_tp_methods, t_SubOrientedPoint__methods_ },
            { Py_tp_init, (void *) t_SubOrientedPoint_init_ },
            { Py_tp_getset, t_SubOrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubOrientedPoint)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubOrientedPoint, t_SubOrientedPoint, SubOrientedPoint);
          PyObject *t_SubOrientedPoint::wrap_Object(const SubOrientedPoint& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubOrientedPoint::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubOrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(SubOrientedPoint), &PY_TYPE_DEF(SubOrientedPoint), module, "SubOrientedPoint", 0);
          }

          void t_SubOrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "class_", make_descriptor(SubOrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "wrapfn_", make_descriptor(t_SubOrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubOrientedPoint::initializeClass, 1)))
              return NULL;
            return t_SubOrientedPoint::wrap_Object(SubOrientedPoint(((t_SubOrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubOrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubOrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubOrientedPoint(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GenericGNSS::class$ = NULL;
        jmethodID *GenericGNSS::mids$ = NULL;
        bool GenericGNSS::live$ = false;

        jclass GenericGNSS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GenericGNSS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9803b569bb20b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GenericGNSS::GenericGNSS(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c9803b569bb20b21, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GenericGNSS__methods_[] = {
          DECLARE_METHOD(t_GenericGNSS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GenericGNSS, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GenericGNSS)[] = {
          { Py_tp_methods, t_GenericGNSS__methods_ },
          { Py_tp_init, (void *) t_GenericGNSS_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GenericGNSS)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GenericGNSS, t_GenericGNSS, GenericGNSS);

        void t_GenericGNSS::install(PyObject *module)
        {
          installType(&PY_TYPE(GenericGNSS), &PY_TYPE_DEF(GenericGNSS), module, "GenericGNSS", 0);
        }

        void t_GenericGNSS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "class_", make_descriptor(GenericGNSS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "wrapfn_", make_descriptor(t_GenericGNSS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GenericGNSS::initializeClass, 1)))
            return NULL;
          return t_GenericGNSS::wrap_Object(GenericGNSS(((t_GenericGNSS *) arg)->object.this$));
        }
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GenericGNSS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          GenericGNSS object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GenericGNSS(a0, a1, a2, a3));
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
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagator::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagator::mids$ = NULL;
          bool GLONASSAnalyticalPropagator::live$ = false;

          jclass GLONASSAnalyticalPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getGLONASSOrbitalElements_19faff6f6b9c4979] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
              mids$[mid_getMU_557b8123390d8d0c] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_propagateInEcef_f00f0e7ea285c370] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSAnalyticalPropagator::getGLONASSOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_19faff6f6b9c4979]));
          }

          jdouble GLONASSAnalyticalPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_557b8123390d8d0c]);
          }

          ::org::orekit::utils::PVCoordinates GLONASSAnalyticalPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_f00f0e7ea285c370], a0.this$));
          }

          void GLONASSAnalyticalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type);
          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyGetSetDef t_GLONASSAnalyticalPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCEF),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCI),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, frame),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, gLONASSOrbitalElements),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, mU),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GLONASSAnalyticalPropagator__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagator)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GLONASSAnalyticalPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagator, t_GLONASSAnalyticalPropagator, GLONASSAnalyticalPropagator);

          void t_GLONASSAnalyticalPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagator), &PY_TYPE_DEF(GLONASSAnalyticalPropagator), module, "GLONASSAnalyticalPropagator", 0);
          }

          void t_GLONASSAnalyticalPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "class_", make_descriptor(GLONASSAnalyticalPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagator::wrap_Object(GLONASSAnalyticalPropagator(((t_GLONASSAnalyticalPropagator *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg)
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

          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SeriesTerm::class$ = NULL;
      jmethodID *SeriesTerm::mids$ = NULL;
      bool SeriesTerm::live$ = false;

      jclass SeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_8f08153945634de4] = env->getMethodID(cls, "add", "(IIDD)V");
          mids$[mid_buildTerm_9e48c9dd795854c8] = env->getStaticMethodID(cls, "buildTerm", "(IIIIIIIIIIIIIII)Lorg/orekit/data/SeriesTerm;");
          mids$[mid_derivative_c933bd8b3b01b6fa] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_19d2f680a2dd5e54] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCosCoeff_21b81d54c06b64b0] = env->getMethodID(cls, "getCosCoeff", "(II)D");
          mids$[mid_getDegree_0092017e99012694] = env->getMethodID(cls, "getDegree", "(I)I");
          mids$[mid_getSinCoeff_21b81d54c06b64b0] = env->getMethodID(cls, "getSinCoeff", "(II)D");
          mids$[mid_value_c933bd8b3b01b6fa] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_19d2f680a2dd5e54] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_3e0ce57516456e43] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_645226ccf45fca25] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_3e0ce57516456e43] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_645226ccf45fca25] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void SeriesTerm::add(jint a0, jint a1, jdouble a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_add_8f08153945634de4], a0, a1, a2, a3);
      }

      SeriesTerm SeriesTerm::buildTerm(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12, jint a13, jint a14)
      {
        jclass cls = env->getClass(initializeClass);
        return SeriesTerm(env->callStaticObjectMethod(cls, mids$[mid_buildTerm_9e48c9dd795854c8], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
      }

      JArray< jdouble > SeriesTerm::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_c933bd8b3b01b6fa], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_19d2f680a2dd5e54], a0.this$));
      }

      jdouble SeriesTerm::getCosCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCosCoeff_21b81d54c06b64b0], a0, a1);
      }

      jint SeriesTerm::getDegree(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getDegree_0092017e99012694], a0);
      }

      jdouble SeriesTerm::getSinCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSinCoeff_21b81d54c06b64b0], a0, a1);
      }

      JArray< jdouble > SeriesTerm::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_c933bd8b3b01b6fa], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_19d2f680a2dd5e54], a0.this$));
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
      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args);
      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg);
      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args);

      static PyMethodDef t_SeriesTerm__methods_[] = {
        DECLARE_METHOD(t_SeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, add, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, buildTerm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, derivative, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getCosCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getDegree, METH_O),
        DECLARE_METHOD(t_SeriesTerm, getSinCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SeriesTerm)[] = {
        { Py_tp_methods, t_SeriesTerm__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SeriesTerm)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SeriesTerm, t_SeriesTerm, SeriesTerm);

      void t_SeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(SeriesTerm), &PY_TYPE_DEF(SeriesTerm), module, "SeriesTerm", 0);
      }

      void t_SeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "class_", make_descriptor(SeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "wrapfn_", make_descriptor(t_SeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SeriesTerm::initializeClass, 1)))
          return NULL;
        return t_SeriesTerm::wrap_Object(SeriesTerm(((t_SeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble a3;

        if (!parseArgs(args, "IIDD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.add(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;
        jint a6;
        jint a7;
        jint a8;
        jint a9;
        jint a10;
        jint a11;
        jint a12;
        jint a13;
        jint a14;
        SeriesTerm result((jobject) NULL);

        if (!parseArgs(args, "IIIIIIIIIIIIIII", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
        {
          OBJ_CALL(result = ::org::orekit::data::SeriesTerm::buildTerm(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          return t_SeriesTerm::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildTerm", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getCosCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCosCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getDegree(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDegree", arg);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSinCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSinCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
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
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *SubLimitAngle::class$ = NULL;
          jmethodID *SubLimitAngle::mids$ = NULL;
          bool SubLimitAngle::live$ = false;

          jclass SubLimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/SubLimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_08c86faf9fec8eaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLimitAngle::SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_08c86faf9fec8eaa, a0.this$, a1.this$)) {}

          jdouble SubLimitAngle::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
          }

          jboolean SubLimitAngle::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLimitAngle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
        namespace oned {
          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args);
          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data);
          static PyGetSetDef t_SubLimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_SubLimitAngle, empty),
            DECLARE_GET_FIELD(t_SubLimitAngle, size),
            DECLARE_GET_FIELD(t_SubLimitAngle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLimitAngle__methods_[] = {
            DECLARE_METHOD(t_SubLimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLimitAngle)[] = {
            { Py_tp_methods, t_SubLimitAngle__methods_ },
            { Py_tp_init, (void *) t_SubLimitAngle_init_ },
            { Py_tp_getset, t_SubLimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLimitAngle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLimitAngle, t_SubLimitAngle, SubLimitAngle);
          PyObject *t_SubLimitAngle::wrap_Object(const SubLimitAngle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLimitAngle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLimitAngle), &PY_TYPE_DEF(SubLimitAngle), module, "SubLimitAngle", 0);
          }

          void t_SubLimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "class_", make_descriptor(SubLimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "wrapfn_", make_descriptor(t_SubLimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLimitAngle::initializeClass, 1)))
              return NULL;
            return t_SubLimitAngle::wrap_Object(SubLimitAngle(((t_SubLimitAngle *) arg)->object.this$));
          }
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubLimitAngle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubLimitAngle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$EphemerisType::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$EphemerisType::mids$ = NULL;
      bool JPLEphemeridesLoader$EphemerisType::live$ = false;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH_MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::JUPITER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MARS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MERCURY = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::NEPTUNE = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::PLUTO = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SATURN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SUN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::URANUS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::VENUS = NULL;

      jclass JPLEphemeridesLoader$EphemerisType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$EphemerisType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_abdae26a1ce2029f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");
          mids$[mid_values_fc935065f80840c7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          EARTH_MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          JUPITER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MARS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MERCURY = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          NEPTUNE = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          PLUTO = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SATURN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SOLAR_SYSTEM_BARYCENTER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SUN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          URANUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          VENUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader$EphemerisType JPLEphemeridesLoader$EphemerisType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JPLEphemeridesLoader$EphemerisType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_abdae26a1ce2029f], a0.this$));
      }

      JArray< JPLEphemeridesLoader$EphemerisType > JPLEphemeridesLoader$EphemerisType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JPLEphemeridesLoader$EphemerisType >(env->callStaticObjectMethod(cls, mids$[mid_values_fc935065f80840c7]));
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
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader$EphemerisType__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader$EphemerisType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader$EphemerisType__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, of_, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$EphemerisType)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$EphemerisType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_JPLEphemeridesLoader$EphemerisType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$EphemerisType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$EphemerisType, t_JPLEphemeridesLoader$EphemerisType, JPLEphemeridesLoader$EphemerisType);
      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_Object(const JPLEphemeridesLoader$EphemerisType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_JPLEphemeridesLoader$EphemerisType::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$EphemerisType), &PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType), module, "JPLEphemeridesLoader$EphemerisType", 0);
      }

      void t_JPLEphemeridesLoader$EphemerisType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "class_", make_descriptor(JPLEphemeridesLoader$EphemerisType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader$EphemerisType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH_MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "JUPITER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MARS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MERCURY", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "NEPTUNE", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "PLUTO", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SATURN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SUN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "URANUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "VENUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::VENUS)));
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(JPLEphemeridesLoader$EphemerisType(((t_JPLEphemeridesLoader$EphemerisType *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JPLEphemeridesLoader$EphemerisType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::valueOf(a0));
          return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type)
      {
        JArray< JPLEphemeridesLoader$EphemerisType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::values());
        return JArray<jobject>(result.this$).wrap(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject);
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_3f89101650640015] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposer::QRDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver QRDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_3f89101650640015], a0.this$));
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
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *TaylorMap::class$ = NULL;
        jmethodID *TaylorMap::mids$ = NULL;
        bool TaylorMap::live$ = false;

        jclass TaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/TaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_859c9366927100bd] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_compose_b7f2337e4b8f4e3a] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/TaylorMap;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_getFunction_aee818789db1d6ac] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getNbFunctions_412668abc8d889e9] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_412668abc8d889e9] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_a53a7513ecedada2] = env->getMethodID(cls, "getPoint", "()[D");
            mids$[mid_invert_cd6cfb213ddfa90d] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_value_1db7c087750eaffe] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TaylorMap::TaylorMap(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_859c9366927100bd, a0.this$, a1.this$)) {}

        TaylorMap::TaylorMap(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

        TaylorMap TaylorMap::compose(const TaylorMap & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_compose_b7f2337e4b8f4e3a], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure TaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_aee818789db1d6ac], a0));
        }

        jint TaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_412668abc8d889e9]);
        }

        jint TaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_412668abc8d889e9]);
        }

        JArray< jdouble > TaylorMap::getPoint() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_a53a7513ecedada2]));
        }

        TaylorMap TaylorMap::invert(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_invert_cd6cfb213ddfa90d], a0.this$));
        }

        JArray< jdouble > TaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_1db7c087750eaffe], a0.this$));
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
        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self);
        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data);
        static PyGetSetDef t_TaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_TaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_TaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_TaylorMap, point),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TaylorMap__methods_[] = {
          DECLARE_METHOD(t_TaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, compose, METH_O),
          DECLARE_METHOD(t_TaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_TaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, invert, METH_O),
          DECLARE_METHOD(t_TaylorMap, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TaylorMap)[] = {
          { Py_tp_methods, t_TaylorMap__methods_ },
          { Py_tp_init, (void *) t_TaylorMap_init_ },
          { Py_tp_getset, t_TaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TaylorMap, t_TaylorMap, TaylorMap);

        void t_TaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(TaylorMap), &PY_TYPE_DEF(TaylorMap), module, "TaylorMap", 0);
        }

        void t_TaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "class_", make_descriptor(TaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "wrapfn_", make_descriptor(t_TaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TaylorMap::initializeClass, 1)))
            return NULL;
          return t_TaylorMap::wrap_Object(TaylorMap(((t_TaylorMap *) arg)->object.this$));
        }
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a1((jobject) NULL);
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jint a1;
              jint a2;
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = TaylorMap(a0, a1, a2));
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

        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg)
        {
          TaylorMap a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", TaylorMap::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return result.wrap();
        }

        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$ManeuvrableConsumer::class$ = NULL;
            jmethodID *ParseToken$ManeuvrableConsumer::mids$ = NULL;
            bool ParseToken$ManeuvrableConsumer::live$ = false;

            jclass ParseToken$ManeuvrableConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0267cff740d16a1e] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$ManeuvrableConsumer::accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0267cff740d16a1e], a0.this$);
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
            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$ManeuvrableConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$ManeuvrableConsumer)[] = {
              { Py_tp_methods, t_ParseToken$ManeuvrableConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$ManeuvrableConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$ManeuvrableConsumer, t_ParseToken$ManeuvrableConsumer, ParseToken$ManeuvrableConsumer);

            void t_ParseToken$ManeuvrableConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$ManeuvrableConsumer), &PY_TYPE_DEF(ParseToken$ManeuvrableConsumer), module, "ParseToken$ManeuvrableConsumer", 0);
            }

            void t_ParseToken$ManeuvrableConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "class_", make_descriptor(ParseToken$ManeuvrableConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "wrapfn_", make_descriptor(t_ParseToken$ManeuvrableConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$ManeuvrableConsumer::wrap_Object(ParseToken$ManeuvrableConsumer(((t_ParseToken$ManeuvrableConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
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
#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *AbstractEncounterLOF::class$ = NULL;
        jmethodID *AbstractEncounterLOF::mids$ = NULL;
        bool AbstractEncounterLOF::live$ = false;

        jclass AbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/AbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldOther_dda60cf1427afe76] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_77bd7b3cdab2713e] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_rotationFromInertial_8b424804999938a4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_352d2666b9e583bd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::FieldPVCoordinates AbstractEncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_dda60cf1427afe76], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates AbstractEncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_77bd7b3cdab2713e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation AbstractEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8b424804999938a4], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation AbstractEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_352d2666b9e583bd], a0.this$, a1.this$));
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
        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self);
        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args);
        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_AbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractEncounterLOF, other),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_AbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_AbstractEncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_AbstractEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractEncounterLOF)[] = {
          { Py_tp_methods, t_AbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractEncounterLOF, t_AbstractEncounterLOF, AbstractEncounterLOF);

        void t_AbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractEncounterLOF), &PY_TYPE_DEF(AbstractEncounterLOF), module, "AbstractEncounterLOF", 0);
        }

        void t_AbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "class_", make_descriptor(AbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "wrapfn_", make_descriptor(t_AbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_AbstractEncounterLOF::wrap_Object(AbstractEncounterLOF(((t_AbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanModel::class$ = NULL;
        jmethodID *KalmanModel::mids$ = NULL;
        bool KalmanModel::live$ = false;

        jclass KalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e60210fff190f25] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getBuilders_0d9551367f7ecdef] = env->getMethodID(cls, "getBuilders", "()Ljava/util/List;");
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_55b445719d7de2a7] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_2d0616b730e7ec0f] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_ebde746c06b90598] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_e958eadec739b50c] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getReferenceTrajectories_2d0616b730e7ec0f] = env->getMethodID(cls, "getReferenceTrajectories", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setReferenceTrajectories_1ac24457161f6296] = env->getMethodID(cls, "setReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_updateReferenceTrajectories_1ac24457161f6296] = env->getMethodID(cls, "updateReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanModel::KalmanModel(const ::java::util::List & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e60210fff190f25, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void KalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_6f886d47d0124943], a0.this$, a1.this$);
        }

        ::java::util::List KalmanModel::getBuilders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBuilders_0d9551367f7ecdef]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af]));
        }

        ::org::orekit::time::AbsoluteDate KalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint KalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_55b445719d7de2a7]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_2d0616b730e7ec0f]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution KalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_ebde746c06b90598], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_e958eadec739b50c], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_5dccf571345671af]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getReferenceTrajectories() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getReferenceTrajectories_2d0616b730e7ec0f]));
        }

        void KalmanModel::setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceTrajectories_1ac24457161f6296], a0.this$);
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
        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self);
        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg);
        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data);
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanModel, builders),
          DECLARE_GET_FIELD(t_KalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanModel, currentDate),
          DECLARE_GET_FIELD(t_KalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanModel, estimate),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, predictedSpacecraftStates),
          DECLARE_GETSET_FIELD(t_KalmanModel, referenceTrajectories),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanModel__methods_[] = {
          DECLARE_METHOD(t_KalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getBuilders, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getReferenceTrajectories, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, setReferenceTrajectories, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanModel)[] = {
          { Py_tp_methods, t_KalmanModel__methods_ },
          { Py_tp_init, (void *) t_KalmanModel_init_ },
          { Py_tp_getset, t_KalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanModel, t_KalmanModel, KalmanModel);

        void t_KalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanModel), &PY_TYPE_DEF(KalmanModel), module, "KalmanModel", 0);
        }

        void t_KalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "class_", make_descriptor(KalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "wrapfn_", make_descriptor(t_KalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanModel::initializeClass, 1)))
            return NULL;
          return t_KalmanModel::wrap_Object(KalmanModel(((t_KalmanModel *) arg)->object.this$));
        }
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a3((jobject) NULL);
          KalmanModel object((jobject) NULL);

          if (!parseArgs(args, "KKkk", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = KalmanModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::conversion::PY_TYPE(PropagatorBuilder));
        }

        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceTrajectories());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg)
        {
          JArray< ::org::orekit::propagation::Propagator > a0((jobject) NULL);

          if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceTrajectories(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setReferenceTrajectories", arg);
          return NULL;
        }

        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceTrajectories());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data)
        {
          {
            JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
            if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceTrajectories(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceTrajectories", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractMeasurementBuilder::class$ = NULL;
          jmethodID *AbstractMeasurementBuilder::mids$ = NULL;
          bool AbstractMeasurementBuilder::live$ = false;

          jclass AbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_b8c09fefa9db3b83] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getEnd_7a97f7e149e79afb] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_getBaseWeight_a53a7513ecedada2] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getNoise_a53a7513ecedada2] = env->getMethodID(cls, "getNoise", "()[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_6f472135bf397672], a0.this$);
          }

          ::java::util::List AbstractMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_0d9551367f7ecdef]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > AbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_b8c09fefa9db3b83]));
          }

          void AbstractMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_AbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_AbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractMeasurementBuilder, t_AbstractMeasurementBuilder, AbstractMeasurementBuilder);
          PyObject *t_AbstractMeasurementBuilder::wrap_Object(const AbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractMeasurementBuilder), &PY_TYPE_DEF(AbstractMeasurementBuilder), module, "AbstractMeasurementBuilder", 0);
          }

          void t_AbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "class_", make_descriptor(AbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_AbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractMeasurementBuilder::wrap_Object(AbstractMeasurementBuilder(((t_AbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_ced8f18d3e8cc67d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_2268d18be49a6087] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_bffffb02b1b74895] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_5fc8cb427a1ada2e] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BasicScanAlgorithm::BasicScanAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ced8f18d3e8cc67d, a0.this$, a1)) {}

        ::org::orekit::rugged::api::AlgorithmId BasicScanAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
        }

        jdouble BasicScanAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_2268d18be49a6087], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_bffffb02b1b74895], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_5fc8cb427a1ada2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_557b8123390d8d0c] = env->getMethodID(cls, "getMaxGrowth", "()D");
            mids$[mid_getMinReduction_557b8123390d8d0c] = env->getMethodID(cls, "getMinReduction", "()D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_557b8123390d8d0c] = env->getMethodID(cls, "getSafety", "()D");
            mids$[mid_integrate_7b1e7ccc98e27149] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_10f281d777284cea] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
            mids$[mid_setMinReduction_10f281d777284cea] = env->getMethodID(cls, "setMinReduction", "(D)V");
            mids$[mid_setSafety_10f281d777284cea] = env->getMethodID(cls, "setSafety", "(D)V");
            mids$[mid_estimateError_ce34cd66684833d2] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");
            mids$[mid_createInterpolator_11ab5d82310ecbfa] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMaxGrowth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_557b8123390d8d0c]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMinReduction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinReduction_557b8123390d8d0c]);
        }

        jint EmbeddedRungeKuttaIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getSafety() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSafety_557b8123390d8d0c]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative EmbeddedRungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7b1e7ccc98e27149], a0.this$, a1.this$, a2));
        }

        void EmbeddedRungeKuttaIntegrator::setMaxGrowth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_10f281d777284cea], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setMinReduction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_10f281d777284cea], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setSafety(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_10f281d777284cea], a0);
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
        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, safety),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaIntegrator, t_EmbeddedRungeKuttaIntegrator, EmbeddedRungeKuttaIntegrator);

        void t_EmbeddedRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator), module, "EmbeddedRungeKuttaIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaIntegrator::wrap_Object(EmbeddedRungeKuttaIntegrator(((t_EmbeddedRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinReduction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSafety());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinReduction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSafety());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/TruncatingFilter.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *TruncatingFilter::class$ = NULL;
      jmethodID *TruncatingFilter::mids$ = NULL;
      bool TruncatingFilter::live$ = false;

      jclass TruncatingFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/TruncatingFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TruncatingFilter::TruncatingFilter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ::org::orekit::data::DataSource TruncatingFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_d33f4b0b3a1030ad], a0.this$));
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
      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg);

      static PyMethodDef t_TruncatingFilter__methods_[] = {
        DECLARE_METHOD(t_TruncatingFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TruncatingFilter)[] = {
        { Py_tp_methods, t_TruncatingFilter__methods_ },
        { Py_tp_init, (void *) t_TruncatingFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TruncatingFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TruncatingFilter, t_TruncatingFilter, TruncatingFilter);

      void t_TruncatingFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(TruncatingFilter), &PY_TYPE_DEF(TruncatingFilter), module, "TruncatingFilter", 0);
      }

      void t_TruncatingFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "class_", make_descriptor(TruncatingFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "wrapfn_", make_descriptor(t_TruncatingFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TruncatingFilter::initializeClass, 1)))
          return NULL;
        return t_TruncatingFilter::wrap_Object(TruncatingFilter(((t_TruncatingFilter *) arg)->object.this$));
      }
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TruncatingFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        TruncatingFilter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = TruncatingFilter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg)
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
