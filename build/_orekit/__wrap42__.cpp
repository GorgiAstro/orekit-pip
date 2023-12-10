#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *EarthOrientationParameterMessage::class$ = NULL;
          jmethodID *EarthOrientationParameterMessage::mids$ = NULL;
          bool EarthOrientationParameterMessage::live$ = false;

          jclass EarthOrientationParameterMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/EarthOrientationParameterMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getDut1_456d9a2f64d6b28d] = env->getMethodID(cls, "getDut1", "()D");
              mids$[mid_getDut1Dot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDut1Dot", "()D");
              mids$[mid_getDut1DotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDut1DotDot", "()D");
              mids$[mid_getReferenceEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTransmissionTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getXp_456d9a2f64d6b28d] = env->getMethodID(cls, "getXp", "()D");
              mids$[mid_getXpDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXpDot", "()D");
              mids$[mid_getXpDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXpDotDot", "()D");
              mids$[mid_getYp_456d9a2f64d6b28d] = env->getMethodID(cls, "getYp", "()D");
              mids$[mid_getYpDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYpDot", "()D");
              mids$[mid_getYpDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYpDotDot", "()D");
              mids$[mid_setDut1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDut1", "(D)V");
              mids$[mid_setDut1Dot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDut1Dot", "(D)V");
              mids$[mid_setDut1DotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDut1DotDot", "(D)V");
              mids$[mid_setReferenceEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTransmissionTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setXp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXp", "(D)V");
              mids$[mid_setXpDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXpDot", "(D)V");
              mids$[mid_setXpDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXpDotDot", "(D)V");
              mids$[mid_setYp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYp", "(D)V");
              mids$[mid_setYpDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYpDot", "(D)V");
              mids$[mid_setYpDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYpDotDot", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EarthOrientationParameterMessage::EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          jdouble EarthOrientationParameterMessage::getDut1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getDut1Dot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1Dot_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getDut1DotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1DotDot_456d9a2f64d6b28d]);
          }

          ::org::orekit::time::AbsoluteDate EarthOrientationParameterMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_aaa854c403487cf3]));
          }

          jdouble EarthOrientationParameterMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getXp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXp_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getXpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDot_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getXpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDotDot_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getYp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYp_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getYpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDot_456d9a2f64d6b28d]);
          }

          jdouble EarthOrientationParameterMessage::getYpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDotDot_456d9a2f64d6b28d]);
          }

          void EarthOrientationParameterMessage::setDut1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setDut1Dot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1Dot_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setDut1DotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1DotDot_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_e82d68cd9f886886], a0.this$);
          }

          void EarthOrientationParameterMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setXp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXp_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setXpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDot_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setXpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDotDot_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setYp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYp_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setYpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDot_77e0f9a1f260e2e5], a0);
          }

          void EarthOrientationParameterMessage::setYpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDotDot_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_EarthOrientationParameterMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1Dot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1DotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, yp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDotDot),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EarthOrientationParameterMessage__methods_[] = {
            DECLARE_METHOD(t_EarthOrientationParameterMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1Dot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1DotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1Dot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1DotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDotDot, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EarthOrientationParameterMessage)[] = {
            { Py_tp_methods, t_EarthOrientationParameterMessage__methods_ },
            { Py_tp_init, (void *) t_EarthOrientationParameterMessage_init_ },
            { Py_tp_getset, t_EarthOrientationParameterMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EarthOrientationParameterMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(EarthOrientationParameterMessage, t_EarthOrientationParameterMessage, EarthOrientationParameterMessage);

          void t_EarthOrientationParameterMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EarthOrientationParameterMessage), &PY_TYPE_DEF(EarthOrientationParameterMessage), module, "EarthOrientationParameterMessage", 0);
          }

          void t_EarthOrientationParameterMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "class_", make_descriptor(EarthOrientationParameterMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "wrapfn_", make_descriptor(t_EarthOrientationParameterMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EarthOrientationParameterMessage::initializeClass, 1)))
              return NULL;
            return t_EarthOrientationParameterMessage::wrap_Object(EarthOrientationParameterMessage(((t_EarthOrientationParameterMessage *) arg)->object.this$));
          }
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EarthOrientationParameterMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            EarthOrientationParameterMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = EarthOrientationParameterMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1Dot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1Dot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1DotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1DotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg)
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

          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg)
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

          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1Dot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1Dot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1DotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1DotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
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

          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
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

          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "yp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDotDot", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundAtNightDetector::class$ = NULL;
        jmethodID *GroundAtNightDetector::mids$ = NULL;
        bool GroundAtNightDetector::live$ = false;
        jdouble GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;

        jclass GroundAtNightDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundAtNightDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_575d478a4b5821ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/models/AtmosphericRefractionModel;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_2d23008c7e50057b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundAtNightDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ASTRONOMICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "ASTRONOMICAL_DAWN_DUSK_ELEVATION");
            CIVIL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "CIVIL_DAWN_DUSK_ELEVATION");
            NAUTICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "NAUTICAL_DAWN_DUSK_ELEVATION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundAtNightDetector::GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::models::AtmosphericRefractionModel & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_575d478a4b5821ba, a0.this$, a1.this$, a2, a3.this$)) {}

        jdouble GroundAtNightDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
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
        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args);
        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args);
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data);
        static PyGetSetDef t_GroundAtNightDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundAtNightDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundAtNightDetector__methods_[] = {
          DECLARE_METHOD(t_GroundAtNightDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundAtNightDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundAtNightDetector)[] = {
          { Py_tp_methods, t_GroundAtNightDetector__methods_ },
          { Py_tp_init, (void *) t_GroundAtNightDetector_init_ },
          { Py_tp_getset, t_GroundAtNightDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundAtNightDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundAtNightDetector, t_GroundAtNightDetector, GroundAtNightDetector);
        PyObject *t_GroundAtNightDetector::wrap_Object(const GroundAtNightDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundAtNightDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundAtNightDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundAtNightDetector), &PY_TYPE_DEF(GroundAtNightDetector), module, "GroundAtNightDetector", 0);
        }

        void t_GroundAtNightDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "class_", make_descriptor(GroundAtNightDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "wrapfn_", make_descriptor(t_GroundAtNightDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundAtNightDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "ASTRONOMICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "CIVIL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "NAUTICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION));
        }

        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundAtNightDetector::initializeClass, 1)))
            return NULL;
          return t_GroundAtNightDetector::wrap_Object(GroundAtNightDetector(((t_GroundAtNightDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundAtNightDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::models::AtmosphericRefractionModel a3((jobject) NULL);
          GroundAtNightDetector object((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GroundAtNightDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundAtNightDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundAtNightDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoint::class$ = NULL;
      jmethodID *WeightedObservedPoint::mids$ = NULL;
      bool WeightedObservedPoint::live$ = false;

      jclass WeightedObservedPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getWeight_456d9a2f64d6b28d] = env->getMethodID(cls, "getWeight", "()D");
          mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoint::WeightedObservedPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

      jdouble WeightedObservedPoint::getWeight() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWeight_456d9a2f64d6b28d]);
      }

      jdouble WeightedObservedPoint::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
      }

      jdouble WeightedObservedPoint::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data);
      static PyGetSetDef t_WeightedObservedPoint__fields_[] = {
        DECLARE_GET_FIELD(t_WeightedObservedPoint, weight),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, x),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, y),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_WeightedObservedPoint__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, getWeight, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getX, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getY, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoint)[] = {
        { Py_tp_methods, t_WeightedObservedPoint__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoint_init_ },
        { Py_tp_getset, t_WeightedObservedPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoint, t_WeightedObservedPoint, WeightedObservedPoint);

      void t_WeightedObservedPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoint), &PY_TYPE_DEF(WeightedObservedPoint), module, "WeightedObservedPoint", 0);
      }

      void t_WeightedObservedPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "class_", make_descriptor(WeightedObservedPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "wrapfn_", make_descriptor(t_WeightedObservedPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoint::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoint::wrap_Object(WeightedObservedPoint(((t_WeightedObservedPoint *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        WeightedObservedPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = WeightedObservedPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWeight());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWeight());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *KalmanFilter::class$ = NULL;
        jmethodID *KalmanFilter::mids$ = NULL;
        bool KalmanFilter::live$ = false;

        jclass KalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/KalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_01cd341bc5eb698c] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getCorrected_3d891496bfc9091e] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_3d891496bfc9091e] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_01cd341bc5eb698c], a0.this$));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_3d891496bfc9091e]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_3d891496bfc9091e]));
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
        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args);
        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg);
        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data);
        static PyGetSetDef t_KalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanFilter, corrected),
          DECLARE_GET_FIELD(t_KalmanFilter, predicted),
          DECLARE_GET_FIELD(t_KalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanFilter__methods_[] = {
          DECLARE_METHOD(t_KalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_KalmanFilter, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_KalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanFilter)[] = {
          { Py_tp_methods, t_KalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanFilter, t_KalmanFilter, KalmanFilter);
        PyObject *t_KalmanFilter::wrap_Object(const KalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_KalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_KalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanFilter), &PY_TYPE_DEF(KalmanFilter), module, "KalmanFilter", 0);
        }

        void t_KalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "class_", make_descriptor(KalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "wrapfn_", make_descriptor(t_KalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanFilter::initializeClass, 1)))
            return NULL;
          return t_KalmanFilter::wrap_Object(KalmanFilter(((t_KalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg)
        {
          ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesFieldIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegrator::mids$ = NULL;
        bool ThreeEighthesFieldIntegrator::live$ = false;

        jclass ThreeEighthesFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_6b9f058d7ef78817] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegrator::ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ThreeEighthesFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegrator, t_ThreeEighthesFieldIntegrator, ThreeEighthesFieldIntegrator);
        PyObject *t_ThreeEighthesFieldIntegrator::wrap_Object(const ThreeEighthesFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegrator), &PY_TYPE_DEF(ThreeEighthesFieldIntegrator), module, "ThreeEighthesFieldIntegrator", 0);
        }

        void t_ThreeEighthesFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "class_", make_descriptor(ThreeEighthesFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegrator::wrap_Object(ThreeEighthesFieldIntegrator(((t_ThreeEighthesFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ThreeEighthesFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ThreeEighthesFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataKey::class$ = NULL;
            jmethodID *CommonMetadataKey::mids$ = NULL;
            bool CommonMetadataKey::live$ = false;
            CommonMetadataKey *CommonMetadataKey::CENTER_NAME = NULL;
            CommonMetadataKey *CommonMetadataKey::OBJECT_ID = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME_EPOCH = NULL;

            jclass CommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_e24389c5489a1357] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;)Z");
                mids$[mid_valueOf_0841e19ee17bf812] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");
                mids$[mid_values_8ca92ebe843de4dc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new CommonMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                OBJECT_ID = new CommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME_EPOCH = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_e24389c5489a1357], a0.this$, a1.this$, a2.this$);
            }

            CommonMetadataKey CommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0841e19ee17bf812], a0.this$));
            }

            JArray< CommonMetadataKey > CommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8ca92ebe843de4dc]));
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
            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data);
            static PyGetSetDef t_CommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataKey)[] = {
              { Py_tp_methods, t_CommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CommonMetadataKey, t_CommonMetadataKey, CommonMetadataKey);
            PyObject *t_CommonMetadataKey::wrap_Object(const CommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataKey), &PY_TYPE_DEF(CommonMetadataKey), module, "CommonMetadataKey", 0);
            }

            void t_CommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "class_", make_descriptor(CommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "wrapfn_", make_descriptor(t_CommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "CENTER_NAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "OBJECT_ID", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::OBJECT_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME_EPOCH", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME_EPOCH)));
            }

            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataKey::wrap_Object(CommonMetadataKey(((t_CommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::valueOf(a0));
                return t_CommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< CommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularIonosphericDelayModifier::class$ = NULL;
          jmethodID *AngularIonosphericDelayModifier::mids$ = NULL;
          bool AngularIonosphericDelayModifier::live$ = false;

          jclass AngularIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularIonosphericDelayModifier::AngularIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          ::java::util::List AngularIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void AngularIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self);
          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularIonosphericDelayModifier, t_AngularIonosphericDelayModifier, AngularIonosphericDelayModifier);

          void t_AngularIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularIonosphericDelayModifier), &PY_TYPE_DEF(AngularIonosphericDelayModifier), module, "AngularIonosphericDelayModifier", 0);
          }

          void t_AngularIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "class_", make_descriptor(AngularIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "wrapfn_", make_descriptor(t_AngularIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularIonosphericDelayModifier::wrap_Object(AngularIonosphericDelayModifier(((t_AngularIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            AngularIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8b4e3987d7532731] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_5fc57a69c973af17] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[D");
          mids$[mid_getData_a6156df500549a58] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_1ba5861551769af8] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/DoubleArrayDictionary$Entry;");
          mids$[mid_put_f158fe1c5def0235] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_putAll_78912f25ca84a166] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_6b161f495ea569b8] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_d6753b7055940a54] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_08f613b585562583] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/DoubleArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DoubleArrayDictionary::DoubleArrayDictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(const ::java::util::Map & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b4e3987d7532731, a0.this$)) {}

      void DoubleArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
      }

      JArray< jdouble > DoubleArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_get_5fc57a69c973af17], a0.this$));
      }

      ::java::util::List DoubleArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_a6156df500549a58]));
      }

      ::org::orekit::utils::DoubleArrayDictionary$Entry DoubleArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::DoubleArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_1ba5861551769af8], a0.this$));
      }

      void DoubleArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_f158fe1c5def0235], a0.this$, a1.this$);
      }

      void DoubleArrayDictionary::putAll(const DoubleArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_78912f25ca84a166], a0.this$);
      }

      void DoubleArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
      }

      jboolean DoubleArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_6b161f495ea569b8], a0.this$);
      }

      jint DoubleArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
      }

      ::java::util::Map DoubleArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_d6753b7055940a54]));
      }

      ::java::lang::String DoubleArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      DoubleArrayDictionary DoubleArrayDictionary::unmodifiableView() const
      {
        return DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_08f613b585562583]));
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
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashSet::class$ = NULL;
    jmethodID *HashSet::mids$ = NULL;
    bool HashSet::live$ = false;

    jclass HashSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_75c5b1de54fd54f2] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashSet::HashSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    HashSet::HashSet(jint a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    HashSet::HashSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

    HashSet::HashSet(jint a0, jfloat a1) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_75c5b1de54fd54f2, a0, a1)) {}

    jboolean HashSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    void HashSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object HashSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean HashSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean HashSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator HashSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jboolean HashSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jint HashSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Spliterator HashSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args);
    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clone(t_HashSet *self);
    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data);
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data);
    static PyGetSetDef t_HashSet__fields_[] = {
      DECLARE_GET_FIELD(t_HashSet, empty),
      DECLARE_GET_FIELD(t_HashSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashSet__methods_[] = {
      DECLARE_METHOD(t_HashSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, add, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, size, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, spliterator, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashSet)[] = {
      { Py_tp_methods, t_HashSet__methods_ },
      { Py_tp_init, (void *) t_HashSet_init_ },
      { Py_tp_getset, t_HashSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_HashSet *)) get_generic_iterator< t_HashSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(HashSet, t_HashSet, HashSet);
    PyObject *t_HashSet::wrap_Object(const HashSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_HashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_HashSet::install(PyObject *module)
    {
      installType(&PY_TYPE(HashSet), &PY_TYPE_DEF(HashSet), module, "HashSet", 0);
    }

    void t_HashSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "class_", make_descriptor(HashSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "wrapfn_", make_descriptor(t_HashSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashSet::initializeClass, 1)))
        return NULL;
      return t_HashSet::wrap_Object(HashSet(((t_HashSet *) arg)->object.this$));
    }
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashSet object((jobject) NULL);

          INT_CALL(object = HashSet());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashSet(a0, a1));
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

    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashSet_clone(t_HashSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "spliterator", args, 2);
    }
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "java/util/stream/Stream.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedCache::class$ = NULL;
      jmethodID *PythonTimeStampedCache::mids$ = NULL;
      bool PythonTimeStampedCache::live$ = false;

      jclass PythonTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_b6273cee359d7146] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_b6273cee359d7146] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_b6c1d562b013fefd] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_1f145bd0decc1d0c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedCache::PythonTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args);
      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self);
      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data);
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedCache, t_PythonTimeStampedCache, PythonTimeStampedCache);
      PyObject *t_PythonTimeStampedCache::wrap_Object(const PythonTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedCache), &PY_TYPE_DEF(PythonTimeStampedCache), module, "PythonTimeStampedCache", 1);
      }

      void t_PythonTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "class_", make_descriptor(PythonTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "wrapfn_", make_descriptor(t_PythonTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getLatest1 },
          { "getMaxNeighborsSize", "()I", (void *) t_PythonTimeStampedCache_getMaxNeighborsSize2 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors3 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedCache_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedCache::wrap_Object(PythonTimeStampedCache(((t_PythonTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getMaxNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getMaxNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOF::class$ = NULL;
      jmethodID *LOF::mids$ = NULL;
      bool LOF::live$ = false;

      jclass LOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isQuasiInertial_e470b6d9e0d979db] = env->getMethodID(cls, "isQuasiInertial", "()Z");
          mids$[mid_rotationFromInertial_95b12e29918a648c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_346e8a02c9c839ea] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_2ec698306e9b37ca] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_4b952147e4e318b8] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOFInToLOFOut_8ea5b3a117471cdf] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOFInToLOFOut_9dd87494b0f9e748] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_transformFromInertial_5297631fe491fbbb] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromInertial_a489f9a3310608b1] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_d5579a18e868b96d] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOF_a9cbf0255b770c0c] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOFInToLOFOut_1a57e4ecea717a7f] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOFInToLOFOut_f733aa0af86dce16] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOF::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jboolean LOF::isQuasiInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_e470b6d9e0d979db]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_95b12e29918a648c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_346e8a02c9c839ea], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_2ec698306e9b37ca], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_4b952147e4e318b8], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_8ea5b3a117471cdf], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOFInToLOFOut(const ::org::hipparchus::Field & a0, const LOF & a1, const LOF & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::orekit::utils::FieldPVCoordinates & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_9dd87494b0f9e748], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_5297631fe491fbbb], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_a489f9a3310608b1], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_d5579a18e868b96d], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_a9cbf0255b770c0c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_1a57e4ecea717a7f], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_f733aa0af86dce16], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_getName(t_LOF *self);
      static PyObject *t_LOF_isQuasiInertial(t_LOF *self);
      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_get__name(t_LOF *self, void *data);
      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data);
      static PyGetSetDef t_LOF__fields_[] = {
        DECLARE_GET_FIELD(t_LOF, name),
        DECLARE_GET_FIELD(t_LOF, quasiInertial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOF__methods_[] = {
        DECLARE_METHOD(t_LOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOF, isQuasiInertial, METH_NOARGS),
        DECLARE_METHOD(t_LOF, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOF, transformFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOF)[] = {
        { Py_tp_methods, t_LOF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LOF, t_LOF, LOF);

      void t_LOF::install(PyObject *module)
      {
        installType(&PY_TYPE(LOF), &PY_TYPE_DEF(LOF), module, "LOF", 0);
      }

      void t_LOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "class_", make_descriptor(LOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "wrapfn_", make_descriptor(t_LOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOF::initializeClass, 1)))
          return NULL;
        return t_LOF::wrap_Object(LOF(((t_LOF *) arg)->object.this$));
      }
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOF_getName(t_LOF *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOF_isQuasiInertial(t_LOF *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isQuasiInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
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
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            LOF a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3, a4));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rotationFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kKK", LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkKK", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "transformFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_get__name(t_LOF *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isQuasiInertial());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RegulaFalsiSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RegulaFalsiSolver::class$ = NULL;
        jmethodID *RegulaFalsiSolver::mids$ = NULL;
        bool RegulaFalsiSolver::live$ = false;

        jclass RegulaFalsiSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RegulaFalsiSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegulaFalsiSolver::RegulaFalsiSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}
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
        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args);
        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data);
        static PyGetSetDef t_RegulaFalsiSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RegulaFalsiSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegulaFalsiSolver__methods_[] = {
          DECLARE_METHOD(t_RegulaFalsiSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegulaFalsiSolver)[] = {
          { Py_tp_methods, t_RegulaFalsiSolver__methods_ },
          { Py_tp_init, (void *) t_RegulaFalsiSolver_init_ },
          { Py_tp_getset, t_RegulaFalsiSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegulaFalsiSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(RegulaFalsiSolver, t_RegulaFalsiSolver, RegulaFalsiSolver);
        PyObject *t_RegulaFalsiSolver::wrap_Object(const RegulaFalsiSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegulaFalsiSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegulaFalsiSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RegulaFalsiSolver), &PY_TYPE_DEF(RegulaFalsiSolver), module, "RegulaFalsiSolver", 0);
        }

        void t_RegulaFalsiSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "class_", make_descriptor(RegulaFalsiSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "wrapfn_", make_descriptor(t_RegulaFalsiSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegulaFalsiSolver::initializeClass, 1)))
            return NULL;
          return t_RegulaFalsiSolver::wrap_Object(RegulaFalsiSolver(((t_RegulaFalsiSolver *) arg)->object.this$));
        }
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegulaFalsiSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RegulaFalsiSolver object((jobject) NULL);

              INT_CALL(object = RegulaFalsiSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RegulaFalsiSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldUnivariateIntegrator::class$ = NULL;
        jmethodID *FieldUnivariateIntegrator::mids$ = NULL;
        bool FieldUnivariateIntegrator::live$ = false;

        jclass FieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_cffdd7e74469af96] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint FieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jint FieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
        }

        jint FieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_f2f64475e4580546]);
        }

        jint FieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_f2f64475e4580546]);
        }

        jdouble FieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_cffdd7e74469af96], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_FieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_FieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateIntegrator, t_FieldUnivariateIntegrator, FieldUnivariateIntegrator);
        PyObject *t_FieldUnivariateIntegrator::wrap_Object(const FieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateIntegrator), &PY_TYPE_DEF(FieldUnivariateIntegrator), module, "FieldUnivariateIntegrator", 0);
        }

        void t_FieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "class_", make_descriptor(FieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateIntegrator::wrap_Object(FieldUnivariateIntegrator(((t_FieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Header::class$ = NULL;
              jmethodID *SsrIgm04Header::mids$ = NULL;
              bool SsrIgm04Header::live$ = false;

              jclass SsrIgm04Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Header::SsrIgm04Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm04Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Header)[] = {
                { Py_tp_methods, t_SsrIgm04Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Header, t_SsrIgm04Header, SsrIgm04Header);

              void t_SsrIgm04Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Header), &PY_TYPE_DEF(SsrIgm04Header), module, "SsrIgm04Header", 0);
              }

              void t_SsrIgm04Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "class_", make_descriptor(SsrIgm04Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "wrapfn_", make_descriptor(t_SsrIgm04Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Header::wrap_Object(SsrIgm04Header(((t_SsrIgm04Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Header object((jobject) NULL);

                INT_CALL(object = SsrIgm04Header());
                self->object = object;

                return 0;
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
#include "org/orekit/gnss/metric/messages/common/UserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *UserRangeAccuracy::class$ = NULL;
            jmethodID *UserRangeAccuracy::mids$ = NULL;
            bool UserRangeAccuracy::live$ = false;

            jclass UserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/UserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserRangeAccuracy::UserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jdouble UserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_456d9a2f64d6b28d]);
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
          namespace common {
            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self);
            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data);
            static PyGetSetDef t_UserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_UserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_UserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserRangeAccuracy)[] = {
              { Py_tp_methods, t_UserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_UserRangeAccuracy_init_ },
              { Py_tp_getset, t_UserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserRangeAccuracy, t_UserRangeAccuracy, UserRangeAccuracy);

            void t_UserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(UserRangeAccuracy), &PY_TYPE_DEF(UserRangeAccuracy), module, "UserRangeAccuracy", 0);
            }

            void t_UserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "class_", make_descriptor(UserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "wrapfn_", make_descriptor(t_UserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_UserRangeAccuracy::wrap_Object(UserRangeAccuracy(((t_UserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              UserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = UserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticJ2ClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticJ2ClockModifier::mids$ = NULL;
          bool AbstractRelativisticJ2ClockModifier::live$ = false;

          jclass AbstractRelativisticJ2ClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_relativisticJ2Correction_b9e7854a808aa131] = env->getMethodID(cls, "relativisticJ2Correction", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticJ2ClockModifier::AbstractRelativisticJ2ClockModifier(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}
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
          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticJ2ClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticJ2ClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticJ2ClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticJ2ClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticJ2ClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticJ2ClockModifier, t_AbstractRelativisticJ2ClockModifier, AbstractRelativisticJ2ClockModifier);

          void t_AbstractRelativisticJ2ClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticJ2ClockModifier), &PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier), module, "AbstractRelativisticJ2ClockModifier", 0);
          }

          void t_AbstractRelativisticJ2ClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "class_", make_descriptor(AbstractRelativisticJ2ClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticJ2ClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticJ2ClockModifier::wrap_Object(AbstractRelativisticJ2ClockModifier(((t_AbstractRelativisticJ2ClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            AbstractRelativisticJ2ClockModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = AbstractRelativisticJ2ClockModifier(a0, a1, a2));
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
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                mids$[mid_build_3d5ffc54bfa065da] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_c489cac8f838b2e9] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAdmParser::pythonExtension(jlong a0) const
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_a27fc9afd27e559d]);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalMeasurementHandler::class$ = NULL;
        jmethodID *SemiAnalyticalMeasurementHandler::mids$ = NULL;
        bool SemiAnalyticalMeasurementHandler::live$ = false;

        jclass SemiAnalyticalMeasurementHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_443674e595d9825a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_5d94a9dc7da109ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;Z)V");
            mids$[mid_handleStep_eb797cf50ec4b2c4] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_443674e595d9825a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d94a9dc7da109ec, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        void SemiAnalyticalMeasurementHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_eb797cf50ec4b2c4], a0.this$);
        }

        void SemiAnalyticalMeasurementHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalMeasurementHandler__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, handleStep, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalMeasurementHandler)[] = {
          { Py_tp_methods, t_SemiAnalyticalMeasurementHandler__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalMeasurementHandler_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalMeasurementHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalMeasurementHandler, t_SemiAnalyticalMeasurementHandler, SemiAnalyticalMeasurementHandler);

        void t_SemiAnalyticalMeasurementHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalMeasurementHandler), &PY_TYPE_DEF(SemiAnalyticalMeasurementHandler), module, "SemiAnalyticalMeasurementHandler", 0);
        }

        void t_SemiAnalyticalMeasurementHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "class_", make_descriptor(SemiAnalyticalMeasurementHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "wrapfn_", make_descriptor(t_SemiAnalyticalMeasurementHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalMeasurementHandler::wrap_Object(SemiAnalyticalMeasurementHandler(((t_SemiAnalyticalMeasurementHandler *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jboolean a4;
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKkZ", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3, a4));
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

        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args)
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
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldPropagator::class$ = NULL;
      jmethodID *PythonFieldPropagator::mids$ = NULL;
      bool PythonFieldPropagator::live$ = false;

      jclass PythonFieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a553824829fc2514] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_e40bff2c3349a3fd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPropagator::PythonFieldPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args);
      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self);
      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data);
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPropagator)[] = {
        { Py_tp_methods, t_PythonFieldPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPropagator_init_ },
        { Py_tp_getset, t_PythonFieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPropagator, t_PythonFieldPropagator, PythonFieldPropagator);
      PyObject *t_PythonFieldPropagator::wrap_Object(const PythonFieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPropagator), &PY_TYPE_DEF(PythonFieldPropagator), module, "PythonFieldPropagator", 1);
      }

      void t_PythonFieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "class_", make_descriptor(PythonFieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "wrapfn_", make_descriptor(t_PythonFieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldPropagator_setAttitudeProvider17 },
        };
        env->registerNatives(cls, methods, 18);
      }

      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPropagator::wrap_Object(PythonFieldPropagator(((t_PythonFieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data)
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
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateFunction::class$ = NULL;
      jmethodID *StateFunction::mids$ = NULL;
      bool StateFunction::live$ = false;

      jclass StateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_137d7db4f3f987f7] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > StateFunction::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_137d7db4f3f987f7], a0.this$));
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
      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg);

      static PyMethodDef t_StateFunction__methods_[] = {
        DECLARE_METHOD(t_StateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateFunction)[] = {
        { Py_tp_methods, t_StateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateFunction, t_StateFunction, StateFunction);

      void t_StateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(StateFunction), &PY_TYPE_DEF(StateFunction), module, "StateFunction", 0);
      }

      void t_StateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "class_", make_descriptor(StateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "wrapfn_", make_descriptor(t_StateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateFunction::initializeClass, 1)))
          return NULL;
        return t_StateFunction::wrap_Object(StateFunction(((t_StateFunction *) arg)->object.this$));
      }
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PoissonDistribution::class$ = NULL;
        jmethodID *PoissonDistribution::mids$ = NULL;
        bool PoissonDistribution::live$ = false;
        jdouble PoissonDistribution::DEFAULT_EPSILON = (jdouble) 0;
        jint PoissonDistribution::DEFAULT_MAX_ITERATIONS = (jint) 0;

        jclass PoissonDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PoissonDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_normalApproximateProbability_b772323fc98b7293] = env->getMethodID(cls, "normalApproximateProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
            DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PoissonDistribution::PoissonDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

        jdouble PoissonDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jdouble PoissonDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble PoissonDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble PoissonDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jint PoissonDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint PoissonDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean PoissonDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble PoissonDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble PoissonDistribution::normalApproximateProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_normalApproximateProbability_b772323fc98b7293], a0);
        }

        jdouble PoissonDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self);
        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg);
        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data);
        static PyGetSetDef t_PoissonDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PoissonDistribution, mean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PoissonDistribution__methods_[] = {
          DECLARE_METHOD(t_PoissonDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, normalApproximateProbability, METH_O),
          DECLARE_METHOD(t_PoissonDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PoissonDistribution)[] = {
          { Py_tp_methods, t_PoissonDistribution__methods_ },
          { Py_tp_init, (void *) t_PoissonDistribution_init_ },
          { Py_tp_getset, t_PoissonDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PoissonDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PoissonDistribution, t_PoissonDistribution, PoissonDistribution);

        void t_PoissonDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PoissonDistribution), &PY_TYPE_DEF(PoissonDistribution), module, "PoissonDistribution", 0);
        }

        void t_PoissonDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "class_", make_descriptor(PoissonDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "wrapfn_", make_descriptor(t_PoissonDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(PoissonDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_EPSILON", make_descriptor(PoissonDistribution::DEFAULT_EPSILON));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_MAX_ITERATIONS", make_descriptor(PoissonDistribution::DEFAULT_MAX_ITERATIONS));
        }

        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PoissonDistribution::initializeClass, 1)))
            return NULL;
          return t_PoissonDistribution::wrap_Object(PoissonDistribution(((t_PoissonDistribution *) arg)->object.this$));
        }
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PoissonDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PoissonDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jint a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
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
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = PoissonDistribution(a0, a1, a2));
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

        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.normalApproximateProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "normalApproximateProbability", arg);
          return NULL;
        }

        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/lang/String.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedFrames::class$ = NULL;
      jmethodID *LazyLoadedFrames::mids$ = NULL;
      bool LazyLoadedFrames::live$ = false;

      jclass LazyLoadedFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_640b47445a3d772b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_e1571b88fce42eed] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getEOPHistory_7544a283da003d74] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedFrames::LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::bodies::CelestialBodies & a2) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_640b47445a3d772b, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedFrames::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_e1571b88fce42eed], a0.this$, a1.this$);
      }

      void LazyLoadedFrames::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152]);
      }

      ::org::orekit::frames::EOPHistory LazyLoadedFrames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_7544a283da003d74], a0.this$, a1));
      }

      void LazyLoadedFrames::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5], a0);
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
      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self);
      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg);
      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedFrames__fields_[] = {
        DECLARE_SET_FIELD(t_LazyLoadedFrames, eOPContinuityThreshold),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedFrames__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, setEOPContinuityThreshold, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedFrames)[] = {
        { Py_tp_methods, t_LazyLoadedFrames__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedFrames_init_ },
        { Py_tp_getset, t_LazyLoadedFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(LazyLoadedFrames, t_LazyLoadedFrames, LazyLoadedFrames);

      void t_LazyLoadedFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedFrames), &PY_TYPE_DEF(LazyLoadedFrames), module, "LazyLoadedFrames", 0);
      }

      void t_LazyLoadedFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "class_", make_descriptor(LazyLoadedFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "wrapfn_", make_descriptor(t_LazyLoadedFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedFrames::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedFrames::wrap_Object(LazyLoadedFrames(((t_LazyLoadedFrames *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        LazyLoadedFrames object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::frames::LazyLoadedEop::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedFrames(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedFrames), (PyObject *) self, "getEOPHistory", args, 2);
      }

      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_959fe257032a39c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAcmDataElements_a6156df500549a58] = env->getMethodID(cls, "getAcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_0090f7797e403f43] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_aaa854c403487cf3] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_0090f7797e403f43] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_456d9a2f64d6b28d] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getObjectDesignator_0090f7797e403f43] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getOdmMessageLink_0090f7797e403f43] = env->getMethodID(cls, "getOdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorAddress_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_0090f7797e403f43] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_456d9a2f64d6b28d] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_setAcmDataElements_65de9727799c5641] = env->getMethodID(cls, "setAcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_e939c6558ae8d313] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_e82d68cd9f886886] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_e939c6558ae8d313] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setObjectDesignator_e939c6558ae8d313] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setOdmMessageLink_e939c6558ae8d313] = env->getMethodID(cls, "setOdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorAddress_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_e939c6558ae8d313] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmMetadata::AcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_959fe257032a39c0, a0.this$)) {}

              ::java::util::List AcmMetadata::getAcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAcmDataElements_a6156df500549a58]));
              }

              ::java::lang::String AcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_aaa854c403487cf3]));
              }

              ::java::lang::String AcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_aaa854c403487cf3]));
              }

              jdouble AcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_456d9a2f64d6b28d]);
              }

              ::java::lang::String AcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMessageLink_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_0090f7797e403f43]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_aaa854c403487cf3]));
              }

              jdouble AcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_456d9a2f64d6b28d]);
              }

              void AcmMetadata::setAcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcmDataElements_65de9727799c5641], a0.this$);
              }

              void AcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_e82d68cd9f886886], a0.this$);
              }

              void AcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_e82d68cd9f886886], a0.this$);
              }

              void AcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_77e0f9a1f260e2e5], a0);
              }

              void AcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOdmMessageLink_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_e939c6558ae8d313], a0.this$);
              }

              void AcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_e82d68cd9f886886], a0.this$);
              }

              void AcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_e82d68cd9f886886], a0.this$);
              }

              void AcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_77e0f9a1f260e2e5], a0);
              }

              void AcmMetadata::validate(jdouble a0) const
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
#include "org/orekit/utils/PythonParameterObserver.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterObserver::class$ = NULL;
      jmethodID *PythonParameterObserver::mids$ = NULL;
      bool PythonParameterObserver::live$ = false;

      jclass PythonParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_valueChanged_25a9530287ebc441] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_dc11aff94465299a] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterObserver::PythonParameterObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonParameterObserver::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonParameterObserver::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonParameterObserver::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self);
      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args);
      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data);
      static PyGetSetDef t_PythonParameterObserver__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterObserver, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterObserver__methods_[] = {
        DECLARE_METHOD(t_PythonParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterObserver, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterObserver)[] = {
        { Py_tp_methods, t_PythonParameterObserver__methods_ },
        { Py_tp_init, (void *) t_PythonParameterObserver_init_ },
        { Py_tp_getset, t_PythonParameterObserver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterObserver, t_PythonParameterObserver, PythonParameterObserver);

      void t_PythonParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterObserver), &PY_TYPE_DEF(PythonParameterObserver), module, "PythonParameterObserver", 1);
      }

      void t_PythonParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "class_", make_descriptor(PythonParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "wrapfn_", make_descriptor(t_PythonParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterObserver::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterObserver_pythonDecRef0 },
          { "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonParameterObserver_valueChanged1 },
          { "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V", (void *) t_PythonParameterObserver_valueSpanMapChanged2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterObserver::initializeClass, 1)))
          return NULL;
        return t_PythonParameterObserver::wrap_Object(PythonParameterObserver(((t_PythonParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterObserver object((jobject) NULL);

        INT_CALL(object = PythonParameterObserver());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args)
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

      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "valueChanged", "dOO", (double) a0, o1, o2);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_TimeSpanMap::wrap_Object(::org::orekit::utils::TimeSpanMap(a0));
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *result = PyObject_CallMethod(obj, "valueSpanMapChanged", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data)
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
#include "org/orekit/models/earth/tessellation/Mesh$Node.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Mesh$Node::class$ = NULL;
          jmethodID *Mesh$Node::mids$ = NULL;
          bool Mesh$Node::live$ = false;

          jclass Mesh$Node::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Mesh$Node");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcross_17a952530a808943] = env->getMethodID(cls, "getAcross", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcrossIndex_f2f64475e4580546] = env->getMethodID(cls, "getAcrossIndex", "()I");
              mids$[mid_getAlong_17a952530a808943] = env->getMethodID(cls, "getAlong", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAlongIndex_f2f64475e4580546] = env->getMethodID(cls, "getAlongIndex", "()I");
              mids$[mid_getS2P_71b7da0eb14488b0] = env->getMethodID(cls, "getS2P", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getV_17a952530a808943] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isEnabled_e470b6d9e0d979db] = env->getMethodID(cls, "isEnabled", "()Z");
              mids$[mid_isInside_e470b6d9e0d979db] = env->getMethodID(cls, "isInside", "()Z");
              mids$[mid_move_039d1d912b9705b9] = env->getMethodID(cls, "move", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_setEnabled_7ae3461a92a43152] = env->getMethodID(cls, "setEnabled", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAcross() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcross_17a952530a808943]));
          }

          jint Mesh$Node::getAcrossIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAcrossIndex_f2f64475e4580546]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAlong() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAlong_17a952530a808943]));
          }

          jint Mesh$Node::getAlongIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlongIndex_f2f64475e4580546]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::getS2P() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getS2P_71b7da0eb14488b0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_17a952530a808943]));
          }

          jboolean Mesh$Node::isEnabled() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEnabled_e470b6d9e0d979db]);
          }

          jboolean Mesh$Node::isInside() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInside_e470b6d9e0d979db]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_move_039d1d912b9705b9], a0.this$));
          }

          void Mesh$Node::setEnabled() const
          {
            env->callVoidMethod(this$, mids$[mid_setEnabled_7ae3461a92a43152]);
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
        namespace tessellation {
          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg);
          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data);
          static PyGetSetDef t_Mesh$Node__fields_[] = {
            DECLARE_GET_FIELD(t_Mesh$Node, across),
            DECLARE_GET_FIELD(t_Mesh$Node, acrossIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, along),
            DECLARE_GET_FIELD(t_Mesh$Node, alongIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, enabled),
            DECLARE_GET_FIELD(t_Mesh$Node, inside),
            DECLARE_GET_FIELD(t_Mesh$Node, s2P),
            DECLARE_GET_FIELD(t_Mesh$Node, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mesh$Node__methods_[] = {
            DECLARE_METHOD(t_Mesh$Node, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, getAcross, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAcrossIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlong, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlongIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getS2P, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getV, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isEnabled, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isInside, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, move, METH_O),
            DECLARE_METHOD(t_Mesh$Node, setEnabled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mesh$Node)[] = {
            { Py_tp_methods, t_Mesh$Node__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Mesh$Node__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mesh$Node)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Mesh$Node, t_Mesh$Node, Mesh$Node);

          void t_Mesh$Node::install(PyObject *module)
          {
            installType(&PY_TYPE(Mesh$Node), &PY_TYPE_DEF(Mesh$Node), module, "Mesh$Node", 0);
          }

          void t_Mesh$Node::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "class_", make_descriptor(Mesh$Node::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "wrapfn_", make_descriptor(t_Mesh$Node::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mesh$Node::initializeClass, 1)))
              return NULL;
            return t_Mesh$Node::wrap_Object(Mesh$Node(((t_Mesh$Node *) arg)->object.this$));
          }
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mesh$Node::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAcrossIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlongIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEnabled());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInside());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.move(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "move", arg);
            return NULL;
          }

          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self)
          {
            OBJ_CALL(self->object.setEnabled());
            Py_RETURN_NONE;
          }

          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAcrossIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlongIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEnabled());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInside());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSAlmanac::class$ = NULL;
            jmethodID *GPSAlmanac::mids$ = NULL;
            bool GPSAlmanac::live$ = false;

            jclass GPSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_f2f64475e4580546] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSVN_f2f64475e4580546] = env->getMethodID(cls, "getSVN", "()I");
                mids$[mid_getSatConfiguration_f2f64475e4580546] = env->getMethodID(cls, "getSatConfiguration", "()I");
                mids$[mid_getSource_0090f7797e403f43] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_getTGD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_f2f64475e4580546] = env->getMethodID(cls, "getURA", "()I");
                mids$[mid_setHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSVN_0a2a1ac2721c0336] = env->getMethodID(cls, "setSVN", "(I)V");
                mids$[mid_setSatConfiguration_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatConfiguration", "(I)V");
                mids$[mid_setSource_e939c6558ae8d313] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setURA_0a2a1ac2721c0336] = env->getMethodID(cls, "setURA", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSAlmanac::GPSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint GPSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_f2f64475e4580546]);
            }

            jint GPSAlmanac::getSVN() const
            {
              return env->callIntMethod(this$, mids$[mid_getSVN_f2f64475e4580546]);
            }

            jint GPSAlmanac::getSatConfiguration() const
            {
              return env->callIntMethod(this$, mids$[mid_getSatConfiguration_f2f64475e4580546]);
            }

            ::java::lang::String GPSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_0090f7797e403f43]));
            }

            jdouble GPSAlmanac::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_456d9a2f64d6b28d]);
            }

            jint GPSAlmanac::getURA() const
            {
              return env->callIntMethod(this$, mids$[mid_getURA_f2f64475e4580546]);
            }

            void GPSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_0a2a1ac2721c0336], a0);
            }

            void GPSAlmanac::setSVN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSVN_0a2a1ac2721c0336], a0);
            }

            void GPSAlmanac::setSatConfiguration(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatConfiguration_0a2a1ac2721c0336], a0);
            }

            void GPSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_e939c6558ae8d313], a0.this$);
            }

            void GPSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_77e0f9a1f260e2e5], a0);
            }

            void GPSAlmanac::setURA(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_0a2a1ac2721c0336], a0);
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
            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data);
            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data);
            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GPSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_GPSAlmanac, health),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, sVN),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, satConfiguration),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, source),
              DECLARE_SET_FIELD(t_GPSAlmanac, sqrtA),
              DECLARE_GET_FIELD(t_GPSAlmanac, tGD),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GPSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GPSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSVN, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSatConfiguration, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSVN, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSatConfiguration, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSqrtA, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSAlmanac)[] = {
              { Py_tp_methods, t_GPSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GPSAlmanac_init_ },
              { Py_tp_getset, t_GPSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GPSAlmanac, t_GPSAlmanac, GPSAlmanac);

            void t_GPSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSAlmanac), &PY_TYPE_DEF(GPSAlmanac), module, "GPSAlmanac", 0);
            }

            void t_GPSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "class_", make_descriptor(GPSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "wrapfn_", make_descriptor(t_GPSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GPSAlmanac::wrap_Object(GPSAlmanac(((t_GPSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GPSAlmanac object((jobject) NULL);

              INT_CALL(object = GPSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSVN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSatConfiguration());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getURA());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSVN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSVN", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSatConfiguration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatConfiguration", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSVN());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSVN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sVN", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSatConfiguration());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSatConfiguration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satConfiguration", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getURA());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *DescriptiveStatistics::class$ = NULL;
        jmethodID *DescriptiveStatistics::mids$ = NULL;
        bool DescriptiveStatistics::live$ = false;

        jclass DescriptiveStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/DescriptiveStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_apply_13248a242645be18] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/stat/descriptive/UnivariateStatistic;)D");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_b253eafe130b1398] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/DescriptiveStatistics;");
            mids$[mid_getElement_b772323fc98b7293] = env->getMethodID(cls, "getElement", "(I)D");
            mids$[mid_getGeometricMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getKurtosis_456d9a2f64d6b28d] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_0ba5fed9597b693e] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSkewness_456d9a2f64d6b28d] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSortedValues_7cdc325af0834901] = env->getMethodID(cls, "getSortedValues", "()[D");
            mids$[mid_getStandardDeviation_456d9a2f64d6b28d] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getValues_7cdc325af0834901] = env->getMethodID(cls, "getValues", "()[D");
            mids$[mid_getVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_getWindowSize_f2f64475e4580546] = env->getMethodID(cls, "getWindowSize", "()I");
            mids$[mid_removeMostRecentValue_7ae3461a92a43152] = env->getMethodID(cls, "removeMostRecentValue", "()V");
            mids$[mid_replaceMostRecentValue_0ba5fed9597b693e] = env->getMethodID(cls, "replaceMostRecentValue", "(D)D");
            mids$[mid_setWindowSize_0a2a1ac2721c0336] = env->getMethodID(cls, "setWindowSize", "(I)V");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DescriptiveStatistics::DescriptiveStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        DescriptiveStatistics::DescriptiveStatistics(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

        DescriptiveStatistics::DescriptiveStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        void DescriptiveStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
        }

        void DescriptiveStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_77e0f9a1f260e2e5], a0);
        }

        jdouble DescriptiveStatistics::apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_apply_13248a242645be18], a0.this$);
        }

        void DescriptiveStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        DescriptiveStatistics DescriptiveStatistics::copy() const
        {
          return DescriptiveStatistics(env->callObjectMethod(this$, mids$[mid_copy_b253eafe130b1398]));
        }

        jdouble DescriptiveStatistics::getElement(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElement_b772323fc98b7293], a0);
        }

        jdouble DescriptiveStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jlong DescriptiveStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble DescriptiveStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_0ba5fed9597b693e], a0);
        }

        jdouble DescriptiveStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_456d9a2f64d6b28d]);
        }

        JArray< jdouble > DescriptiveStatistics::getSortedValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSortedValues_7cdc325af0834901]));
        }

        jdouble DescriptiveStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
        }

        jdouble DescriptiveStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_456d9a2f64d6b28d]);
        }

        JArray< jdouble > DescriptiveStatistics::getValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_7cdc325af0834901]));
        }

        jdouble DescriptiveStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_456d9a2f64d6b28d]);
        }

        jint DescriptiveStatistics::getWindowSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getWindowSize_f2f64475e4580546]);
        }

        void DescriptiveStatistics::removeMostRecentValue() const
        {
          env->callVoidMethod(this$, mids$[mid_removeMostRecentValue_7ae3461a92a43152]);
        }

        jdouble DescriptiveStatistics::replaceMostRecentValue(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_replaceMostRecentValue_0ba5fed9597b693e], a0);
        }

        void DescriptiveStatistics::setWindowSize(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWindowSize_0a2a1ac2721c0336], a0);
        }

        ::java::lang::String DescriptiveStatistics::toString() const
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
        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args);
        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data);
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data);
        static PyGetSetDef t_DescriptiveStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_DescriptiveStatistics, geometricMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, kurtosis),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, max),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, mean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, min),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, n),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, populationVariance),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, skewness),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sortedValues),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sum),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, values),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, variance),
          DECLARE_GETSET_FIELD(t_DescriptiveStatistics, windowSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DescriptiveStatistics__methods_[] = {
          DECLARE_METHOD(t_DescriptiveStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, accept, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, addValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, apply, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getElement, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSortedValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getWindowSize, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, removeMostRecentValue, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, replaceMostRecentValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, setWindowSize, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DescriptiveStatistics)[] = {
          { Py_tp_methods, t_DescriptiveStatistics__methods_ },
          { Py_tp_init, (void *) t_DescriptiveStatistics_init_ },
          { Py_tp_getset, t_DescriptiveStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DescriptiveStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DescriptiveStatistics, t_DescriptiveStatistics, DescriptiveStatistics);

        void t_DescriptiveStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(DescriptiveStatistics), &PY_TYPE_DEF(DescriptiveStatistics), module, "DescriptiveStatistics", 0);
        }

        void t_DescriptiveStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "class_", make_descriptor(DescriptiveStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "wrapfn_", make_descriptor(t_DescriptiveStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DescriptiveStatistics::initializeClass, 1)))
            return NULL;
          return t_DescriptiveStatistics::wrap_Object(DescriptiveStatistics(((t_DescriptiveStatistics *) arg)->object.this$));
        }
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DescriptiveStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DescriptiveStatistics object((jobject) NULL);

              INT_CALL(object = DescriptiveStatistics());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
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

        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg)
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

        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg)
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

        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::stat::descriptive::UnivariateStatistic::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self)
        {
          DescriptiveStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_DescriptiveStatistics::wrap_Object(result);
        }

        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getElement(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElement", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg)
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

        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSortedValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getWindowSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.removeMostRecentValue());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.replaceMostRecentValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "replaceMostRecentValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setWindowSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWindowSize", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DescriptiveStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSortedValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getWindowSize());
          return PyLong_FromLong((long) value);
        }
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setWindowSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "windowSize", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Chan1997::class$ = NULL;
              jmethodID *Chan1997::mids$ = NULL;
              bool Chan1997::live$ = false;

              jclass Chan1997::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Chan1997::Chan1997() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Chan1997::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Chan1997::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Chan1997::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
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
              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data);
              static PyGetSetDef t_Chan1997__fields_[] = {
                DECLARE_GET_FIELD(t_Chan1997, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Chan1997__methods_[] = {
                DECLARE_METHOD(t_Chan1997, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, compute, METH_VARARGS),
                DECLARE_METHOD(t_Chan1997, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Chan1997)[] = {
                { Py_tp_methods, t_Chan1997__methods_ },
                { Py_tp_init, (void *) t_Chan1997_init_ },
                { Py_tp_getset, t_Chan1997__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Chan1997)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Chan1997, t_Chan1997, Chan1997);

              void t_Chan1997::install(PyObject *module)
              {
                installType(&PY_TYPE(Chan1997), &PY_TYPE_DEF(Chan1997), module, "Chan1997", 0);
              }

              void t_Chan1997::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "class_", make_descriptor(Chan1997::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "wrapfn_", make_descriptor(t_Chan1997::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Chan1997::initializeClass, 1)))
                  return NULL;
                return t_Chan1997::wrap_Object(Chan1997(((t_Chan1997 *) arg)->object.this$));
              }
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Chan1997::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds)
              {
                Chan1997 object((jobject) NULL);

                INT_CALL(object = Chan1997());
                self->object = object;

                return 0;
              }

              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
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
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data)
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
